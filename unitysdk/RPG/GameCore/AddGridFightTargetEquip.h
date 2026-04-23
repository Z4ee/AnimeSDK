#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_6BECA9AFE0F9C18C_OFFSET UNITYSDK_OFFSET(0x1863F830)
#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_EE829B4A30965EED_OFFSET UNITYSDK_OFFSET(0x1863F8B0)
#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1863F880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGridFightTargetEquip_TypeDefinitionIndex = 21424;

	class AddGridFightTargetEquip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean isUpgradeEquip; // 0x20
		::System::UInt32 EquipID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BECA9AFE0F9C18C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGridFightTargetEquip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGridFightTargetEquip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_6BECA9AFE0F9C18C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE829B4A30965EED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_METHOD_3_EE829B4A30965EED_OFFSET))(a1, a2);
		}
	};
}
