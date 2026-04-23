#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E28150)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_7AFF88025C851B20_OFFSET UNITYSDK_OFFSET(0x18E27E90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_CF959DE87EFCFA44_OFFSET UNITYSDK_OFFSET(0x18E27F60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E27F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillMaxHitSplitCount_TypeDefinitionIndex = 22574;

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

		static ::System::Void Method_4_7AFF88025C851B20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_METHOD_4_7AFF88025C851B20_OFFSET))(a1, a2);
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
