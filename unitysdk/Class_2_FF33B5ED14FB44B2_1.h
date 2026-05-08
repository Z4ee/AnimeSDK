#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FF33B5ED14FB44B2_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xB50E410)
#define CLASS_2_FF33B5ED14FB44B2_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0xB50E2A0)
#define CLASS_2_FF33B5ED14FB44B2_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB50E4A0)
#define CLASS_2_FF33B5ED14FB44B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB50E490)

inline static constexpr unsigned int Class_2_FF33B5ED14FB44B2_1_TypeDefinitionIndex = 49161;

class Class_2_FF33B5ED14FB44B2_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF33B5ED14FB44B2_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
