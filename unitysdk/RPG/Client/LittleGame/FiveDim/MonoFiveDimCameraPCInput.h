#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_059B554F464D71C6_OFFSET UNITYSDK_OFFSET(0x9A1B060)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_51BF30C46FE78D87_OFFSET UNITYSDK_OFFSET(0x9A1AFF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_6A124F91C10ECEFC_OFFSET UNITYSDK_OFFSET(0x9A1B110)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A1B170)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_START_OFFSET UNITYSDK_OFFSET(0x9A1AD70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1B3F0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimCameraPCInput_TypeDefinitionIndex = 62897;

	class MonoFiveDimCameraPCInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_START_OFFSET))(this);
		}

		::System::Void Method_5_51BF30C46FE78D87(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_51BF30C46FE78D87_OFFSET))(this, a1);
		}

		::System::Void Method_5_059B554F464D71C6(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_059B554F464D71C6_OFFSET))(this, a1);
		}

		::System::Void Method_5_6A124F91C10ECEFC(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_6A124F91C10ECEFC_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_ONDESTROY_OFFSET))(this);
		}
	};
}
