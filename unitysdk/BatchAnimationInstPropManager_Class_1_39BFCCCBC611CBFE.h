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

#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_31B0DE2A4D774851_OFFSET UNITYSDK_OFFSET(0x8FCB430)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_460D47D8E8AEC245_OFFSET UNITYSDK_OFFSET(0x8FCB100)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_91F86025970D7006_OFFSET UNITYSDK_OFFSET(0x8FCBE60)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_94DDD51B5B800C94_OFFSET UNITYSDK_OFFSET(0x8FCBD40)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x8FCBFA0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_BA18C603081098EF_OFFSET UNITYSDK_OFFSET(0x8FCB710)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_C0D69F22318C86FE_OFFSET UNITYSDK_OFFSET(0x8FCBC30)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8FCB990)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCABE0)

inline static constexpr unsigned int BatchAnimationInstPropManager_Class_1_39BFCCCBC611CBFE_TypeDefinitionIndex = 38198;

class BatchAnimationInstPropManager_Class_1_39BFCCCBC611CBFE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchAnimationInstance*, ::System::UInt32>* Field_1_7; // 0x10
	::System::Collections::Generic::Stack_1<::System::UInt32>* Field_1_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BatchAnimationInstPropManager_Struct_2_CEA3583D515FCB73>* Field_1_8; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Int32 Field_1_3; // 0x30
	::System::Int32 Field_1_2; // 0x34
	::System::Boolean Field_1_5; // 0x38
	::System::Int32 Field_1_4; // 0x3C
	::Unity::Collections::NativeArray_1<::System::Single> Field_1_6; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_460D47D8E8AEC245(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_460D47D8E8AEC245_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_31B0DE2A4D774851(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_31B0DE2A4D774851_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C0D69F22318C86FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_C0D69F22318C86FE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_91F86025970D7006(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_91F86025970D7006_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::UInt32 Method_1_94DDD51B5B800C94(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_94DDD51B5B800C94_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA18C603081098EF(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_BA18C603081098EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_39BFCCCBC611CBFE_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};
