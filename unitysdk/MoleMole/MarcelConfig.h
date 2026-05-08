#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/MarcelShape.h"
#include "unitysdk/MoleMole/MarcelShapeConfig.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MARCELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B93390)

namespace MoleMole
{
	inline static constexpr unsigned int MarcelConfig_TypeDefinitionIndex = 71505;

	class MarcelConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::MarcelShape, ::MoleMole::MarcelShapeConfig>* Map; // 0x58
		::System::UInt32 disappearDuration; // 0x60
		::UnityEngine::Color triggeredColor; // 0x64
		::UnityEngine::AnimationCurve* blockShakingCurve; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* emojiList; // 0x80
		::System::Single emojiDisplayTime; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MARCELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
