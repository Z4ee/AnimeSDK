#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController_TransitionStyle.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1554F99FCC043827__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5A990)

inline static constexpr unsigned int Class_1_1554F99FCC043827_TypeDefinitionIndex = 44445;

class Class_1_1554F99FCC043827 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::UIController_TransitionStyle Field_1_2; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::RPG::Client::UILayer Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1554F99FCC043827__CTOR_OFFSET))(this);
	}
};
