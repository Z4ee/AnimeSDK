#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_11AA7A3F9858CFD2_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x12373340)
#define CLASS_2_11AA7A3F9858CFD2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12373570)
#define CLASS_2_11AA7A3F9858CFD2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12373640)
#define CLASS_2_11AA7A3F9858CFD2__CTOR_OFFSET UNITYSDK_OFFSET(0x12373630)

inline static constexpr unsigned int Class_2_11AA7A3F9858CFD2_TypeDefinitionIndex = 73778;

class Class_2_11AA7A3F9858CFD2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_9; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::UnityEngine::Transform* Field_2_11; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AA7A3F9858CFD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_11AA7A3F9858CFD2_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_11AA7A3F9858CFD2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AA7A3F9858CFD2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
