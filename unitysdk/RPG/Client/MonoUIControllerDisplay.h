#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIController; }

#define RPG_CLIENT_MONOUICONTROLLERDISPLAY_INIT_OFFSET UNITYSDK_OFFSET(0xAA0E450)
#define RPG_CLIENT_MONOUICONTROLLERDISPLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAA0E4A0)
#define RPG_CLIENT_MONOUICONTROLLERDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0E4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIControllerDisplay_TypeDefinitionIndex = 67270;

	class MonoUIControllerDisplay : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIController* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERDISPLAY_INIT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERDISPLAY_ONDESTROY_OFFSET))(this);
		}
	};
}
