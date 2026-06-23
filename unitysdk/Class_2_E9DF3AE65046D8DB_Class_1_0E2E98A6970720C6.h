#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x188E0460)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x188E0470)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x188E3BE0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x188E3C40)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x188E3BF0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188E0440)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_0E2E98A6970720C6__CTOR_OFFSET UNITYSDK_OFFSET(0x188E0430)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_Class_1_0E2E98A6970720C6_TypeDefinitionIndex = 70973;

class Class_2_E9DF3AE65046D8DB_Class_1_0E2E98A6970720C6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::System::ValueTuple_2<::System::Action_4<::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*>*, ::System::String*>> Field_1_4; // 0x10
	::System::Object* Field_1_1; // 0x30
	::System::Action_1<::System::Single>* Field_1_2; // 0x38
	::System::Int32 Field_1_0; // 0x40
	::System::Single Field_1_3; // 0x44

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
