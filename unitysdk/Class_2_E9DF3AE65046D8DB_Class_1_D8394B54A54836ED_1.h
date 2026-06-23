#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E9DF3AE65046D8DB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11398C20)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11398CB0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11398D10)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11398CC0)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11398C10)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11398C00)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_Class_1_D8394B54A54836ED_1_TypeDefinitionIndex = 70965;

class Class_2_E9DF3AE65046D8DB_Class_1_D8394B54A54836ED_1 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_2_E9DF3AE65046D8DB* Field_1_2; // 0x18
	::System::Action_1<::System::Single>* Field_1_3; // 0x20
	::System::Action_1<::System::String*>* Field_1_5; // 0x28
	::System::Object* Field_1_1; // 0x30
	::System::Single Field_1_4; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_D8394B54A54836ED_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
