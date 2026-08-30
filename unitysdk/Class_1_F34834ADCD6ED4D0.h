#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F34834ADCD6ED4D0_FocusTimingType.h"
#include "unitysdk/RPG/Client/UIController_TransitionStyle.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_F34834ADCD6ED4D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16369430)

inline static constexpr unsigned int Class_1_F34834ADCD6ED4D0_TypeDefinitionIndex = 50108;

class Class_1_F34834ADCD6ED4D0 : public ::System::Object
{
public:
	::System::String* GNLBEIHINPI; // 0x10
	::System::String* BDACPPLKLGL; // 0x18
	::RPG::Client::UIController_TransitionStyle HHPLFNBGLEK; // 0x20
	::System::Boolean BCOKPOLAFCG; // 0x24
	::System::Boolean OAHAEALJFAB; // 0x25
	::RPG::Client::UILayer OCKDGDBMPOM; // 0x28
	::Class_1_F34834ADCD6ED4D0_FocusTimingType LLABLFFNOFE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F34834ADCD6ED4D0__CTOR_OFFSET))(this);
	}
};
