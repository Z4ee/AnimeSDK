#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassItemType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_WORMCOMPASSITEMGRIDDATA_METHOD_1_3BF44B8D9F306578_OFFSET UNITYSDK_OFFSET(0xA188520)
#define RPG_CLIENT_PROP_WORMCOMPASSITEMGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1885C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassItemGridData_TypeDefinitionIndex = 64372;

	class WormCompassItemGridData : public ::System::Object
	{
	public:
		::System::Int32 Row; // 0x10
		::System::Int32 Col; // 0x14
		::Il2CppArray<::RPG::Client::Prop::WormCompassItemType>* Items; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSITEMGRIDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassItemType Method_1_3BF44B8D9F306578(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassItemType(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSITEMGRIDDATA_METHOD_1_3BF44B8D9F306578_OFFSET))(this, a1, a2);
		}
	};
}
