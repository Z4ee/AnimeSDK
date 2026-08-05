#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MaterialPropertyBlockPreview_MPBPreviewContent;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MATERIALPROPERTYBLOCKPREVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E78B040)
#define MATERIALPROPERTYBLOCKPREVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E78B890)
#define MATERIALPROPERTYBLOCKPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78B8E0)

inline static constexpr unsigned int MaterialPropertyBlockPreview_TypeDefinitionIndex = 27553;

class MaterialPropertyBlockPreview : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MaterialPropertyBlockPreview_MPBPreviewContent*>* PreviewContents; // 0x18
	::UnityEngine::MaterialPropertyBlock* mpbForRenderer; // 0x20
	::UnityEngine::MaterialPropertyBlock* mpbForRendererSubMeshIndex0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKPREVIEW__CTOR_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKPREVIEW_REFRESH_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKPREVIEW_UPDATE_OFFSET))(this);
	}
};
