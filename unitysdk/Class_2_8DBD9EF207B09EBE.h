#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_2;
class Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_3;
class Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_4;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8DBD9EF207B09EBE_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1263C970)
#define CLASS_2_8DBD9EF207B09EBE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1263CA40)
#define CLASS_2_8DBD9EF207B09EBE_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1263C700)
#define CLASS_2_8DBD9EF207B09EBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1263CA30)

inline static constexpr unsigned int Class_2_8DBD9EF207B09EBE_TypeDefinitionIndex = 55436;

class Class_2_8DBD9EF207B09EBE : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_2*>* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_10; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_3*>* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_4*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
