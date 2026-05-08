#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1339A1C0)
#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1339A1D0)
#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1339A4F0)
#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1339A550)
#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1339A500)
#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1339A1A0)
#define CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1339A190)

inline static constexpr unsigned int Class_1_92D256FC55D8D091_Class_1_71D2E8B49F9E8720_2_TypeDefinitionIndex = 67027;

class Class_1_92D256FC55D8D091_Class_1_71D2E8B49F9E8720_2 : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* Field_1_3; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::System::Action*> Field_1_5; // 0x20
	::System::Single Field_1_2; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Single Field_1_4; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_71D2E8B49F9E8720_2_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
