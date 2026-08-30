#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_72D11B0E42E6EF95_OFFSET UNITYSDK_OFFSET(0x1D3CC120)
#define RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_B2FDA26161451908_OFFSET UNITYSDK_OFFSET(0x1D3CC0E0)
#define RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CC110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCurseChestPropInteract_TypeDefinitionIndex = 21853;

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

		static ::System::Void Method_3_B2FDA26161451908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCurseChestPropInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCurseChestPropInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_B2FDA26161451908_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72D11B0E42E6EF95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCurseChestPropInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCurseChestPropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTPROPINTERACT_METHOD_3_72D11B0E42E6EF95_OFFSET))(a1, a2);
		}
	};
}
