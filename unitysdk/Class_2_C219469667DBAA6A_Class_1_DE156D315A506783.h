#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
class Class_2_C219469667DBAA6A_Class_1_3D4454504DEEEB52;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12791030)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12791C30)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12791C90)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12791C40)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12791020)
#define CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783__CTOR_OFFSET UNITYSDK_OFFSET(0x12791010)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_DE156D315A506783_TypeDefinitionIndex = 65648;

class Class_2_C219469667DBAA6A_Class_1_DE156D315A506783 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_14; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x38
	::Class_2_C219469667DBAA6A_Class_1_3D4454504DEEEB52* Field_1_7; // 0x40
	::UnityEngine::ShaderVariantCollection* Field_1_15; // 0x48
	::System::Object* Field_1_2; // 0x50
	::Class_2_C219469667DBAA6A* Field_1_1; // 0x58
	::System::Single Field_1_9; // 0x60
	::System::Int32 Field_1_5; // 0x64
	::System::Boolean Field_1_11; // 0x68
	::System::Int32 Field_1_8; // 0x6C
	::System::Single Field_1_10; // 0x70
	::System::Int32 Field_1_4; // 0x74
	::System::Int32 Field_1_3; // 0x78

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
