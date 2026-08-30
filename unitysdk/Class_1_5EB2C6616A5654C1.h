#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5EB2C6616A5654C1__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB0E80)

inline static constexpr unsigned int Class_1_5EB2C6616A5654C1_TypeDefinitionIndex = 55781;

class Class_1_5EB2C6616A5654C1 : public ::System::Object
{
public:
	::System::String* AJHFKOGFFOP; // 0x10
	::System::String* PDPFAPMCMMI; // 0x18
	::RPG::GameCore::FixPoint BCCHCNNIEDB; // 0x20
	::System::Boolean LEFMBOJIBDM; // 0x28
	::System::Boolean FEDOIDAMKEI; // 0x29
	::RPG::GameCore::FixPoint HOELGLIGJMC; // 0x30
	::RPG::GameCore::FixPoint EFJAHDEMACL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB2C6616A5654C1__CTOR_OFFSET))(this);
	}
};
