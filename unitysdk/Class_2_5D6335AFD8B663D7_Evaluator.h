#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A5830)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x159A58A0)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x159A5880)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x159A5870)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x159A4A70)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x159A58B0)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x159A5890)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x159A5820)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Evaluator_TypeDefinitionIndex = 57588;

class Class_2_5D6335AFD8B663D7_Evaluator : public ::System::Object
{
public:
	::System::String* _UniqueName_k__BackingField; // 0x10
	::System::Boolean _IsPaused_k__BackingField; // 0x18
	::System::Boolean _IsFinished_k__BackingField; // 0x19

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Boolean get_IsPaused()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISPAUSED_OFFSET))(this);
	}

	::System::Void set_IsPaused(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISPAUSED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISFINISHED_OFFSET))(this, a1);
	}
};
