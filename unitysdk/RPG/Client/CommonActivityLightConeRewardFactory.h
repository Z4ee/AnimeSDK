#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class CommonActivityLightConeRewardGroup; }
namespace RPG::GameCore { class ActivityEquipmentRewardMaterialRow; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY_CREATEGROUP_OFFSET UNITYSDK_OFFSET(0x940AE70)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x940AA20)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x940B0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityLightConeRewardFactory_TypeDefinitionIndex = 50039;

	class CommonActivityLightConeRewardFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CommonActivityLightConeRewardData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::CommonActivityLightConeRewardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY_CREATE_OFFSET))(ID);
		}

		static ::RPG::Client::CommonActivityLightConeRewardGroup* CreateGroup(::RPG::GameCore::ActivityEquipmentRewardMaterialRow* row)
		{
			return ((::RPG::Client::CommonActivityLightConeRewardGroup*(*)(::RPG::GameCore::ActivityEquipmentRewardMaterialRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY_CREATEGROUP_OFFSET))(row);
		}
	};
}
