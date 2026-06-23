#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DF54068BA1D59931_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1773BB60)
#define CLASS_2_DF54068BA1D59931_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1773B9F0)
#define CLASS_2_DF54068BA1D59931__CTOR_OFFSET UNITYSDK_OFFSET(0x1773BB50)

inline static constexpr unsigned int Class_2_DF54068BA1D59931_TypeDefinitionIndex = 71638;

class Class_2_DF54068BA1D59931 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::Cinemachine::CinemachineBrain* Field_2_6; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_8; // 0x40
	::UnityEngine::Camera* Field_2_5; // 0x48
	::Cinemachine::CinemachineVirtualCamera* Field_2_7; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF54068BA1D59931__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF54068BA1D59931_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF54068BA1D59931_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
