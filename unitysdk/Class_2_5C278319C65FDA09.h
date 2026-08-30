#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class PlanetFesAvatarEffectController; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5C278319C65FDA09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181711F0)
#define CLASS_2_5C278319C65FDA09_METHOD_2_3953F10B80B18AED_OFFSET UNITYSDK_OFFSET(0x18171240)
#define CLASS_2_5C278319C65FDA09_METHOD_2_D9C1F543795920E3_OFFSET UNITYSDK_OFFSET(0x18171180)
#define CLASS_2_5C278319C65FDA09__CTOR_OFFSET UNITYSDK_OFFSET(0x181712B0)

inline static constexpr unsigned int Class_2_5C278319C65FDA09_TypeDefinitionIndex = 66695;

class Class_2_5C278319C65FDA09 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::PlanetFesAvatarEffectController* LLFEHKABAIA; // 0x18
	::UnityEngine::Canvas* PMNMEPIMANC; // 0x20
	::UnityEngine::Transform* LPEOHKHOLEP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C278319C65FDA09__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D9C1F543795920E3(::RPG::Client::PlanetFesAvatarEffectController* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarEffectController*, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + CLASS_2_5C278319C65FDA09_METHOD_2_D9C1F543795920E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C278319C65FDA09_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3953F10B80B18AED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C278319C65FDA09_METHOD_2_3953F10B80B18AED_OFFSET))(this, a1);
	}
};
