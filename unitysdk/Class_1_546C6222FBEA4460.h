#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

class Class_2_9F4F3B1678689337;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_546C6222FBEA4460__CTOR_OFFSET UNITYSDK_OFFSET(0x16802E90)

inline static constexpr unsigned int Class_1_546C6222FBEA4460_TypeDefinitionIndex = 67778;

class Class_1_546C6222FBEA4460 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Action_3<::Class_2_9F4F3B1678689337*, ::System::Boolean, ::System::Boolean>* Field_1_0; // 0x18
	::System::Action_1<::Class_2_9F4F3B1678689337*>* Field_1_1; // 0x20
	::MoleMole::InputLogicEventType Field_1_4; // 0x28
	::System::Boolean Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_546C6222FBEA4460__CTOR_OFFSET))(this);
	}
};
