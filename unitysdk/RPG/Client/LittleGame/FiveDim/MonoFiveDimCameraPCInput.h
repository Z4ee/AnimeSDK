#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_09FE42768C6D9433_OFFSET UNITYSDK_OFFSET(0x18A0CA20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_EAD49BE374ABF145_1_OFFSET UNITYSDK_OFFSET(0x18A0CAC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_EAD49BE374ABF145_OFFSET UNITYSDK_OFFSET(0x18A0C9B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18A0CB20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_START_OFFSET UNITYSDK_OFFSET(0x18A0C6D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0CE00)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimCameraPCInput_TypeDefinitionIndex = 73284;

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

		::System::Void Method_5_EAD49BE374ABF145(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_EAD49BE374ABF145_OFFSET))(this, a1);
		}

		::System::Void Method_5_09FE42768C6D9433(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_09FE42768C6D9433_OFFSET))(this, a1);
		}

		::System::Void Method_5_EAD49BE374ABF145_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_METHOD_5_EAD49BE374ABF145_1_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_ONDESTROY_OFFSET))(this);
		}
	};
}
