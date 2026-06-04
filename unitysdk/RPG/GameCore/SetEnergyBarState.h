#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_5C4F75B132516E64_OFFSET UNITYSDK_OFFSET(0x19C4A890)
#define RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_9F74823ECA5FCF0D_OFFSET UNITYSDK_OFFSET(0x19C4AA30)
#define RPG_GAMECORE_SETENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4A8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEnergyBarState_TypeDefinitionIndex = 21497;

	class SetEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::System::Int32 BarType; // 0x24
		::RPG::GameCore::EnergyBarState CurrentState; // 0x28
		::RPG::GameCore::DynamicFloat* CD; // 0x30
		::System::String* IconPath; // 0x38
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x40
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x48
		::RPG::GameCore::DynamicFloat* ActiveCount; // 0x50
		::System::String* PrefabPath; // 0x58
		::Il2CppArray<::System::String*>* EnergyDotPrefabPaths; // 0x60
		::System::Boolean SkipInCharmAction; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C4F75B132516E64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_5C4F75B132516E64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F74823ECA5FCF0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_9F74823ECA5FCF0D_OFFSET))(a1, a2);
		}
	};
}
