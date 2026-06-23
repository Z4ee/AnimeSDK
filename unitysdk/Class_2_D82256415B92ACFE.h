#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_D82256415B92ACFE_Class_2_47F94C3827CAB3BB_9;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_D82256415B92ACFE_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x104390B0)
#define CLASS_2_D82256415B92ACFE_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x104392A0)
#define CLASS_2_D82256415B92ACFE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x104393A0)
#define CLASS_2_D82256415B92ACFE__CTOR_OFFSET UNITYSDK_OFFSET(0x10439390)

inline static constexpr unsigned int Class_2_D82256415B92ACFE_TypeDefinitionIndex = 69534;

class Class_2_D82256415B92ACFE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_D82256415B92ACFE_Class_2_47F94C3827CAB3BB_9*>* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_D82256415B92ACFE_Class_2_47F94C3827CAB3BB_9*>* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_D82256415B92ACFE_Class_2_47F94C3827CAB3BB_9*>* Field_2_3; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D82256415B92ACFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D82256415B92ACFE_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D82256415B92ACFE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D82256415B92ACFE_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
