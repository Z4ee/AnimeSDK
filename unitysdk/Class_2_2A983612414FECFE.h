#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_2A983612414FECFE_Class_2_7D6483DC96481CD2_1;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_2A983612414FECFE_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x138896B0)
#define CLASS_2_2A983612414FECFE_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13889900)
#define CLASS_2_2A983612414FECFE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138899D0)
#define CLASS_2_2A983612414FECFE__CTOR_OFFSET UNITYSDK_OFFSET(0x138899C0)

inline static constexpr unsigned int Class_2_2A983612414FECFE_TypeDefinitionIndex = 59543;

class Class_2_2A983612414FECFE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_9; // 0x28
	::UnityEngine::GameObject* Field_2_11; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_2A983612414FECFE_Class_2_7D6483DC96481CD2_1*>* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A983612414FECFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2A983612414FECFE_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A983612414FECFE_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2A983612414FECFE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
