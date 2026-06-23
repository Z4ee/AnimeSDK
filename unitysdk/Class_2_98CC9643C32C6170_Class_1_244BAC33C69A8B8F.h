#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_98CC9643C32C6170_Class_1_0721B72B57E972E6;
class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12FBC8C0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12FBD170)
#define CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12FBD1D0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12FBD180)
#define CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12FBC8B0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBC8A0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_244BAC33C69A8B8F_TypeDefinitionIndex = 82069;

class Class_2_98CC9643C32C6170_Class_1_244BAC33C69A8B8F : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Action_1<::System::String*>* Field_1_2; // 0x18
	::System::String* Field_1_10; // 0x20
	::System::Action* Field_1_3; // 0x28
	::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF* Field_1_11; // 0x30
	::Class_2_98CC9643C32C6170_Class_1_0721B72B57E972E6* Field_1_6; // 0x38
	::System::Object* Field_1_1; // 0x40
	::System::Action_3<::System::String*, ::System::Int32, ::System::String*>* Field_1_4; // 0x48
	::System::Int32 Field_1_8; // 0x50
	::System::Int32 Field_1_9; // 0x54
	::System::Boolean Field_1_5; // 0x58
	::System::Int32 Field_1_0; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_244BAC33C69A8B8F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
