#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_1ED77DD93111CFA0_Class_2_3BF30073802D7266_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1ED77DD93111CFA0_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x139A0E80)
#define CLASS_2_1ED77DD93111CFA0_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x139A1070)
#define CLASS_2_1ED77DD93111CFA0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139A11B0)
#define CLASS_2_1ED77DD93111CFA0__CTOR_OFFSET UNITYSDK_OFFSET(0x139A11A0)

inline static constexpr unsigned int Class_2_1ED77DD93111CFA0_TypeDefinitionIndex = 71548;

class Class_2_1ED77DD93111CFA0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_1ED77DD93111CFA0_Class_2_3BF30073802D7266_1*>* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_1ED77DD93111CFA0_Class_2_3BF30073802D7266_1*>* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ED77DD93111CFA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1ED77DD93111CFA0_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1ED77DD93111CFA0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ED77DD93111CFA0_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
