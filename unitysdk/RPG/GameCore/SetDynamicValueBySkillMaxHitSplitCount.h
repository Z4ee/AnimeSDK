#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C5F1200)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_0390F80CA456D4C5_OFFSET UNITYSDK_OFFSET(0x1C5F0FD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_CF959DE87EFCFA44_OFFSET UNITYSDK_OFFSET(0x1C5F1010)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F1000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillMaxHitSplitCount_TypeDefinitionIndex = 22750;

	class SetDynamicValueBySkillMaxHitSplitCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0390F80CA456D4C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_0390F80CA456D4C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF959DE87EFCFA44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_CF959DE87EFCFA44_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
