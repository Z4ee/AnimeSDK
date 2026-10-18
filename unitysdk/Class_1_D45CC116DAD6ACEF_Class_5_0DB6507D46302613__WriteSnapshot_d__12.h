#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613;
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1566C9B0)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1566D040)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1566D0A0)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1566D050)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1566C870)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1566ACC0)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1566C8B0)

inline static constexpr unsigned int Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613__WriteSnapshot_d__12_TypeDefinitionIndex = 72758;

class Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613__WriteSnapshot_d__12 : public ::System::Object
{
public:
	::Newtonsoft::Json::JsonTextWriter* json; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JProperty*>* __7__wrap1; // 0x20
	::Newtonsoft::Json::Linq::JObject* snapshot; // 0x28
	::Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613* __4__this; // 0x30
	::System::Int32 __1__state; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12___M__FINALLY1_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
