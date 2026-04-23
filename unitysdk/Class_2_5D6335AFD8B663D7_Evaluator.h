#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9BC840)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD9BC930)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xD9BC910)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD9BC900)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xD9BC880)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD9BC940)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xD9BC920)
#define CLASS_2_5D6335AFD8B663D7_EVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD9BC830)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Evaluator_TypeDefinitionIndex = 52939;

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

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Boolean get_IsPaused()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISPAUSED_OFFSET))(this);
	}

	::System::Void set_IsPaused(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISPAUSED_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_EVALUATOR_SET_ISFINISHED_OFFSET))(this, value);
	}
};
