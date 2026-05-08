#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_NEOGOLDENMECHASHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13EAEEF0)
#define MOLEMOLE_NEOGOLDENMECHASHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAEEB0)
#define MOLEMOLE_NEOGOLDENMECHASHOWOBJ__ONPROCESS_B__2_0_OFFSET UNITYSDK_OFFSET(0x13EAF0C0)

namespace MoleMole
{
	inline static constexpr unsigned int NeoGoldenMechaShowObj_TypeDefinitionIndex = 44533;

	class NeoGoldenMechaShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 PopBuildID; // 0x28

		::System::Void _ctor(::System::Int32 popBuildID, ::Enum_3_205B03D40B9BD873 showPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASHOWOBJ__CTOR_OFFSET))(this, popBuildID, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void _OnProcess_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASHOWOBJ__ONPROCESS_B__2_0_OFFSET))(this);
		}
	};
}
