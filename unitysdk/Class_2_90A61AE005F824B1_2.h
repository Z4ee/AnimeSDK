#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_90A61AE005F824B1_2_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x18B5AE90)
#define CLASS_2_90A61AE005F824B1_2_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18B5B040)
#define CLASS_2_90A61AE005F824B1_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B5B130)
#define CLASS_2_90A61AE005F824B1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5B120)

inline static constexpr unsigned int Class_2_90A61AE005F824B1_2_TypeDefinitionIndex = 66598;

class Class_2_90A61AE005F824B1_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90A61AE005F824B1_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_90A61AE005F824B1_2_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_90A61AE005F824B1_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90A61AE005F824B1_2_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
