#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10F78DD0)
#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10F78DE0)
#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F79380)
#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F793E0)
#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10F79390)
#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F78DB0)
#define CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10F78DA0)

inline static constexpr unsigned int Class_1_9903E79CA9B49844_Class_1_71D2E8B49F9E8720_1_TypeDefinitionIndex = 60705;

class Class_1_9903E79CA9B49844_Class_1_71D2E8B49F9E8720_1 : public ::System::Object
{
public:
	::System::Object* Field_1_2; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::System::Action*> Field_1_6; // 0x20
	::System::Int32 Field_1_3; // 0x38
	::System::Single Field_1_1; // 0x3C
	::System::Single Field_1_7; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_71D2E8B49F9E8720_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
