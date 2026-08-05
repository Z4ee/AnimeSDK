#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DF54068BA1D59931_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10B287B0)
#define CLASS_2_DF54068BA1D59931_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x10B28640)
#define CLASS_2_DF54068BA1D59931__CTOR_OFFSET UNITYSDK_OFFSET(0x10B287A0)

inline static constexpr unsigned int Class_2_DF54068BA1D59931_TypeDefinitionIndex = 83966;

class Class_2_DF54068BA1D59931 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::Cinemachine::CinemachineVirtualCamera* Field_2_4; // 0x20
	::Cinemachine::CinemachineBrain* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::Camera* Field_2_6; // 0x38
	::UnityEngine::Transform* Field_2_2; // 0x40
	::UnityEngine::GameObject* Field_2_11; // 0x48
	::UnityEngine::Transform* Field_2_3; // 0x50
	::UnityEngine::Transform* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF54068BA1D59931__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF54068BA1D59931_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF54068BA1D59931_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
