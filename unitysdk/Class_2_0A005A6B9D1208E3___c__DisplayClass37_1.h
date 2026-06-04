#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0A005A6B9D1208E3;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BF160)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_1__EXECUTE_B__3_OFFSET UNITYSDK_OFFSET(0xA5C0900)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass37_1_TypeDefinitionIndex = 71301;

class Class_2_0A005A6B9D1208E3___c__DisplayClass37_1 : public ::System::Object
{
public:
	::Class_2_0A005A6B9D1208E3* __4__this; // 0x10
	::UnityEngine::Quaternion lookRotation; // 0x18
	::UnityEngine::Vector3 rotatePos; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__3(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_1__EXECUTE_B__3_OFFSET))(this, a1, a2);
	}
};
