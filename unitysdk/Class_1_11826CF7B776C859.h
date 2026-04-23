#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;

#define CLASS_1_11826CF7B776C859_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x12136530)
#define CLASS_1_11826CF7B776C859_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x12136510)
#define CLASS_1_11826CF7B776C859_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12136540)
#define CLASS_1_11826CF7B776C859_INVOKE_OFFSET UNITYSDK_OFFSET(0x12136550)
#define CLASS_1_11826CF7B776C859_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x12136520)
#define CLASS_1_11826CF7B776C859__CTOR_OFFSET UNITYSDK_OFFSET(0x12136500)

inline static constexpr unsigned int Class_1_11826CF7B776C859_TypeDefinitionIndex = 67349;

class Class_1_11826CF7B776C859 : public ::System::Object
{
public:
	::System::Boolean _Muted_k__BackingField; // 0x10
	::System::UInt32 _RuntimeID_k__BackingField; // 0x14
	::RPG::GameCore::EventType _EventType_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::EventType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11826CF7B776C859__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_Muted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11826CF7B776C859_GET_MUTED_OFFSET))(this);
	}

	::System::Void set_Muted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_11826CF7B776C859_SET_MUTED_OFFSET))(this, value);
	}

	::RPG::GameCore::EventType get_EventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11826CF7B776C859_GET_EVENTTYPE_OFFSET))(this);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11826CF7B776C859_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_11826CF7B776C859_INVOKE_OFFSET))(this, a1);
	}
};
