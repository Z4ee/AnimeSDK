#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define COUNTDOWNNUMBERMATERIALANIMCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AEB5710)
#define COUNTDOWNNUMBERMATERIALANIMCONTROLLER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1AEB5EB0)
#define COUNTDOWNNUMBERMATERIALANIMCONTROLLER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1AEB57D0)
#define COUNTDOWNNUMBERMATERIALANIMCONTROLLER_UPDATEMATERIALPROPS_OFFSET UNITYSDK_OFFSET(0x1AEB6080)
#define COUNTDOWNNUMBERMATERIALANIMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AEB5F10)
#define COUNTDOWNNUMBERMATERIALANIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB6550)

inline static constexpr unsigned int CountDownNumberMaterialAnimController_TypeDefinitionIndex = 27202;

class CountDownNumberMaterialAnimController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color baseColor0; // 0x18
	::UnityEngine::Color baseColor1; // 0x28
	::UnityEngine::Color baseColor2; // 0x38
	::UnityEngine::Color emissionColor0; // 0x48
	::UnityEngine::Color emissionColor1; // 0x58
	::UnityEngine::Color emissionColor2; // 0x68
	::System::Single desaturation0; // 0x78
	::System::Single desaturation1; // 0x7C
	::System::Single desaturation2; // 0x80
	::UnityEngine::Renderer* renderer; // 0x88
	::UnityEngine::Material* material0; // 0x90
	::UnityEngine::Material* material1; // 0x98
	::UnityEngine::Material* material2; // 0xA0
	::System::Int32 _BaseColor; // 0xA8
	::System::Int32 _EmissionColor; // 0xAC
	::System::Int32 _Desaturation; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERMATERIALANIMCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERMATERIALANIMCONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERMATERIALANIMCONTROLLER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERMATERIALANIMCONTROLLER_ONREALENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERMATERIALANIMCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateMaterialProps()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERMATERIALANIMCONTROLLER_UPDATEMATERIALPROPS_OFFSET))(this);
	}
};
