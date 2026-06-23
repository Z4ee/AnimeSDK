#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_TIPSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17E062A0)

namespace MoleMole
{
	inline static constexpr unsigned int TipShowObj_TypeDefinitionIndex = 55709;

	class TipShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 Group; // 0x28

		::System::Void _ctor(::Enum_3_205B03D40B9BD873 showPage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_TIPSHOWOBJ__CTOR_OFFSET))(this, showPage);
		}
	};
}
