#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_402121D94A91AFBA;
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class CustomYieldInstruction; }

#define CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFAD34D0)
#define CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFAD3BD0)
#define CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFAD3C30)
#define CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFAD3BE0)
#define CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFAD34C0)
#define CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD34B0)

inline static constexpr unsigned int Class_3_402121D94A91AFBA_Class_1_CFE4AB920D1BF9B7_TypeDefinitionIndex = 39704;

class Class_3_402121D94A91AFBA_Class_1_CFE4AB920D1BF9B7 : public ::System::Object
{
public:
	::Class_3_402121D94A91AFBA* Field_1_3; // 0x10
	::System::Collections::IEnumerator* Field_1_2; // 0x18
	::System::Collections::IEnumerator* Field_1_5; // 0x20
	::System::Object* Field_1_1; // 0x28
	::UnityEngine::CustomYieldInstruction* Field_1_4; // 0x30
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_CLASS_1_CFE4AB920D1BF9B7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
