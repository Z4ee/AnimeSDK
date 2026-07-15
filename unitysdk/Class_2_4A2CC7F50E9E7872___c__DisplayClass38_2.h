#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4A2CC7F50E9E7872___c__DisplayClass38_1;
class Class_2_56DCA1B58073717B;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x152BD120)
#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS38_2__EXECUTE_B__4_OFFSET UNITYSDK_OFFSET(0x152BEF70)

inline static constexpr unsigned int Class_2_4A2CC7F50E9E7872___c__DisplayClass38_2_TypeDefinitionIndex = 72826;

class Class_2_4A2CC7F50E9E7872___c__DisplayClass38_2 : public ::System::Object
{
public:
	::Class_2_4A2CC7F50E9E7872___c__DisplayClass38_1* CS___8__locals1; // 0x10
	::UnityEngine::Vector3 canonicalPos; // 0x18
	::UnityEngine::Quaternion ed; // 0x24
	::UnityEngine::Vector3 settleAnchor; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS38_2__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__4(::Class_2_56DCA1B58073717B* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS38_2__EXECUTE_B__4_OFFSET))(this, a1, a2, a3);
	}
};
