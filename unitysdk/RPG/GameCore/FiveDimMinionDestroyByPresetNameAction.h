#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_4_1F72B4BA3F76C26A_OFFSET UNITYSDK_OFFSET(0x1D6C8500)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_4_2F4B9EB4AC33C8A1_OFFSET UNITYSDK_OFFSET(0x1D6C84C0)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C84F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroyByPresetNameAction_TypeDefinitionIndex = 18745;

	class FiveDimMinionDestroyByPresetNameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean OnlyDestroyChild; // 0x10
		::System::String* MinionPresetName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2F4B9EB4AC33C8A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_4_2F4B9EB4AC33C8A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F72B4BA3F76C26A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_4_1F72B4BA3F76C26A_OFFSET))(a1, a2);
		}
	};
}
