#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
class ShaderAniHelp;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_706A0FECFC680F49_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x16254420)
#define CLASS_2_706A0FECFC680F49_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x162546C0)
#define CLASS_2_706A0FECFC680F49_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16254800)
#define CLASS_2_706A0FECFC680F49__CTOR_OFFSET UNITYSDK_OFFSET(0x162547F0)

inline static constexpr unsigned int Class_2_706A0FECFC680F49_TypeDefinitionIndex = 76066;

class Class_2_706A0FECFC680F49 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_3; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_9; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x50
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x58
	::ShaderAniHelp* Field_2_10; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x68
	::Class_2_FDFE69FE7B72463B* Field_2_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706A0FECFC680F49_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
