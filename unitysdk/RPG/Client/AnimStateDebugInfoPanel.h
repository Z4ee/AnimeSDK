#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimStateDebugItem; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ANIMSTATEDEBUGINFOPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC760B20)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimStateDebugInfoPanel_TypeDefinitionIndex = 72656;

	class AnimStateDebugInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AnimStateDebugItem*>* _ItemArray; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ELJMHOMECHH; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMSTATEDEBUGINFOPANEL__CTOR_OFFSET))(this);
		}
	};
}
