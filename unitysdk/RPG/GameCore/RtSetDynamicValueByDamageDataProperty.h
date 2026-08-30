#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageDataPropertyType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CCECAC0)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_0FEE0E4F0EC933AF_OFFSET UNITYSDK_OFFSET(0x1CCEC8D0)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_D7E2A3E42DD8FAC2_OFFSET UNITYSDK_OFFSET(0x1CCEC890)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEC8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSetDynamicValueByDamageDataProperty_TypeDefinitionIndex = 23900;

	class RtSetDynamicValueByDamageDataProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::DamageDataPropertyType Property; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7E2A3E42DD8FAC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_D7E2A3E42DD8FAC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FEE0E4F0EC933AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_0FEE0E4F0EC933AF_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
