#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageDataPropertyType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C40F10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_042ADCB9E55963D9_OFFSET UNITYSDK_OFFSET(0x19C390D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_E0A03F7442BB7C11_OFFSET UNITYSDK_OFFSET(0x19C40E90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C39080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByDamageDataProperty_TypeDefinitionIndex = 21837;

	class SetDynamicValueByDamageDataProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::DamageDataPropertyType Property; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0A03F7442BB7C11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_E0A03F7442BB7C11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_042ADCB9E55963D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByDamageDataProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_METHOD_4_042ADCB9E55963D9_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
