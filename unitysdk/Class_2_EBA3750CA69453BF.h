#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_EBA3750CA69453BF_Class_2_47F94C3827CAB3BB_12;
class Class_2_EBA3750CA69453BF_Class_2_9CB4823404FE0F5F;
class MonoUIGachaItemParam;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_EBA3750CA69453BF_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x164923D0)
#define CLASS_2_EBA3750CA69453BF_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x164921E0)
#define CLASS_2_EBA3750CA69453BF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16492510)
#define CLASS_2_EBA3750CA69453BF_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x16491F30)
#define CLASS_2_EBA3750CA69453BF__CTOR_OFFSET UNITYSDK_OFFSET(0x16492500)

inline static constexpr unsigned int Class_2_EBA3750CA69453BF_TypeDefinitionIndex = 80574;

class Class_2_EBA3750CA69453BF : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_15; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_EBA3750CA69453BF_Class_2_47F94C3827CAB3BB_12*>*>* Field_2_8; // 0x30
	::MonoUIGachaItemParam* Field_2_10; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_EBA3750CA69453BF_Class_2_9CB4823404FE0F5F*>* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_EBA3750CA69453BF_Class_2_9CB4823404FE0F5F*>* Field_2_0; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_EBA3750CA69453BF_Class_2_9CB4823404FE0F5F*>* Field_2_7; // 0x58
	::UnityEngine::Animation* Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA3750CA69453BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EBA3750CA69453BF_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_EBA3750CA69453BF_Class_2_47F94C3827CAB3BB_12*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_EBA3750CA69453BF_Class_2_47F94C3827CAB3BB_12*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EBA3750CA69453BF_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA3750CA69453BF_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EBA3750CA69453BF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
