#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_7D7E4C0BD4076E2D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x168EC5A0)
#define CLASS_2_7D7E4C0BD4076E2D_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x168EC4C0)
#define CLASS_2_7D7E4C0BD4076E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x168EC590)

inline static constexpr unsigned int Class_2_7D7E4C0BD4076E2D_TypeDefinitionIndex = 55574;

class Class_2_7D7E4C0BD4076E2D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::ParticleSystem* Field_2_1; // 0x18
	::UnityEngine::ParticleSystem* Field_2_2; // 0x20
	::UnityEngine::ParticleSystem* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D7E4C0BD4076E2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D7E4C0BD4076E2D_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D7E4C0BD4076E2D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
