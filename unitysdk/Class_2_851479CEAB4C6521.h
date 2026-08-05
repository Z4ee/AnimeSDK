#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define CLASS_2_851479CEAB4C6521_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A0AC70)
#define CLASS_2_851479CEAB4C6521_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x12A0AB60)
#define CLASS_2_851479CEAB4C6521__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0AC60)

inline static constexpr unsigned int Class_2_851479CEAB4C6521_TypeDefinitionIndex = 85553;

class Class_2_851479CEAB4C6521 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgText* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UIImgText* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::MoleMole::MonoGamepadRegion* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_851479CEAB4C6521__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_851479CEAB4C6521_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_851479CEAB4C6521_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
