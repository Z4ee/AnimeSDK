#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ItemStyle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOGUIDEUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D68BD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGuideUIConfig_TypeDefinitionIndex = 40192;

	class MonoGuideUIConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 BorderRange; // 0x18
		::System::String* iconEnemyPath; // 0x20
		::System::String* iconSelfPath; // 0x28
		::System::String* iconNeutralPath; // 0x30
		::System::Single iconFadeOutTime; // 0x38
		::System::Single tweenScaleSize; // 0x3C
		::System::Single tweenScaleTime; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::ItemStyle*>* itemStyleMap; // 0x48
		::System::String* defaultStyle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEUICONFIG__CTOR_OFFSET))(this);
		}
	};
}
