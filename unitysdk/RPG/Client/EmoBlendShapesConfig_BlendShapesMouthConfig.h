#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EmoBlendShapesConfig_BlendShapeMouthParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESMOUTHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB904350)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_BlendShapesMouthConfig_TypeDefinitionIndex = 56135;

	class EmoBlendShapesConfig_BlendShapesMouthConfig : public ::System::Object
	{
	public:
		::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType type; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EmoBlendShapesConfig_BlendShapeMouthParam*>* paramList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESMOUTHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
