#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_62;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x164D8020)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x164D8350)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164D82E0)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x164D83D0)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164D8340)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x164D82F0)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164D8010)
#define CLASS_1_98B775F942E4158D___USEPROFILE_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x164D7B00)

inline static constexpr unsigned int Class_1_98B775F942E4158D___UseProfile_d__18_TypeDefinitionIndex = 32159;

class Class_1_98B775F942E4158D___UseProfile_d__18 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_62* loader; // 0x10
	::Class_0_16E4307DCC419505_62* __3__loader; // 0x18
	::System::String* __3__header; // 0x20
	::System::String* header; // 0x28
	::System::Object* __2__current; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
