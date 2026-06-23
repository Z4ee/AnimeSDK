#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UIRANKINGIMAGECONFIG_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x1789E400)
#define MOLEMOLE_UIRANKINGIMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1789E520)

namespace MoleMole
{
	inline static constexpr unsigned int UIRankingImageConfig_TypeDefinitionIndex = 44275;

	class UIRankingImageConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Sprite*>* ratingImages; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRANKINGIMAGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean GetSprite(::MoleMole::MissionResult rs, ::UnityEngine::Sprite*& sprite)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MissionResult, ::UnityEngine::Sprite*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRANKINGIMAGECONFIG_GETSPRITE_OFFSET))(this, rs, sprite);
		}
	};
}
