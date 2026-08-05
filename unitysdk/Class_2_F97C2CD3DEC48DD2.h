#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_F97C2CD3DEC48DD2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1478B5E0)
#define CLASS_2_F97C2CD3DEC48DD2_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1478B500)
#define CLASS_2_F97C2CD3DEC48DD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1478B5D0)

inline static constexpr unsigned int Class_2_F97C2CD3DEC48DD2_TypeDefinitionIndex = 75807;

class Class_2_F97C2CD3DEC48DD2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F97C2CD3DEC48DD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F97C2CD3DEC48DD2_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F97C2CD3DEC48DD2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
