#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_33E0503C64749A25_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x167BCFE0)
#define CLASS_2_33E0503C64749A25_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x167BCE30)
#define CLASS_2_33E0503C64749A25_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x167BD070)
#define CLASS_2_33E0503C64749A25__CTOR_OFFSET UNITYSDK_OFFSET(0x167BD060)

inline static constexpr unsigned int Class_2_33E0503C64749A25_TypeDefinitionIndex = 68838;

class Class_2_33E0503C64749A25 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E0503C64749A25__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_33E0503C64749A25_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E0503C64749A25_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_33E0503C64749A25_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
