#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12A7FC40)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12A7FC50)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A82EA0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A82F00)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12A82EB0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A7FC20)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7FC10)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_Class_1_0E2E98A6970720C6_TypeDefinitionIndex = 66034;

class Class_2_E9DF3AE65046D8DB_Class_1_0E2E98A6970720C6 : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::System::ValueTuple_2<::System::Action_4<::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*>*, ::System::String*>> Field_1_4; // 0x18
	::System::Action_1<::System::Single>* Field_1_2; // 0x38
	::System::Single Field_1_3; // 0x40
	::System::Int32 Field_1_0; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
