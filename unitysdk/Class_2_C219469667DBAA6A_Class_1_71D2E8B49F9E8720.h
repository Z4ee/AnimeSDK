#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x115BA4D0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x115BA4E0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115BA850)
#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115BA8B0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x115BA860)
#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115BA4B0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720__CTOR_OFFSET UNITYSDK_OFFSET(0x115BA4A0)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_71D2E8B49F9E8720_TypeDefinitionIndex = 39742;

class Class_2_C219469667DBAA6A_Class_1_71D2E8B49F9E8720 : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::System::Action*> Field_1_5; // 0x18
	::System::Object* Field_1_1; // 0x30
	::System::Single Field_1_4; // 0x38
	::System::Single Field_1_2; // 0x3C
	::System::Int32 Field_1_0; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_71D2E8B49F9E8720_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
