#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_142C57324E00A5F7_Class_2_2B4A80331696625A;
class Class_2_142C57324E00A5F7_Class_2_2B4A80331696625A_1;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_142C57324E00A5F7_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x16174440)
#define CLASS_2_142C57324E00A5F7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16174530)
#define CLASS_2_142C57324E00A5F7_METHOD_2_FA381B9E901D74DC_OFFSET UNITYSDK_OFFSET(0x161742B0)
#define CLASS_2_142C57324E00A5F7__CTOR_OFFSET UNITYSDK_OFFSET(0x16174520)

inline static constexpr unsigned int Class_2_142C57324E00A5F7_TypeDefinitionIndex = 42144;

class Class_2_142C57324E00A5F7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_142C57324E00A5F7_Class_2_2B4A80331696625A*>* Field_2_1; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_142C57324E00A5F7_Class_2_2B4A80331696625A_1*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_142C57324E00A5F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FA381B9E901D74DC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_142C57324E00A5F7_METHOD_2_FA381B9E901D74DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_142C57324E00A5F7_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_142C57324E00A5F7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
