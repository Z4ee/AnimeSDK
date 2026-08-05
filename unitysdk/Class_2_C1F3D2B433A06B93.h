#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C1F3D2B433A06B93_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x12139E90)
#define CLASS_2_C1F3D2B433A06B93_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1213A040)
#define CLASS_2_C1F3D2B433A06B93_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1213A130)
#define CLASS_2_C1F3D2B433A06B93__CTOR_OFFSET UNITYSDK_OFFSET(0x1213A120)

inline static constexpr unsigned int Class_2_C1F3D2B433A06B93_TypeDefinitionIndex = 55373;

class Class_2_C1F3D2B433A06B93 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_6; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIOverlordFeastLevelWidgetController*>* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
