#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISummerFishAquariumStarWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_8DBCF8411D8E2515_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x117C99E0)
#define CLASS_2_8DBCF8411D8E2515_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x117C9BF0)
#define CLASS_2_8DBCF8411D8E2515_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x117C9CF0)
#define CLASS_2_8DBCF8411D8E2515__CTOR_OFFSET UNITYSDK_OFFSET(0x117C9CE0)

inline static constexpr unsigned int Class_2_8DBCF8411D8E2515_TypeDefinitionIndex = 45865;

class Class_2_8DBCF8411D8E2515 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UISummerFishAquariumStarWidgetController*>* Field_2_7; // 0x20
	::MoleMole::NotificationBadge* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
