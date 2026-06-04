#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_87EAC1A8F0E1AE21__CTOR_OFFSET UNITYSDK_OFFSET(0xAEDBA90)

inline static constexpr unsigned int Class_1_87EAC1A8F0E1AE21_TypeDefinitionIndex = 64902;

class Class_1_87EAC1A8F0E1AE21 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87EAC1A8F0E1AE21__CTOR_OFFSET))(this);
	}
};
