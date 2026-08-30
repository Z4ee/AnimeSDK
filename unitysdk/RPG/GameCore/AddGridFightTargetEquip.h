#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_18436486CF063478_OFFSET UNITYSDK_OFFSET(0x1CDB2F60)
#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_80134C6047659D81_OFFSET UNITYSDK_OFFSET(0x1CDB2FA0)
#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB2F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGridFightTargetEquip_TypeDefinitionIndex = 22286;

	class AddGridFightTargetEquip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean isUpgradeEquip; // 0x20
		::System::Boolean isAllEquipCraftable; // 0x21
		::System::UInt32 EquipID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18436486CF063478(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGridFightTargetEquip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGridFightTargetEquip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_18436486CF063478_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80134C6047659D81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_80134C6047659D81_OFFSET))(a1, a2);
		}
	};
}
