#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoAnimationHDRProperty_PropertyWriteMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoAnimationHDRProperty_HDRProperty;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MONOANIMATIONHDRPROPERTY_APPLY_OFFSET UNITYSDK_OFFSET(0x18E87B70)
#define MONOANIMATIONHDRPROPERTY_FETCHALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x18E87240)
#define MONOANIMATIONHDRPROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0x18E87420)
#define MONOANIMATIONHDRPROPERTY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18E87B20)
#define MONOANIMATIONHDRPROPERTY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18E873D0)
#define MONOANIMATIONHDRPROPERTY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18E88AA0)
#define MONOANIMATIONHDRPROPERTY_SHOWRENDERERS_OFFSET UNITYSDK_OFFSET(0x18E87380)
#define MONOANIMATIONHDRPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E88AF0)

inline static constexpr unsigned int MonoAnimationHDRProperty_TypeDefinitionIndex = 85438;

class MonoAnimationHDRProperty : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _renderers; // 0x18
	::MonoAnimationHDRProperty_PropertyWriteMode mode; // 0x20
	::MonoAnimationHDRProperty_HDRProperty* property0; // 0x28
	::MonoAnimationHDRProperty_HDRProperty* property1; // 0x30
	::MonoAnimationHDRProperty_HDRProperty* property2; // 0x38
	::MonoAnimationHDRProperty_HDRProperty* property3; // 0x40
	::MonoAnimationHDRProperty_HDRProperty* property4; // 0x48
	::MonoAnimationHDRProperty_HDRProperty* property5; // 0x50
	::MonoAnimationHDRProperty_HDRProperty* property6; // 0x58
	::MonoAnimationHDRProperty_HDRProperty* property7; // 0x60
	::MonoAnimationHDRProperty_HDRProperty* property8; // 0x68
	::MonoAnimationHDRProperty_HDRProperty* property9; // 0x70
	::System::Boolean _initialized; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* _materials; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY__CTOR_OFFSET))(this);
	}

	::System::Void FetchAllRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_FETCHALLRENDERERS_OFFSET))(this);
	}

	::System::Boolean ShowRenderers()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_SHOWRENDERERS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_ONENABLE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_INIT_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_APPLY_OFFSET))(this);
	}
};
