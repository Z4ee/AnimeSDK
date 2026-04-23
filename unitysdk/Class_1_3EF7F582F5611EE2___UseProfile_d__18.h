#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_62;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17B12C10)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17B12F40)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17B12ED0)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17B12FC0)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17B12F30)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17B12EE0)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B12C00)
#define CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x17B12200)

inline static constexpr unsigned int Class_1_3EF7F582F5611EE2___UseProfile_d__18_TypeDefinitionIndex = 37879;

class Class_1_3EF7F582F5611EE2___UseProfile_d__18 : public ::System::Object
{
public:
	::System::String* header; // 0x10
	::System::String* __3__header; // 0x18
	::Class_0_16E4307DCC419505_62* loader; // 0x20
	::System::Object* __2__current; // 0x28
	::Class_0_16E4307DCC419505_62* __3__loader; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
