#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_18CF9853F7D27B04;
namespace System { class Action; }

#define CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13762EF0)
#define CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13763060)
#define CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x137630C0)
#define CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13763070)
#define CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13762EE0)
#define CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E__CTOR_OFFSET UNITYSDK_OFFSET(0x13762CB0)

inline static constexpr unsigned int Class_2_18CF9853F7D27B04_Class_1_D4D17D12B74C525E_TypeDefinitionIndex = 59190;

class Class_2_18CF9853F7D27B04_Class_1_D4D17D12B74C525E : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::Class_2_18CF9853F7D27B04* Field_1_3; // 0x18
	::System::Single Field_1_7; // 0x20
	::UnityEngine::Color Field_1_5; // 0x24
	::System::Single Field_1_1; // 0x34
	::System::Single Field_1_2; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::UnityEngine::Color Field_1_4; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18CF9853F7D27B04_CLASS_1_D4D17D12B74C525E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
