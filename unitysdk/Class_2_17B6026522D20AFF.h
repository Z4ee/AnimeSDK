#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_17B6026522D20AFF_Class_2_2B4A80331696625A_7;
class Class_2_17B6026522D20AFF_Class_2_64EAB4644DCCE3D7_6;
class Class_2_17B6026522D20AFF_Class_2_B7DD84DBB5A0C3F2;
class Class_2_17B6026522D20AFF_Class_2_EF16346D79C18F15_12;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_17B6026522D20AFF_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x14825A10)
#define CLASS_2_17B6026522D20AFF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14825E90)
#define CLASS_2_17B6026522D20AFF_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x14825D20)
#define CLASS_2_17B6026522D20AFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14825E80)

inline static constexpr unsigned int Class_2_17B6026522D20AFF_TypeDefinitionIndex = 61481;

class Class_2_17B6026522D20AFF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_2B4A80331696625A_7*>* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_EF16346D79C18F15_12*>* Field_2_5; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_7; // 0x28
	::MonoUITableScrollV2* Field_2_3; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_1; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_B7DD84DBB5A0C3F2*>* Field_2_6; // 0x40
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_2; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_17B6026522D20AFF_Class_2_64EAB4644DCCE3D7_6*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17B6026522D20AFF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
