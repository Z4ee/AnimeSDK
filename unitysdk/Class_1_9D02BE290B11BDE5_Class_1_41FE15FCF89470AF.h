#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15083B70)
#define CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15083E50)
#define CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15083EB0)
#define CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15083E60)
#define CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15083B60)
#define CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF__CTOR_OFFSET UNITYSDK_OFFSET(0x15083B50)

inline static constexpr unsigned int Class_1_9D02BE290B11BDE5_Class_1_41FE15FCF89470AF_TypeDefinitionIndex = 39258;

class Class_1_9D02BE290B11BDE5_Class_1_41FE15FCF89470AF : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::Action_1<::System::Single>* Field_1_3; // 0x18
	::Il2CppArray<::Foundation::AssetPath>* Field_1_4; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Single Field_1_2; // 0x2C
	::System::Int32 Field_1_6; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_CLASS_1_41FE15FCF89470AF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
