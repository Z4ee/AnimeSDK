#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D0C480)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D0C400)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D0C5B0)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17D0C670)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17D0B8F0)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17D0C770)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17D0C6F0)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0C7F0)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D0C800)
#define MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D0C810)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int OnceTriggerString_TypeDefinitionIndex = 69340;

	class OnceTriggerString : public ::System::Object
	{
	public:
		::System::String* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::ChessStateMachine::OnceTriggerString* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::OnceTriggerString*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::MoleMole::ChessStateMachine::OnceTriggerString* left, ::MoleMole::ChessStateMachine::OnceTriggerString* right)
		{
			return ((::System::Boolean(*)(::MoleMole::ChessStateMachine::OnceTriggerString*, ::MoleMole::ChessStateMachine::OnceTriggerString*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::MoleMole::ChessStateMachine::OnceTriggerString* left, ::MoleMole::ChessStateMachine::OnceTriggerString* right)
		{
			return ((::System::Boolean(*)(::MoleMole::ChessStateMachine::OnceTriggerString*, ::MoleMole::ChessStateMachine::OnceTriggerString*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::MoleMole::ChessStateMachine::OnceTriggerString* op_Implicit(::System::String* data)
		{
			return ((::MoleMole::ChessStateMachine::OnceTriggerString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_IMPLICIT_OFFSET))(data);
		}

		static ::System::String* op_Implicit_1(::MoleMole::ChessStateMachine::OnceTriggerString* data)
		{
			return ((::System::String*(*)(::MoleMole::ChessStateMachine::OnceTriggerString*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING_OP_IMPLICIT_1_OFFSET))(data);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ONCETRIGGERSTRING___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
