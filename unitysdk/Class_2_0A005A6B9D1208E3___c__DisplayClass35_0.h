#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0A005A6B9D1208E3;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12457110)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x12458B70)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass35_0_TypeDefinitionIndex = 70484;

class Class_2_0A005A6B9D1208E3___c__DisplayClass35_0 : public ::System::Object
{
public:
	::Class_2_0A005A6B9D1208E3* __4__this; // 0x10
	::UnityEngine::Quaternion enterDir; // 0x18
	::UnityEngine::Vector3 enterCanonicalPos; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::Cinemachine::CinemachineVirtualCamera* stackVcam, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* stackMono)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_0__EXECUTE_B__0_OFFSET))(this, stackVcam, stackMono);
	}
};
