#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }

#define CLASS_1_01CD9D891ED7965F_1_METHOD_1_97D073230DCDA0A7_OFFSET UNITYSDK_OFFSET(0x154D57E0)
#define CLASS_1_01CD9D891ED7965F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x154D5860)

inline static constexpr unsigned int Class_1_01CD9D891ED7965F_1_TypeDefinitionIndex = 61811;

class Class_1_01CD9D891ED7965F_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01CD9D891ED7965F_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_97D073230DCDA0A7(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01CD9D891ED7965F_1_METHOD_1_97D073230DCDA0A7_OFFSET))(this, a1, a2);
	}
};
