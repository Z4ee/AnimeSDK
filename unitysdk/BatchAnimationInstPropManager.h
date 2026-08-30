#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BatchAnimationInstPropManager_Class_1_096253A6BCC3A8C9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONINSTPROPMANAGER_HASPART_OFFSET UNITYSDK_OFFSET(0xC157000)
#define BATCHANIMATIONINSTPROPMANAGER_INITPART_OFFSET UNITYSDK_OFFSET(0xC156F10)
#define BATCHANIMATIONINSTPROPMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC4F0F80)
#define BATCHANIMATIONINSTPROPMANAGER_METHOD_5_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0xC157570)
#define BATCHANIMATIONINSTPROPMANAGER_METHOD_5_E6FC0C87A75769F1_OFFSET UNITYSDK_OFFSET(0xC1570B0)
#define BATCHANIMATIONINSTPROPMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC4F0FD0)
#define BATCHANIMATIONINSTPROPMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0xC157060)
#define BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xC157440)
#define BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC1573D0)
#define BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_1_OFFSET UNITYSDK_OFFSET(0xC1572B0)
#define BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_OFFSET UNITYSDK_OFFSET(0xC157230)
#define BATCHANIMATIONINSTPROPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F1020)

inline static constexpr unsigned int BatchAnimationInstPropManager_TypeDefinitionIndex = 47749;

class BatchAnimationInstPropManager : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rendering::BatchAnimation* BatchAnimation; // 0x18
	::System::Int32 GPNLNBIIOPP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BatchAnimationInstPropManager_Class_1_096253A6BCC3A8C9*>* IEOABMPAGAA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void InitPart(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_INITPART_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean HasPart(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_HASPART_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_RELEASE_OFFSET))(this);
	}

	::System::Void SetInstancedProp(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetInstancedProp_1(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveInstance(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_OFFSET))(this, a1);
	}

	::System::Void RemoveInstance_1(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_METHOD_5_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_5_E6FC0C87A75769F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_METHOD_5_E6FC0C87A75769F1_OFFSET))(this);
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
