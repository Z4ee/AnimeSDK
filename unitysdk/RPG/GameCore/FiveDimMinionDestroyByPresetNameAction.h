#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_3_6C47E7AF9BC5DFEC_OFFSET UNITYSDK_OFFSET(0x1BEA13E0)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_3_8F1C2279E980F027_OFFSET UNITYSDK_OFFSET(0x1BEA1420)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA1410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroyByPresetNameAction_TypeDefinitionIndex = 18012;

	class FiveDimMinionDestroyByPresetNameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean OnlyDestroyChild; // 0x10
		::System::String* MinionPresetName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C47E7AF9BC5DFEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_3_6C47E7AF9BC5DFEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F1C2279E980F027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_METHOD_3_8F1C2279E980F027_OFFSET))(a1, a2);
		}
	};
}
