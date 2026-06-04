#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0A005A6B9D1208E3;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BE8A0)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xA5C06E0)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0xA5C0800)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass37_0_TypeDefinitionIndex = 71300;

class Class_2_0A005A6B9D1208E3___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_2_0A005A6B9D1208E3* __4__this; // 0x10
	::UnityEngine::Quaternion enterDir; // 0x18
	::UnityEngine::Vector3 correctedCanonicalPos; // 0x28
	::UnityEngine::Vector3 enterCanonicalPos; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_0__EXECUTE_B__0_OFFSET))(this, a1, a2);
	}

	::System::Void _Execute_b__1(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_0__EXECUTE_B__1_OFFSET))(this, a1, a2);
	}
};
