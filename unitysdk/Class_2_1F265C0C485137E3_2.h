#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1F265C0C485137E3_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x176C8C70)
#define CLASS_2_1F265C0C485137E3_2_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x176C88F0)
#define CLASS_2_1F265C0C485137E3_2_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x176C8A80)
#define CLASS_2_1F265C0C485137E3_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x176C8D00)
#define CLASS_2_1F265C0C485137E3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x176C8CF0)

inline static constexpr unsigned int Class_2_1F265C0C485137E3_2_TypeDefinitionIndex = 56056;

class Class_2_1F265C0C485137E3_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85_1*>*>* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85_1*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85_1*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
