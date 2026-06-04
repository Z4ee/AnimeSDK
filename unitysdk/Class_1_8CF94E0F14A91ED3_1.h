#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8CF94E0F14A91ED3_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x13FF3A80)
#define CLASS_1_8CF94E0F14A91ED3_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x13FF3A30)
#define CLASS_1_8CF94E0F14A91ED3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF3A20)

inline static constexpr unsigned int Class_1_8CF94E0F14A91ED3_1_TypeDefinitionIndex = 52878;

class Class_1_8CF94E0F14A91ED3_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_1_GETEVENTTYPE_OFFSET))(this);
	}
};
