#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F5190)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY_METHOD_4_79592DE3421A5CF6_OFFSET UNITYSDK_OFFSET(0x1D4F4DA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY_METHOD_4_AF07DF4CCC2B992F_OFFSET UNITYSDK_OFFSET(0x1D4F4C40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByProperty_TypeDefinitionIndex = 22824;

	class SetDynamicValueByProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AbilityProperty Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF07DF4CCC2B992F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY_METHOD_4_AF07DF4CCC2B992F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79592DE3421A5CF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY_METHOD_4_79592DE3421A5CF6_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
