#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DE782794730406DC;
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1A10DCDE3384A06A__CTOR_OFFSET UNITYSDK_OFFSET(0x12373BE0)

inline static constexpr unsigned int Class_1_1A10DCDE3384A06A_TypeDefinitionIndex = 74223;

class Class_1_1A10DCDE3384A06A : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIGeneralBtn03WidgetController*>* Field_1_1; // 0x10
	::System::Action_1<::Class_2_DE782794730406DC*>* Field_1_2; // 0x18
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A10DCDE3384A06A__CTOR_OFFSET))(this);
	}
};
