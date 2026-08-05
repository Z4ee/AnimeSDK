#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_07086D866389921C_1_Class_2_2CB68109B13467D8_4;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_07086D866389921C_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xF75B9B0)
#define CLASS_2_07086D866389921C_1_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0xF75B7C0)
#define CLASS_2_07086D866389921C_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF75BA60)
#define CLASS_2_07086D866389921C_1_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0xF75B610)
#define CLASS_2_07086D866389921C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF75BA50)

inline static constexpr unsigned int Class_2_07086D866389921C_1_TypeDefinitionIndex = 76191;

class Class_2_07086D866389921C_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_1_Class_2_2CB68109B13467D8_4*>*>* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_1_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_1_Class_2_2CB68109B13467D8_4*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_1_Class_2_2CB68109B13467D8_4*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_1_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}
};
