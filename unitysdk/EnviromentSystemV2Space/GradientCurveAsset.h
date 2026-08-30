#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace EnviromentSystemV2Space { class GradientKeyFrameConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define ENVIROMENTSYSTEMV2SPACE_GRADIENTCURVEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x106E7F70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int GradientCurveAsset_TypeDefinitionIndex = 49907;

	class GradientCurveAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::GradientKeyFrameConfig*>* keyFrames; // 0x18
		::System::String* gradientTexturePath; // 0x20
		::UnityEngine::Texture* gradientTexture; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTCURVEASSET__CTOR_OFFSET))(this);
		}
	};
}
