#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_2FFF4AA972C84BB1_OFFSET UNITYSDK_OFFSET(0x176CA6C0)
#define RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_69FFF948B6EA4CA2_OFFSET UNITYSDK_OFFSET(0x176CA520)
#define RPG_GAMECORE_SETENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CA560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEnergyBarState_TypeDefinitionIndex = 20929;

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

		static ::System::Void Method_3_69FFF948B6EA4CA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_69FFF948B6EA4CA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2FFF4AA972C84BB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_METHOD_3_2FFF4AA972C84BB1_OFFSET))(a1, a2);
		}
	};
}
