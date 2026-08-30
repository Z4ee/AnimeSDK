#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define CLASS_2_ADCC56AA94B360FC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16CBE5B0)
#define CLASS_2_ADCC56AA94B360FC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16CBE570)
#define CLASS_2_ADCC56AA94B360FC_METHOD_2_C7ABCD1689A3F593_OFFSET UNITYSDK_OFFSET(0x16CBE520)
#define CLASS_2_ADCC56AA94B360FC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBE600)

inline static constexpr unsigned int Class_2_ADCC56AA94B360FC_TypeDefinitionIndex = 56862;

class Class_2_ADCC56AA94B360FC : public ::Class_1_BF7A075734D15E98
{
public:
	::System::UInt32 KDKBEBBKFOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADCC56AA94B360FC__CTOR_OFFSET))(this);
	}

	::Class_2_ADCC56AA94B360FC* Method_2_C7ABCD1689A3F593(::System::UInt32 a1)
	{
		return ((::Class_2_ADCC56AA94B360FC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ADCC56AA94B360FC_METHOD_2_C7ABCD1689A3F593_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADCC56AA94B360FC_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADCC56AA94B360FC_GETEVENTTYPE_OFFSET))(this);
	}
};
