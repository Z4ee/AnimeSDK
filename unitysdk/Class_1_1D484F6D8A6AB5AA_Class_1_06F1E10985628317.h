#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1D484F6D8A6AB5AA;
namespace System { class String; }
namespace UnityEngine { class Ping; }

#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17527280)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175279C0)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17527A20)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x175279D0)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17527270)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317__CTOR_OFFSET UNITYSDK_OFFSET(0x17527260)

inline static constexpr unsigned int Class_1_1D484F6D8A6AB5AA_Class_1_06F1E10985628317_TypeDefinitionIndex = 40428;

class Class_1_1D484F6D8A6AB5AA_Class_1_06F1E10985628317 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::Class_1_1D484F6D8A6AB5AA* Field_1_6; // 0x18
	::UnityEngine::Ping* Field_1_9; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Boolean Field_1_11; // 0x2C
	::System::Single Field_1_10; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::Enum_3_7D1331C413E60035_1 Field_1_7; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
