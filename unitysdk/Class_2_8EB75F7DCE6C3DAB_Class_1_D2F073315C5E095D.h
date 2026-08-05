#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
class Class_0_16E4307DCC419505_266;
class Class_2_8EB75F7DCE6C3DAB;
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8EB75F7DCE6C3DAB_CLASS_1_D2F073315C5E095D__CTOR_OFFSET UNITYSDK_OFFSET(0x10A17F20)

inline static constexpr unsigned int Class_2_8EB75F7DCE6C3DAB_Class_1_D2F073315C5E095D_TypeDefinitionIndex = 57665;

class Class_2_8EB75F7DCE6C3DAB_Class_1_D2F073315C5E095D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_6; // 0x10
	::Class_2_8EB75F7DCE6C3DAB* Field_1_5; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_175*>* Field_1_0; // 0x20
	::MoleMole::UIBaseController* Field_1_7; // 0x28
	::Class_0_16E4307DCC419505_266* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB75F7DCE6C3DAB_CLASS_1_D2F073315C5E095D__CTOR_OFFSET))(this);
	}
};
