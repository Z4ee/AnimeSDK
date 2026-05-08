#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LiveHouseSceneSpotStruct.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOGAMESCENEOBJECTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA1D90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGameSceneObjectMap_TypeDefinitionIndex = 54918;

	class MonoGameSceneObjectMap : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>* animatorDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* gameObjectDict; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* audioList; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* liveLightList; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* liveDecoLightList; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* liveLambLightList; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::LiveHouseSceneSpotStruct>* liveSpotLiveList; // 0x88
		::UnityEngine::GameObject* liveFloor; // 0x90
		::UnityEngine::GameObject* blurLightEffect; // 0x98
		::UnityEngine::GameObject* pinkLightEffect; // 0xA0
		::UnityEngine::GameObject* RibbonEffect; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP__CTOR_OFFSET))(this);
		}
	};
}
