#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_17B6026522D20AFF_Class_2_2B4A80331696625A_12;
class Class_2_17B6026522D20AFF_Class_2_64EAB4644DCCE3D7_6;
class Class_2_17B6026522D20AFF_Class_2_B7DD84DBB5A0C3F2;
class Class_2_17B6026522D20AFF_Class_2_EF16346D79C18F15_13;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_17B6026522D20AFF_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x16AE1570)
#define CLASS_2_17B6026522D20AFF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16AE19F0)
#define CLASS_2_17B6026522D20AFF_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16AE1880)
#define CLASS_2_17B6026522D20AFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE19E0)

inline static constexpr unsigned int Class_2_17B6026522D20AFF_TypeDefinitionIndex = 80710;

class Class_2_17B6026522D20AFF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_64EAB4644DCCE3D7_6*>* Field_2_2; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_EF16346D79C18F15_13*>* Field_2_5; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_2B4A80331696625A_12*>* Field_2_6; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralSortWidgetController*>* Field_2_0; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_1; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_11; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_B7DD84DBB5A0C3F2*>* Field_2_4; // 0x48
	::MonoUITableScrollV2* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
