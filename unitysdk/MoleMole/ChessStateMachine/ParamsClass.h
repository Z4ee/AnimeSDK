#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/CompareType.h"
#include "unitysdk/MoleMole/ChessStateMachine/ParamsType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKTYPEVALID_OFFSET UNITYSDK_OFFSET(0x1A053150)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A053460)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKVALUE_2_OFFSET UNITYSDK_OFFSET(0x1A0534B0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1A053390)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CLEARCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1A053570)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_DRAWVALUESET_OFFSET UNITYSDK_OFFSET(0x1A053110)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A0532F0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GETVALUE_2_OFFSET UNITYSDK_OFFSET(0x1A053340)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0532A0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GET_PARAMSTYPE_1_OFFSET UNITYSDK_OFFSET(0x1A053560)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GET_PARAMSTYPE_OFFSET UNITYSDK_OFFSET(0x1A0529E0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A052A40)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_INITVALUE_OFFSET UNITYSDK_OFFSET(0x1A0529F0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_RESETAFTERCHECKVALID_OFFSET UNITYSDK_OFFSET(0x1A0535F0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A053200)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_SETVALUE_2_OFFSET UNITYSDK_OFFSET(0x1A053250)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0531A0)
#define MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A053670)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsClass_TypeDefinitionIndex = 44273;

	class ParamsClass : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::ParamsType _paramsType; // 0x10
		::System::String* paramGuid; // 0x18
		::System::Single floatValue; // 0x20
		::System::Boolean boolValue; // 0x24
		::System::Int32 intValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::ParamsType get_paramsType()
		{
			return ((::MoleMole::ChessStateMachine::ParamsType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GET_PARAMSTYPE_OFFSET))(this);
		}

		::System::Void InitValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_INITVALUE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GET_VALUE_OFFSET))(this);
		}

		::System::Void DrawValueSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_DRAWVALUESET_OFFSET))(this);
		}

		::System::Boolean CheckTypeValid(::MoleMole::ChessStateMachine::ParamsType paramsType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::ParamsType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKTYPEVALID_OFFSET))(this, paramsType);
		}

		::System::Void SetValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_SETVALUE_OFFSET))(this, value);
		}

		::System::Void SetValue_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_SETVALUE_1_OFFSET))(this, value);
		}

		::System::Void SetValue_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_SETVALUE_2_OFFSET))(this, value);
		}

		::System::Void GetValue(::System::Int32& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GETVALUE_OFFSET))(this, value);
		}

		::System::Void GetValue_1(::System::Single& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GETVALUE_1_OFFSET))(this, value);
		}

		::System::Void GetValue_2(::System::Boolean& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GETVALUE_2_OFFSET))(this, value);
		}

		::System::Boolean CheckValue(::System::Single value, ::MoleMole::ChessStateMachine::CompareType compareType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::ChessStateMachine::CompareType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKVALUE_OFFSET))(this, value, compareType);
		}

		::System::Boolean CheckValue_1(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKVALUE_1_OFFSET))(this, value);
		}

		::System::Boolean CheckValue_2(::System::Int32 value, ::MoleMole::ChessStateMachine::CompareType compareType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ChessStateMachine::CompareType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CHECKVALUE_2_OFFSET))(this, value, compareType);
		}

		::MoleMole::ChessStateMachine::ParamsType get_ParamsType_1()
		{
			return ((::MoleMole::ChessStateMachine::ParamsType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_GET_PARAMSTYPE_1_OFFSET))(this);
		}

		::System::Void ClearCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_CLEARCACHEDATA_OFFSET))(this);
		}

		::System::Void ResetAfterCheckValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PARAMSCLASS_RESETAFTERCHECKVALID_OFFSET))(this);
		}
	};
}
