#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_3_00C36FF043F803C0;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_0E70B6069F671466_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x133F3D10)
#define CLASS_2_0E70B6069F671466_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x133F3EE0)
#define CLASS_2_0E70B6069F671466_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133F3FB0)
#define CLASS_2_0E70B6069F671466__CTOR_OFFSET UNITYSDK_OFFSET(0x133F3FA0)

inline static constexpr unsigned int Class_2_0E70B6069F671466_TypeDefinitionIndex = 54174;

class Class_2_0E70B6069F671466 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::Class_3_00C36FF043F803C0* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E70B6069F671466__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0E70B6069F671466_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E70B6069F671466_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0E70B6069F671466_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
