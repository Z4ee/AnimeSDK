#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_COMICIMGUITRANSFORMDATA_GET_SHOULDSETCONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0x1F81A200)
#define MOLEMOLE_COMICIMGUITRANSFORMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F81A240)

namespace MoleMole
{
	inline static constexpr unsigned int ComicImgUITransformData_TypeDefinitionIndex = 32765;

	class ComicImgUITransformData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 anchorMax; // 0x10
		::UnityEngine::Vector2 imgSizeDelta; // 0x18
		::UnityEngine::Vector2 pivot; // 0x20
		::UnityEngine::Vector2 anchorSize; // 0x28
		::UnityEngine::Vector2 anchorPosition; // 0x30
		::UnityEngine::Vector2 anchorMin; // 0x38
		::UnityEngine::Vector2 imgAnchorPosition; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGUITRANSFORMDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldSetContainerSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGUITRANSFORMDATA_GET_SHOULDSETCONTAINERSIZE_OFFSET))(this);
		}
	};
}
