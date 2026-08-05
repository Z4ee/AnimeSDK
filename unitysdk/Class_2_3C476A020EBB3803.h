#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3C476A020EBB3803_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x14137120)
#define CLASS_2_3C476A020EBB3803_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x14136FB0)
#define CLASS_2_3C476A020EBB3803_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141371B0)
#define CLASS_2_3C476A020EBB3803__CTOR_OFFSET UNITYSDK_OFFSET(0x141371A0)

inline static constexpr unsigned int Class_2_3C476A020EBB3803_TypeDefinitionIndex = 86660;

class Class_2_3C476A020EBB3803 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C476A020EBB3803__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3C476A020EBB3803_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C476A020EBB3803_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3C476A020EBB3803_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
