#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

class Class_2_A19A9F2D9E1D1B1E;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_546C6222FBEA4460__CTOR_OFFSET UNITYSDK_OFFSET(0x180E7590)

inline static constexpr unsigned int Class_1_546C6222FBEA4460_TypeDefinitionIndex = 42195;

class Class_1_546C6222FBEA4460 : public ::System::Object
{
public:
	::System::Action_3<::Class_2_A19A9F2D9E1D1B1E*, ::System::Boolean, ::System::Boolean>* Field_1_1; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::Action_1<::Class_2_A19A9F2D9E1D1B1E*>* Field_1_0; // 0x20
	::MoleMole::InputLogicEventType Field_1_5; // 0x28
	::System::Boolean Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_546C6222FBEA4460__CTOR_OFFSET))(this);
	}
};
