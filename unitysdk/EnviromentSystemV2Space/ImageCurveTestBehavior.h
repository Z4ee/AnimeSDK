#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_4_417C7B46A4074E8A;
namespace EnviromentSystemV2Space { class ImageCurveAsset; }
namespace UnityEngine { class Texture; }

#define ENVIROMENTSYSTEMV2SPACE_IMAGECURVETESTBEHAVIOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x106E81A0)
#define ENVIROMENTSYSTEMV2SPACE_IMAGECURVETESTBEHAVIOR_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x106E8270)
#define ENVIROMENTSYSTEMV2SPACE_IMAGECURVETESTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x106E82C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ImageCurveTestBehavior_TypeDefinitionIndex = 49911;

	class ImageCurveTestBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::EnviromentSystemV2Space::ImageCurveAsset* curveAsset; // 0x18
		::System::Single currentTime; // 0x20
		::UnityEngine::Vector2 previewSize; // 0x24
		::System::Boolean showSegmentInfo; // 0x2C
		::Class_4_417C7B46A4074E8A* JJPJKAJNIOD; // 0x30
		::UnityEngine::Texture* DBACHBNJPLB; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_IMAGECURVETESTBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_IMAGECURVETESTBEHAVIOR_ONENABLE_OFFSET))(this);
		}

		::System::Void SetTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_IMAGECURVETESTBEHAVIOR_SETTEXTURE_OFFSET))(this, a1);
		}
	};
}
