#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0A005A6B9D1208E3___c__DisplayClass35_1;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12457810)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_2__EXECUTE_B__3_OFFSET UNITYSDK_OFFSET(0x12458F20)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass35_2_TypeDefinitionIndex = 70486;

class Class_2_0A005A6B9D1208E3___c__DisplayClass35_2 : public ::System::Object
{
public:
	::Class_2_0A005A6B9D1208E3___c__DisplayClass35_1* CS___8__locals1; // 0x10
	::UnityEngine::Vector3 settleAnchor; // 0x18
	::UnityEngine::Quaternion ed; // 0x24
	::UnityEngine::Vector3 canonicalPos; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_2__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__3(::Cinemachine::CinemachineVirtualCamera* stackVcam, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* stackMono)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS35_2__EXECUTE_B__3_OFFSET))(this, stackVcam, stackMono);
	}
};
