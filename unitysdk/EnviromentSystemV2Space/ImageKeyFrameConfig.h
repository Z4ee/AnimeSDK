#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define ENVIROMENTSYSTEMV2SPACE_IMAGEKEYFRAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x135EDD30)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ImageKeyFrameConfig_TypeDefinitionIndex = 46662;

	class ImageKeyFrameConfig : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::String* resourcePath; // 0x18
		::UnityEngine::Texture* thumbnail; // 0x20
		::System::String* thumbnailPath; // 0x28
		::UnityEngine::Vector2Int fullSize; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_IMAGEKEYFRAMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
