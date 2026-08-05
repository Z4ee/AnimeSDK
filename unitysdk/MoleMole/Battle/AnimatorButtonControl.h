#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDBOOLEAN_OFFSET UNITYSDK_OFFSET(0x11448310)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDINTEGER_OFFSET UNITYSDK_OFFSET(0x114482A0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x11448230)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_PROCESSANIMATORPARAMCONTROL_OFFSET UNITYSDK_OFFSET(0x11448380)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x114481E0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorButtonControl_TypeDefinitionIndex = 88691;

	class AnimatorButtonControl : public ::System::Object
	{
	public:
		::System::String* activeSkillName; // 0x10
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void AddTrigger(::System::String* triggerName, ::System::Boolean isTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDTRIGGER_OFFSET))(this, triggerName, isTrigger);
		}

		::System::Void AddInteger(::System::String* name, ::System::Int32 integerValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDINTEGER_OFFSET))(this, name, integerValue);
		}

		::System::Void AddBoolean(::System::String* name, ::System::Boolean boolValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDBOOLEAN_OFFSET))(this, name, boolValue);
		}

		::System::Void ProcessAnimatorParamControl(::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Boolean anti)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_PROCESSANIMATORPARAMCONTROL_OFFSET))(this, animatorComponent, anti);
		}
	};
}
