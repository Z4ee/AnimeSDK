#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTagContainer; }

#define CLASS_1_9E9E805FDD041FD9_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF40790)
#define CLASS_1_9E9E805FDD041FD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF407E0)

inline static constexpr unsigned int Class_1_9E9E805FDD041FD9_TypeDefinitionIndex = 41062;

class Class_1_9E9E805FDD041FD9 : public ::System::Object
{
public:
	::RPG::GameCore::HoyoTagContainer* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9E805FDD041FD9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9E805FDD041FD9_CLEAR_OFFSET))(this);
	}
};
