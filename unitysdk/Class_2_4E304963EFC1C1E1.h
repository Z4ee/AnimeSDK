#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51;
class Class_2_4E304963EFC1C1E1_Class_2_385A368C07384AA3;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_4E304963EFC1C1E1_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x16443610)
#define CLASS_2_4E304963EFC1C1E1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x16443A10)
#define CLASS_2_4E304963EFC1C1E1_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x16443820)
#define CLASS_2_4E304963EFC1C1E1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16443B00)
#define CLASS_2_4E304963EFC1C1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x16443AF0)

inline static constexpr unsigned int Class_2_4E304963EFC1C1E1_TypeDefinitionIndex = 63723;

class Class_2_4E304963EFC1C1E1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_385A368C07384AA3*>* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*>* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E304963EFC1C1E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4E304963EFC1C1E1_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E304963EFC1C1E1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4E304963EFC1C1E1_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4E304963EFC1C1E1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
