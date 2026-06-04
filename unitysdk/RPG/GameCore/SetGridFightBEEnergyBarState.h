#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_METHOD_3_9F8BBF54F9031FC8_OFFSET UNITYSDK_OFFSET(0x19C50840)
#define RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_METHOD_3_CE8BA87F034891F7_OFFSET UNITYSDK_OFFSET(0x19C506B0)
#define RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C506F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGridFightBEEnergyBarState_TypeDefinitionIndex = 21298;

	class SetGridFightBEEnergyBarState : public ::RPG::GameCore::TaskConfig
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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE8BA87F034891F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGridFightBEEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGridFightBEEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_METHOD_3_CE8BA87F034891F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F8BBF54F9031FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGridFightBEEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGridFightBEEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_METHOD_3_9F8BBF54F9031FC8_OFFSET))(a1, a2);
		}
	};
}
