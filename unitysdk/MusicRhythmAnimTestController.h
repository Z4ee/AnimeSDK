#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define MUSICRHYTHMANIMTESTCONTROLLER_CONTROLCAKE_OFFSET UNITYSDK_OFFSET(0x933B4E0)
#define MUSICRHYTHMANIMTESTCONTROLLER_CONTROLSOLIDABOTTLE_OFFSET UNITYSDK_OFFSET(0x933B590)
#define MUSICRHYTHMANIMTESTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x933B470)
#define MUSICRHYTHMANIMTESTCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x933B650)
#define MUSICRHYTHMANIMTESTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x933B640)

inline static constexpr unsigned int MusicRhythmAnimTestController_TypeDefinitionIndex = 43906;

class MusicRhythmAnimTestController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_IsShakingHash()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmAnimTestController_TypeDefinitionIndex)->GetStaticField(0x11AB0);
	}
	static ::System::Int32* StaticGet_RoarHash()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmAnimTestController_TypeDefinitionIndex)->GetStaticField(0x11AB4);
	}
	::UnityEngine::Animator* RuanMadeCakeController; // 0x18
	::UnityEngine::Animator* SolidaBottleController; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICRHYTHMANIMTESTCONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MUSICRHYTHMANIMTESTCONTROLLER__CCTOR_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICRHYTHMANIMTESTCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void ControlCake(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MUSICRHYTHMANIMTESTCONTROLLER_CONTROLCAKE_OFFSET))(this, a1);
	}

	::System::Void ControlSolidaBottle(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MUSICRHYTHMANIMTESTCONTROLLER_CONTROLSOLIDABOTTLE_OFFSET))(this, a1);
	}
};
