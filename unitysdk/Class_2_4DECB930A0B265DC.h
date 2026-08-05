#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_4DECB930A0B265DC_Class_2_1840CB525912D373_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSStoreWidgetWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_4DECB930A0B265DC_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x16EFFE40)
#define CLASS_2_4DECB930A0B265DC_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x16F00050)
#define CLASS_2_4DECB930A0B265DC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16F001B0)
#define CLASS_2_4DECB930A0B265DC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F001A0)

inline static constexpr unsigned int Class_2_4DECB930A0B265DC_TypeDefinitionIndex = 54537;

class Class_2_4DECB930A0B265DC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIVHSStoreWidgetWidgetController*>* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_4DECB930A0B265DC_Class_2_1840CB525912D373_1*>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
