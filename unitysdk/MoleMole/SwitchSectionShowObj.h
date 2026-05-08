#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_3_9F8B7B204F0D8E1D_21;

#define MOLEMOLE_SWITCHSECTIONSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13876320)
#define MOLEMOLE_SWITCHSECTIONSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13876350)
#define MOLEMOLE_SWITCHSECTIONSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13876330)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchSectionShowObj_TypeDefinitionIndex = 73809;

	class SwitchSectionShowObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_3_9F8B7B204F0D8E1D_21* _ntf; // 0x20

		::System::Void _ctor(::Class_3_9F8B7B204F0D8E1D_21* ntf, ::Enum_3_205B03D40B9BD873 page)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_21*, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ__CTOR_OFFSET))(this, ntf, page);
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
