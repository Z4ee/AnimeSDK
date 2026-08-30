#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }

#define CLASS_1_01CD9D891ED7965F_2_METHOD_1_97D073230DCDA0A7_OFFSET UNITYSDK_OFFSET(0xB46A0A0)
#define CLASS_1_01CD9D891ED7965F_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB46A120)

inline static constexpr unsigned int Class_1_01CD9D891ED7965F_2_TypeDefinitionIndex = 61812;

class Class_1_01CD9D891ED7965F_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01CD9D891ED7965F_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_97D073230DCDA0A7(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01CD9D891ED7965F_2_METHOD_1_97D073230DCDA0A7_OFFSET))(this, a1, a2);
	}
};
