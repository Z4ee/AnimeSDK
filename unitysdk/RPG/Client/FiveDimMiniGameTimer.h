#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD08B1D0)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xD08B180)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_START_OFFSET UNITYSDK_OFFSET(0xD08B020)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0xD08B2D0)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD08B250)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xD08B490)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER__START_B__5_0_OFFSET UNITYSDK_OFFSET(0xD08B4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimMiniGameTimer_TypeDefinitionIndex = 64288;

	class FiveDimMiniGameTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsRunning; // 0x18
		::System::Boolean ShowOriginalTime; // 0x19
		::System::Single Seconds; // 0x1C
		::System::Single DisplayMultiplier; // 0x20
		::UnityEngine::UI::Text* _Text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_RESETTIMER_OFFSET))(this);
		}

		::System::Void _Start_b__5_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER__START_B__5_0_OFFSET))(this, a1);
		}
	};
}
