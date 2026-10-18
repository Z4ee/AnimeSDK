#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613;
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json::Linq { class JArray; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15660390)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15660B20)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15660B80)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15660B30)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15660250)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1565F080)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15660290)

inline static constexpr unsigned int Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613__WriteNodeTree_d__13_TypeDefinitionIndex = 72756;

class Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613__WriteNodeTree_d__13 : public ::System::Object
{
public:
	::Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613* __4__this; // 0x10
	::Newtonsoft::Json::JsonTextWriter* json; // 0x18
	::Newtonsoft::Json::Linq::JArray* _children_5__3; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JProperty*>* __7__wrap1; // 0x30
	::Newtonsoft::Json::Linq::JObject* node; // 0x38
	::System::Int32 _i_5__4; // 0x40
	::System::Int32 __1__state; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13___M__FINALLY1_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
