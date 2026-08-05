#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_752FBCF3BC53FD5B_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x11B46CB0)
#define CLASS_2_752FBCF3BC53FD5B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11B46E50)
#define CLASS_2_752FBCF3BC53FD5B__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46E40)

inline static constexpr unsigned int Class_2_752FBCF3BC53FD5B_TypeDefinitionIndex = 47637;

class Class_2_752FBCF3BC53FD5B : public ::Class_1_EEA0111A28582B57
{
public:
	::ShaderAniHelp* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::ShaderAniHelp* Field_2_6; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752FBCF3BC53FD5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_752FBCF3BC53FD5B_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_752FBCF3BC53FD5B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
