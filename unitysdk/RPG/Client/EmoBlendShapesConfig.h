#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class EmoBlendShapesConfig_BlendShapesConfig; }
namespace RPG::Client { class EmoBlendShapesConfig_BlendShapesMouthConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_GET_MOUTHDEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x95F7560)
#define RPG_CLIENT_EMOBLENDSHAPESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x95F7C00)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_TypeDefinitionIndex = 48637;

	class EmoBlendShapesConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig*>* mouthConfigs; // 0x18
		::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig* _mouthDefaultConfig; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig*>* emoConfigs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig* get_MouthDefaultConfig()
		{
			return ((::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_GET_MOUTHDEFAULTCONFIG_OFFSET))(this);
		}
	};
}
