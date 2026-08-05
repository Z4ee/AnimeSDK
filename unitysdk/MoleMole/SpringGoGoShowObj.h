#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_SPRINGGOGOSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13AD7460)
#define MOLEMOLE_SPRINGGOGOSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD7420)

namespace MoleMole
{
	inline static constexpr unsigned int SpringGoGoShowObj_TypeDefinitionIndex = 45762;

	class SpringGoGoShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _id; // 0x28

		::System::Void _ctor(::System::Int32 id, ::Enum_3_205B03D40B9BD873 showPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_SPRINGGOGOSHOWOBJ__CTOR_OFFSET))(this, id, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPRINGGOGOSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
