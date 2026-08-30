#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_BCFC54C6C3BB4207___c__DisplayClass38_1;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17E81860)
#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_2__EXECUTE_B__4_OFFSET UNITYSDK_OFFSET(0x17E839A0)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207___c__DisplayClass38_2_TypeDefinitionIndex = 76286;

class Class_2_BCFC54C6C3BB4207___c__DisplayClass38_2 : public ::System::Object
{
public:
	::Class_2_BCFC54C6C3BB4207___c__DisplayClass38_1* CS___8__locals1; // 0x10
	::UnityEngine::Quaternion ed; // 0x18
	::UnityEngine::Vector3 settleAnchor; // 0x28
	::UnityEngine::Vector3 canonicalPos; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_2__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__4(::Class_2_B8E38BF47138A2E5* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS38_2__EXECUTE_B__4_OFFSET))(this, a1, a2, a3);
	}
};
