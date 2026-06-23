#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BindData;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MATERIALPARAMETERBINDER_APPLYBINDINGS_OFFSET UNITYSDK_OFFSET(0x1CEE26F0)
#define MATERIALPARAMETERBINDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CEE1B90)
#define MATERIALPARAMETERBINDER_CACHEBINDINGS_OFFSET UNITYSDK_OFFSET(0x1CEE1DD0)
#define MATERIALPARAMETERBINDER_CLEARMPB_OFFSET UNITYSDK_OFFSET(0x1CEE2B60)
#define MATERIALPARAMETERBINDER_ENSUREINIT_OFFSET UNITYSDK_OFFSET(0x1CEE1BE0)
#define MATERIALPARAMETERBINDER_FORCEAPPLY_OFFSET UNITYSDK_OFFSET(0x1CEE32C0)
#define MATERIALPARAMETERBINDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CEE2EE0)
#define MATERIALPARAMETERBINDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CEE2B10)
#define MATERIALPARAMETERBINDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CEE2530)
#define MATERIALPARAMETERBINDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1CEE3660)
#define MATERIALPARAMETERBINDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CEE2580)
#define MATERIALPARAMETERBINDER_WRITEPROPBLOCK_OFFSET UNITYSDK_OFFSET(0x1CEE2F30)
#define MATERIALPARAMETERBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE36B0)

inline static constexpr unsigned int MaterialParameterBinder_TypeDefinitionIndex = 26674;

class MaterialParameterBinder : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* rend; // 0x18
	::UnityEngine::MaterialPropertyBlock* propBlock; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* previousValues; // 0x28
	::System::Collections::Generic::List_1<::BindData*>* bindings; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_ONDESTROY_OFFSET))(this);
	}

	::System::Void EnsureInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_ENSUREINIT_OFFSET))(this);
	}

	::System::Void ClearMPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_CLEARMPB_OFFSET))(this);
	}

	::System::Void CacheBindings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_CACHEBINDINGS_OFFSET))(this);
	}

	::System::Void ApplyBindings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_APPLYBINDINGS_OFFSET))(this);
	}

	::System::Void ForceApply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_FORCEAPPLY_OFFSET))(this);
	}

	::System::Void WritePropBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_WRITEPROPBLOCK_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_ONVALIDATE_OFFSET))(this);
	}
};
