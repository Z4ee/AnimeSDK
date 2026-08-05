#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D4013B1655644290_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x15B30260)
#define CLASS_2_D4013B1655644290_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x15B30090)
#define CLASS_2_D4013B1655644290_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15B30370)
#define CLASS_2_D4013B1655644290__CTOR_OFFSET UNITYSDK_OFFSET(0x15B30360)

inline static constexpr unsigned int Class_2_D4013B1655644290_TypeDefinitionIndex = 77700;

class Class_2_D4013B1655644290 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4013B1655644290__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D4013B1655644290_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4013B1655644290_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D4013B1655644290_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
