#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_070B94C36DB37C6E_OFFSET UNITYSDK_OFFSET(0x175EF430)
#define RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_0B31D2B743AD9C31_OFFSET UNITYSDK_OFFSET(0x175EF3B0)
#define RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x175EF400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCurseChestPropInteract_TypeDefinitionIndex = 20283;

	class RogueCurseChestPropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InteractID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B31D2B743AD9C31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCurseChestPropInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCurseChestPropInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_0B31D2B743AD9C31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_070B94C36DB37C6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCurseChestPropInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCurseChestPropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_070B94C36DB37C6E_OFFSET))(a1, a2);
		}
	};
}
