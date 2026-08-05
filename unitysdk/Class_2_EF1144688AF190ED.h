#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_EF1144688AF190ED_Class_2_8ADC80830FF66961_2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_EF1144688AF190ED_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1577FC70)
#define CLASS_2_EF1144688AF190ED_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1577FE20)
#define CLASS_2_EF1144688AF190ED_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1577FF10)
#define CLASS_2_EF1144688AF190ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1577FF00)

inline static constexpr unsigned int Class_2_EF1144688AF190ED_TypeDefinitionIndex = 56784;

class Class_2_EF1144688AF190ED : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_EF1144688AF190ED_Class_2_8ADC80830FF66961_2*>* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::MoleMole::NotificationBadge* Field_2_5; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_EF1144688AF190ED_Class_2_8ADC80830FF66961_2*>* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF1144688AF190ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EF1144688AF190ED_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF1144688AF190ED_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EF1144688AF190ED_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
