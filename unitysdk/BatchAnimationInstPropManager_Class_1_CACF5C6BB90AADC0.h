#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BatchAnimationInstPropManager_Struct_2_CEA3583D515FCB73.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_0A8262423CAEDF82_OFFSET UNITYSDK_OFFSET(0x18BA6B30)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_31B0DE2A4D774851_OFFSET UNITYSDK_OFFSET(0x18BA6210)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_467AC3F076594137_OFFSET UNITYSDK_OFFSET(0x18BA69C0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18BA6740)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_91F86025970D7006_OFFSET UNITYSDK_OFFSET(0x18BA6C70)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x18BA6DA0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_BA18C603081098EF_OFFSET UNITYSDK_OFFSET(0x18BA64D0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_D6932A5D20CF55A5_OFFSET UNITYSDK_OFFSET(0x18BA5FF0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA5B60)

inline static constexpr unsigned int BatchAnimationInstPropManager_Class_1_CACF5C6BB90AADC0_TypeDefinitionIndex = 45501;

class BatchAnimationInstPropManager_Class_1_CACF5C6BB90AADC0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BatchAnimationInstPropManager_Struct_2_CEA3583D515FCB73>* Field_1_0; // 0x10
	::System::Collections::Generic::Stack_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchAnimationInstance*, ::System::UInt32>* Field_1_2; // 0x20
	::Unity::Collections::NativeArray_1<::System::Single> Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::System::Boolean Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Int32 Field_1_8; // 0x48
	::System::Int32 Field_1_9; // 0x4C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D6932A5D20CF55A5(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_D6932A5D20CF55A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_31B0DE2A4D774851(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_31B0DE2A4D774851_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_467AC3F076594137(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_467AC3F076594137_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_91F86025970D7006(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_91F86025970D7006_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::UInt32 Method_1_0A8262423CAEDF82(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_0A8262423CAEDF82_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA18C603081098EF(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_BA18C603081098EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_CACF5C6BB90AADC0_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}
};
