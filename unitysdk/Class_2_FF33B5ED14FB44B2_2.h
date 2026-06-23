#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FF33B5ED14FB44B2_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x134DB1D0)
#define CLASS_2_FF33B5ED14FB44B2_2_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x134DB060)
#define CLASS_2_FF33B5ED14FB44B2_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134DB260)
#define CLASS_2_FF33B5ED14FB44B2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x134DB250)

inline static constexpr unsigned int Class_2_FF33B5ED14FB44B2_2_TypeDefinitionIndex = 66163;

class Class_2_FF33B5ED14FB44B2_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_2_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
