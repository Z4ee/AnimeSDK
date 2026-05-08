#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6BC87267F41C82C6_8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11DA8520)
#define CLASS_2_6BC87267F41C82C6_8_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x11DA83B0)
#define CLASS_2_6BC87267F41C82C6_8__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA8510)

inline static constexpr unsigned int Class_2_6BC87267F41C82C6_8_TypeDefinitionIndex = 58405;

class Class_2_6BC87267F41C82C6_8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_5; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38
	::UnityEngine::Transform* Field_2_6; // 0x40
	::UnityEngine::Transform* Field_2_1; // 0x48
	::UnityEngine::Transform* Field_2_8; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC87267F41C82C6_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6BC87267F41C82C6_8_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6BC87267F41C82C6_8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
