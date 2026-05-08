#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40B7F44059EB327A.h"

class Class_1_EEA0111A28582B57;
class Class_2_1B1C05BC0A38A2D5;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivitySkinRewardV2WidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define CLASS_3_15367F2129B10348_METHOD_3_4CD8461FEFD0CC16_OFFSET UNITYSDK_OFFSET(0x1479AA30)
#define CLASS_3_15367F2129B10348_METHOD_3_8211FF886321A7BB_OFFSET UNITYSDK_OFFSET(0x1479A800)
#define CLASS_3_15367F2129B10348_METHOD_3_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1479A9B0)
#define CLASS_3_15367F2129B10348_METHOD_3_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x1479AAD0)
#define CLASS_3_15367F2129B10348__CTOR_OFFSET UNITYSDK_OFFSET(0x1479AA20)

inline static constexpr unsigned int Class_3_15367F2129B10348_TypeDefinitionIndex = 78205;

class Class_3_15367F2129B10348 : public ::Class_2_40B7F44059EB327A
{
public:
	::Class_2_1B1C05BC0A38A2D5* Field_3_1; // 0x38
	::MoleMole::UIActivityGuideInfoWidgetController* Field_3_0; // 0x40
	::MoleMole::UIActivitySkinRewardV2WidgetController* Field_3_2; // 0x48
	::UnityEngine::Transform* Field_3_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15367F2129B10348__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8211FF886321A7BB(::MoleMole::UIBaseController* a1, ::Class_1_EEA0111A28582B57* a2, ::MoleMole::UIControllerContextBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_3_15367F2129B10348_METHOD_3_8211FF886321A7BB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4CD8461FEFD0CC16(::MoleMole::UIBaseController* a1, ::Class_1_EEA0111A28582B57* a2, ::MoleMole::UIControllerContextBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_3_15367F2129B10348_METHOD_3_4CD8461FEFD0CC16_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15367F2129B10348_METHOD_3_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_3_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15367F2129B10348_METHOD_3_937F8473216A3162_OFFSET))(this);
	}
};
