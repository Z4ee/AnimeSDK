#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1778DFE0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1778E8C0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1778E920)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1778E8D0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1778DFD0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1778DFC0)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_DE156D315A506783_1_TypeDefinitionIndex = 65659;

class Class_2_C219469667DBAA6A_Class_1_DE156D315A506783_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x10
	::Class_2_C219469667DBAA6A* Field_1_7; // 0x18
	::System::Action_1<::System::Single>* Field_1_5; // 0x20
	::Foundation::AssetRequestHandle Field_1_14; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x48
	::UnityEngine::ShaderVariantCollection* Field_1_15; // 0x50
	::System::Object* Field_1_0; // 0x58
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_10; // 0x60
	::System::String* Field_1_6; // 0x68
	::System::Int32 Field_1_1; // 0x70
	::System::Int32 Field_1_9; // 0x74
	::System::Int32 Field_1_8; // 0x78

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
