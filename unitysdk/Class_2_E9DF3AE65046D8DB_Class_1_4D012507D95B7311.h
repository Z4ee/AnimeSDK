#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x180665A0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x180665B0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18066A80)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18066AE0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18066A90)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18066580)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311__CTOR_OFFSET UNITYSDK_OFFSET(0x18066570)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_Class_1_4D012507D95B7311_TypeDefinitionIndex = 70966;

class Class_2_E9DF3AE65046D8DB_Class_1_4D012507D95B7311 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::System::Func_3<::System::Single, ::System::Action_1<::System::Single>*, ::System::Collections::IEnumerator*>*> Field_1_4; // 0x10
	::System::Object* Field_1_1; // 0x28
	::System::Action_1<::System::Single>* Field_1_2; // 0x30
	::System::Single Field_1_3; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_4D012507D95B7311_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
