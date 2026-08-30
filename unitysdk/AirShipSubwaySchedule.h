#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class SubwayScheduleData;
class TimeSlotConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIRSHIPSUBWAYSCHEDULE_METHOD_3_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x1765EB70)
#define AIRSHIPSUBWAYSCHEDULE_METHOD_3_5591F7FC72D87A0E_OFFSET UNITYSDK_OFFSET(0x1765EC70)
#define AIRSHIPSUBWAYSCHEDULE_METHOD_3_7FF186C33A48A21A_OFFSET UNITYSDK_OFFSET(0x1765E4F0)
#define AIRSHIPSUBWAYSCHEDULE_METHOD_3_858C6261DBD00141_OFFSET UNITYSDK_OFFSET(0x1765E900)
#define AIRSHIPSUBWAYSCHEDULE_METHOD_3_BA7BA85FBE4A1104_OFFSET UNITYSDK_OFFSET(0x1765EAF0)
#define AIRSHIPSUBWAYSCHEDULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1765ECC0)

inline static constexpr unsigned int AirShipSubwaySchedule_TypeDefinitionIndex = 47551;

class AirShipSubwaySchedule : public ::UnityEngine::ScriptableObject
{
public:
	// static const ::System::Int32 MinutesInDay = 0x5A0; // 0x0
	::System::Collections::Generic::List_1<::SubwayScheduleData*>* SubwaySchedule; // 0x18
	::System::Int32 editor_Interval; // 0x20
	::System::Int32 editor_Offset; // 0x24
	::System::Int32 editor_Waitingtime; // 0x28
	::System::Collections::Generic::List_1<::TimeSlotConfig*>* editor_TimeSlotConfigs; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7FF186C33A48A21A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_METHOD_3_7FF186C33A48A21A_OFFSET))(this, a1, a2);
	}

	::TimeSlotConfig* Method_3_858C6261DBD00141(::System::Int32 a1)
	{
		return ((::TimeSlotConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_METHOD_3_858C6261DBD00141_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BA7BA85FBE4A1104(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_METHOD_3_BA7BA85FBE4A1104_OFFSET))(this, a1, a2, a3);
	}

	static ::System::String* Method_3_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_METHOD_3_4B967A5E70FF7EE4_OFFSET))(a1);
	}

	::System::Void Method_3_5591F7FC72D87A0E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_METHOD_3_5591F7FC72D87A0E_OFFSET))(this);
	}
};
