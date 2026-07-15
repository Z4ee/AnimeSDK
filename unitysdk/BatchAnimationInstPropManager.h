#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BatchAnimationInstPropManager_Class_1_CACF5C6BB90AADC0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONINSTPROPMANAGER_CLEARINSTANCEDPROP_1_OFFSET UNITYSDK_OFFSET(0x18BA5F10)
#define BATCHANIMATIONINSTPROPMANAGER_CLEARINSTANCEDPROP_OFFSET UNITYSDK_OFFSET(0x18BA5EA0)
#define BATCHANIMATIONINSTPROPMANAGER_INITPART_OFFSET UNITYSDK_OFFSET(0x18BA5A60)
#define BATCHANIMATIONINSTPROPMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18BA6880)
#define BATCHANIMATIONINSTPROPMANAGER_METHOD_5_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x18BA6590)
#define BATCHANIMATIONINSTPROPMANAGER_METHOD_5_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x18BA6360)
#define BATCHANIMATIONINSTPROPMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18BA68D0)
#define BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_1_OFFSET UNITYSDK_OFFSET(0x18BA5D50)
#define BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_OFFSET UNITYSDK_OFFSET(0x18BA5CD0)
#define BATCHANIMATIONINSTPROPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA6920)

inline static constexpr unsigned int BatchAnimationInstPropManager_TypeDefinitionIndex = 45499;

class BatchAnimationInstPropManager : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rendering::BatchAnimation* BatchAnimation; // 0x18
	::System::Int32 Field_5_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BatchAnimationInstPropManager_Class_1_CACF5C6BB90AADC0*>* Field_5_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void InitPart(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_INITPART_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetInstancedProp(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearInstancedProp(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLEARINSTANCEDPROP_OFFSET))(this, a1, a2);
	}

	::System::Void SetInstancedProp_1(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearInstancedProp_1(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLEARINSTANCEDPROP_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_METHOD_5_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_5_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_METHOD_5_14014646206E49EF_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_ONDESTROY_OFFSET))(this);
	}
};
