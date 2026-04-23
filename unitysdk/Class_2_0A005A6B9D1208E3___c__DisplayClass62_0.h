#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x124580B0)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS62_0___SYNCSTACKFOLLOWNODESTOANCHOR_B__0_OFFSET UNITYSDK_OFFSET(0x12459260)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass62_0_TypeDefinitionIndex = 70488;

class Class_2_0A005A6B9D1208E3___c__DisplayClass62_0 : public ::System::Object
{
public:
	::UnityEngine::Vector3 anchor; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
	}

	::System::Void __SyncStackFollowNodesToAnchor_b__0(::Cinemachine::CinemachineVirtualCamera* _, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* stackMono)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS62_0___SYNCSTACKFOLLOWNODESTOANCHOR_B__0_OFFSET))(this, _, stackMono);
	}
};
