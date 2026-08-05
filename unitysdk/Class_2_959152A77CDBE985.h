#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UINewbieGuideMissionLockedRewardItemRowWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_959152A77CDBE985_METHOD_2_3A58468E7DBBCDC2_OFFSET UNITYSDK_OFFSET(0xF0A2D50)
#define CLASS_2_959152A77CDBE985_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xF0A2F40)
#define CLASS_2_959152A77CDBE985_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF0A3040)
#define CLASS_2_959152A77CDBE985__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A3030)

inline static constexpr unsigned int Class_2_959152A77CDBE985_TypeDefinitionIndex = 42609;

class Class_2_959152A77CDBE985 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* Field_2_1; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* Field_2_7; // 0x28
	::MonoUITableScrollV2* Field_2_3; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* Field_2_6; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* Field_2_0; // 0x40
	::MoleMole::MonoGamepadSpaceList* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_959152A77CDBE985__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3A58468E7DBBCDC2(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_959152A77CDBE985_METHOD_2_3A58468E7DBBCDC2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_959152A77CDBE985_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_959152A77CDBE985_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
