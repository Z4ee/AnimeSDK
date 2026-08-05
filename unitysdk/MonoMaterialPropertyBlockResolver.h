#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoMaterialPropertyBlockResolver_RendererData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MONOMATERIALPROPERTYBLOCKRESOLVER_INIT_OFFSET UNITYSDK_OFFSET(0x15B219B0)
#define MONOMATERIALPROPERTYBLOCKRESOLVER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15B21C90)
#define MONOMATERIALPROPERTYBLOCKRESOLVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15B21950)
#define MONOMATERIALPROPERTYBLOCKRESOLVER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x15B21C40)
#define MONOMATERIALPROPERTYBLOCKRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B22880)

inline static constexpr unsigned int MonoMaterialPropertyBlockResolver_TypeDefinitionIndex = 78276;

class MonoMaterialPropertyBlockResolver : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::MaterialPropertyBlock* _mpb; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _renderers; // 0x20
	::System::Collections::Generic::List_1<::MonoMaterialPropertyBlockResolver_RendererData>* _rendererDatas; // 0x28
	::System::Boolean initialized; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_INIT_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_LATEUPDATE_OFFSET))(this);
	}
};
