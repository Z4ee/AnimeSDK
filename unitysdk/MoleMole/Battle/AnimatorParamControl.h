#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_ADDBOOLEAN_OFFSET UNITYSDK_OFFSET(0xFEFF300)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_ADDINTEGER_OFFSET UNITYSDK_OFFSET(0xFEFF1D0)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0xFEFF0A0)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_PROCESS_OFFSET UNITYSDK_OFFSET(0xFEFF430)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xFEFEDB0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorParamControl_TypeDefinitionIndex = 54244;

	class AnimatorParamControl : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* integerDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* triggerDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* booleanDict; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void AddTrigger(::System::String* triggerName, ::System::Boolean isTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_ADDTRIGGER_OFFSET))(this, triggerName, isTrigger);
		}

		::System::Void AddInteger(::System::String* name, ::System::Int32 integerValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_ADDINTEGER_OFFSET))(this, name, integerValue);
		}

		::System::Void AddBoolean(::System::String* name, ::System::Boolean boolValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_ADDBOOLEAN_OFFSET))(this, name, boolValue);
		}

		::System::Void Process(::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Boolean anti, ::System::Boolean forceInstantUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_PROCESS_OFFSET))(this, animatorComponent, anti, forceInstantUpdate);
		}
	};
}
