#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A8EB273F140D447F_Class_2_97841A4F16C22676;
class Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_1;
class Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_2;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerShopTurnOverWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_A8EB273F140D447F_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x165CA0B0)
#define CLASS_2_A8EB273F140D447F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x165CA560)
#define CLASS_2_A8EB273F140D447F_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x165CA3D0)
#define CLASS_2_A8EB273F140D447F__CTOR_OFFSET UNITYSDK_OFFSET(0x165CA550)

inline static constexpr unsigned int Class_2_A8EB273F140D447F_TypeDefinitionIndex = 56067;

class Class_2_A8EB273F140D447F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_1*>* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_97841A4F16C22676*>* Field_2_3; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_6; // 0x38
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIFlowerShopTurnOverWidgetController*>* Field_2_8; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x50
	::MoleMole::MonoGamepadSpaceList* Field_2_7; // 0x58
	::Class_2_0D31A1661D004892<::Class_2_A8EB273F140D447F_Class_2_E788C747FC6E49CE_2*>* Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EB273F140D447F_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
