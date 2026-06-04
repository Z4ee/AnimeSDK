#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0A005A6B9D1208E3___c__DisplayClass37_1;
class Class_2_B8E38BF47138A2E5;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BF230)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_2__EXECUTE_B__4_OFFSET UNITYSDK_OFFSET(0xA5C0A00)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass37_2_TypeDefinitionIndex = 71302;

class Class_2_0A005A6B9D1208E3___c__DisplayClass37_2 : public ::System::Object
{
public:
	::Class_2_0A005A6B9D1208E3___c__DisplayClass37_1* CS___8__locals1; // 0x10
	::UnityEngine::Vector3 settleAnchor; // 0x18
	::UnityEngine::Vector3 canonicalPos; // 0x24
	::UnityEngine::Quaternion ed; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_2__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__4(::Class_2_B8E38BF47138A2E5* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS37_2__EXECUTE_B__4_OFFSET))(this, a1, a2, a3);
	}
};
