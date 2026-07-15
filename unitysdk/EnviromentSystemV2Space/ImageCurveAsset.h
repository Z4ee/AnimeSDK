#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/BlendMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace EnviromentSystemV2Space { class ImageKeyFrameConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_IMAGECURVEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xF1F9F40)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ImageCurveAsset_TypeDefinitionIndex = 47629;

	class ImageCurveAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::ImageKeyFrameConfig*>* keyFrames; // 0x18
		::System::Single thumbnailScale; // 0x20
		::System::Single blendScale; // 0x24
		::EnviromentSystemV2Space::BlendMode blendType; // 0x28
		::UnityEngine::Vector2Int targetSize; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_IMAGECURVEASSET__CTOR_OFFSET))(this);
		}
	};
}
