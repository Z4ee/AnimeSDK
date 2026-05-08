#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035.h"
#include "unitysdk/System/Object.h"

class Class_1_1D484F6D8A6AB5AA;
namespace System { class String; }
namespace UnityEngine { class Ping; }

#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12DC5590)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12DC5CF0)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12DC5D50)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12DC5D00)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12DC5580)
#define CLASS_1_1D484F6D8A6AB5AA_CLASS_1_06F1E10985628317__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC4C00)

inline static constexpr unsigned int Class_1_1D484F6D8A6AB5AA_Class_1_06F1E10985628317_TypeDefinitionIndex = 50329;

class Class_1_1D484F6D8A6AB5AA_Class_1_06F1E10985628317 : public ::System::Object
{
public:
	::UnityEngine::Ping* Field_1_8; // 0x10
	::Class_1_1D484F6D8A6AB5AA* Field_1_3; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::Enum_3_7D1331C413E60035 Field_1_2; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Single Field_1_1; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Boolean Field_1_6; // 0x40

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
