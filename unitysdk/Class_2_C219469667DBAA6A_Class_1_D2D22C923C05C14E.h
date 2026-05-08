#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x140C8A30)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140C9270)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140C92D0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x140C9280)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140C8A20)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E__CTOR_OFFSET UNITYSDK_OFFSET(0x140C8A10)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_D2D22C923C05C14E_TypeDefinitionIndex = 59408;

class Class_2_C219469667DBAA6A_Class_1_D2D22C923C05C14E : public ::System::Object
{
public:
	::Class_2_C219469667DBAA6A* Field_1_2; // 0x10
	::System::Action_1<::System::Single>* Field_1_3; // 0x18
	::System::Object* Field_1_1; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::Boolean Field_1_7; // 0x30
	::System::Boolean Field_1_4; // 0x31
	::System::Boolean Field_1_5; // 0x32
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
