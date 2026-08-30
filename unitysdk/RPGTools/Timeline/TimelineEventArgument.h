#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class TimelineEventArgument_TimelineEventCallParam; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_19FAEE8D27FE7B2E_OFFSET UNITYSDK_OFFSET(0x1BF2BFF0)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_2FEDAD90B1F012D7_OFFSET UNITYSDK_OFFSET(0x1BF2BE30)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_5BF2E2AD860B1DBA_OFFSET UNITYSDK_OFFSET(0x1BF2BF90)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_70D6F522F3C40980_OFFSET UNITYSDK_OFFSET(0x1BF2BDC0)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_D6D7DE7A8E2DC3B7_OFFSET UNITYSDK_OFFSET(0x1BF2BF30)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2C080)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineEventArgument_TypeDefinitionIndex = 48885;

	class TimelineEventArgument : public ::System::Object
	{
	public:
		::System::Boolean NonPerformer; // 0x10
		::System::Byte TypeEnumIdx; // 0x11
		::System::String* Key; // 0x18
		::Il2CppArray<::RPGTools::Timeline::TimelineEventArgument_TimelineEventCallParam*>* Parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_70D6F522F3C40980(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_70D6F522F3C40980_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_D6D7DE7A8E2DC3B7(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_D6D7DE7A8E2DC3B7_OFFSET))(this, a1);
		}

		::System::Single Method_1_5BF2E2AD860B1DBA(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_5BF2E2AD860B1DBA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_19FAEE8D27FE7B2E(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_19FAEE8D27FE7B2E_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::TimelineEventArgument_TimelineEventCallParam* Method_1_2FEDAD90B1F012D7(::System::String* a1)
		{
			return ((::RPGTools::Timeline::TimelineEventArgument_TimelineEventCallParam*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_METHOD_1_2FEDAD90B1F012D7_OFFSET))(this, a1);
		}
	};
}
