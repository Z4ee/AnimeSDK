#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1288DBF0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1288E100)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1288E160)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1288E110)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1288DBE0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52__CTOR_OFFSET UNITYSDK_OFFSET(0x1288DBD0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_5D085FBA8165CB52_TypeDefinitionIndex = 50163;

class Class_1_8B550A61FC9DDA82_Class_1_5D085FBA8165CB52 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::UnityEngine::UI::Text* Field_1_10; // 0x18
	::System::Object* Field_1_1; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_1_0; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Single Field_1_8; // 0x34
	::System::Int32 Field_1_2; // 0x38
	::System::Int64 Field_1_7; // 0x40
	::System::Int64 Field_1_6; // 0x48
	::System::Single Field_1_9; // 0x50
	::System::Int32 Field_1_11; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5D085FBA8165CB52_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
