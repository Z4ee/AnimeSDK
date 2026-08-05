#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_179;
class Class_1_9631DA8CB6F86BD4;
namespace MoleMole { class UIGeneralAvatarGesturePurchaseWidgetController_Context; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D45A017E0D38CF83_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x141DAC80)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D45A017E0D38CF83_METHOD_1_AF6B7BBA4CF3C1A2_OFFSET UNITYSDK_OFFSET(0x141DAE20)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D45A017E0D38CF83__CTOR_OFFSET UNITYSDK_OFFSET(0x141DAC70)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_D45A017E0D38CF83_TypeDefinitionIndex = 50187;

class Class_1_8B550A61FC9DDA82_Class_1_D45A017E0D38CF83 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_179* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D45A017E0D38CF83__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D45A017E0D38CF83_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_AF6B7BBA4CF3C1A2(::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D45A017E0D38CF83_METHOD_1_AF6B7BBA4CF3C1A2_OFFSET))(this, a1);
	}
};
