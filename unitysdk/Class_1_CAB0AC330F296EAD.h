#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYNumButtonType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_CAB0AC330F296EAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E2320)

inline static constexpr unsigned int Class_1_CAB0AC330F296EAD_TypeDefinitionIndex = 80666;

class Class_1_CAB0AC330F296EAD : public ::System::Object
{
public:
	::System::Action* ONPCPLEECCG; // 0x10
	::System::Int32 JOGMEBDMGNG; // 0x18
	::RPG::Client::B51Racing::B51RacingDIYNumButtonType PGOHOFMMIAJ; // 0x1C
	::System::Int32 HOBEHPAKFHM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAB0AC330F296EAD__CTOR_OFFSET))(this);
	}
};
