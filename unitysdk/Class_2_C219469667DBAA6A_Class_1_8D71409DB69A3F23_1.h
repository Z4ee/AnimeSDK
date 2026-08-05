#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12DC9640)
#define CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12DC9F10)
#define CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12DC9F70)
#define CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12DC9F20)
#define CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12DC9630)
#define CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC9620)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_8D71409DB69A3F23_1_TypeDefinitionIndex = 65661;

class Class_2_C219469667DBAA6A_Class_1_8D71409DB69A3F23_1 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_15; // 0x10
	::Class_2_C219469667DBAA6A* Field_1_1; // 0x30
	::System::Action_1<::System::Single>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_11; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x48
	::System::String* Field_1_0; // 0x50
	::System::Object* Field_1_2; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x60
	::System::Int32 Field_1_8; // 0x68
	::System::Single Field_1_7; // 0x6C
	::System::Int32 Field_1_9; // 0x70
	::System::Int32 Field_1_3; // 0x74
	::System::Single Field_1_10; // 0x78

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_8D71409DB69A3F23_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
