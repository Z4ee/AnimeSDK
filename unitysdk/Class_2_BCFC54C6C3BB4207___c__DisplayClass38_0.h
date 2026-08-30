#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_BCFC54C6C3BB4207;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E80740)
#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x17E83680)
#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0x17E837A0)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207___c__DisplayClass38_0_TypeDefinitionIndex = 76284;

class Class_2_BCFC54C6C3BB4207___c__DisplayClass38_0 : public ::System::Object
{
public:
	::Class_2_BCFC54C6C3BB4207* __4__this; // 0x10
	::UnityEngine::Quaternion enterDir; // 0x18
	::UnityEngine::Vector3 correctedCanonicalPos; // 0x28
	::UnityEngine::Vector3 enterCanonicalPos; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_0__EXECUTE_B__0_OFFSET))(this, a1, a2);
	}

	::System::Void _Execute_b__1(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_0__EXECUTE_B__1_OFFSET))(this, a1, a2);
	}
};
