#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_1CCF205F03F44516_1_Class_2_16AC50F20374540A_2;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1CCF205F03F44516_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x123C1850)
#define CLASS_2_1CCF205F03F44516_1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x123C1410)
#define CLASS_2_1CCF205F03F44516_1_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x123C1660)
#define CLASS_2_1CCF205F03F44516_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x123C18E0)
#define CLASS_2_1CCF205F03F44516_1__CTOR_OFFSET UNITYSDK_OFFSET(0x123C18D0)

inline static constexpr unsigned int Class_2_1CCF205F03F44516_1_TypeDefinitionIndex = 61733;

class Class_2_1CCF205F03F44516_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_11; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_10; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1CCF205F03F44516_1_Class_2_16AC50F20374540A_2*>*>* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_2; // 0x48
	::UnityEngine::RectTransform* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CCF205F03F44516_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CCF205F03F44516_1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CCF205F03F44516_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CCF205F03F44516_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1CCF205F03F44516_1_Class_2_16AC50F20374540A_2*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1CCF205F03F44516_1_Class_2_16AC50F20374540A_2*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CCF205F03F44516_1_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}
};
