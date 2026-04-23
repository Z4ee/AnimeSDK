#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageDataPropertyType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18DD5B00)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_0FEE0E4F0EC933AF_OFFSET UNITYSDK_OFFSET(0x18DD5910)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_578658140F24B247_OFFSET UNITYSDK_OFFSET(0x18DD5840)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD58C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSetDynamicValueByDamageDataProperty_TypeDefinitionIndex = 23173;

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

		static ::System::Void Method_4_578658140F24B247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_578658140F24B247_OFFSET))(a1, a2);
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
