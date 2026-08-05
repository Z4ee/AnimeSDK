#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_3_9F8B7B204F0D8E1D_30;

#define MOLEMOLE_SWITCHSECTIONSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13ADC750)
#define MOLEMOLE_SWITCHSECTIONSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13ADC780)
#define MOLEMOLE_SWITCHSECTIONSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADC760)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchSectionShowObj_TypeDefinitionIndex = 78758;

	class SwitchSectionShowObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_3_9F8B7B204F0D8E1D_30* _ntf; // 0x20

		::System::Void _ctor(::Class_3_9F8B7B204F0D8E1D_30* ntf, ::Enum_3_205B03D40B9BD873 page)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_30*, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ__CTOR_OFFSET))(this, ntf, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
