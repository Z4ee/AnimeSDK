#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9EEE4B392864BA28__CTOR_OFFSET UNITYSDK_OFFSET(0xB6AAB40)

inline static constexpr unsigned int Class_1_9EEE4B392864BA28_TypeDefinitionIndex = 55355;

class Class_1_9EEE4B392864BA28 : public ::System::Object
{
public:
	::System::Boolean GNDCCBNILML; // 0x10
	::System::UInt32 AALPICLABCO; // 0x14
	::RPG::Client::TextID PJHMJKEIGOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EEE4B392864BA28__CTOR_OFFSET))(this);
	}
};
