#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithIntData.h"

namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_RPGPROFILERMARKER_BEGIN_1_OFFSET UNITYSDK_OFFSET(0x1ABAF730)
#define RPG_CLIENT_RPGPROFILERMARKER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1ABAF550)
#define RPG_CLIENT_RPGPROFILERMARKER_END_OFFSET UNITYSDK_OFFSET(0x1ABAF830)
#define RPG_CLIENT_RPGPROFILERMARKER__BUDGETMARKERBEGIN_OFFSET UNITYSDK_OFFSET(0x1ABAF9A0)
#define RPG_CLIENT_RPGPROFILERMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAF430)
#define RPG_CLIENT_RPGPROFILERMARKER__INTMARKEREND_OFFSET UNITYSDK_OFFSET(0x1ABAFB20)
#define RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKERACTIVATED_OFFSET UNITYSDK_OFFSET(0x1ABAF990)
#define RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKER_OFFSET UNITYSDK_OFFSET(0x1ABAF980)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarker_TypeDefinitionIndex = 33360;

	class RPGProfilerMarker : public ::System::Object
	{
	public:
		// static const ::System::String* _INT_MARKER_P1_NAME; // 0x0
		// static const ::System::String* _INT_MARKER_P2_NAME; // 0x0
		::System::Diagnostics::Stopwatch* m_Stopwatch; // 0x10
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x18
		::Unity::Profiling::ProfilerMarkerWithIntData m_IntMarker; // 0x20
		::System::Int32 m_ActivatedMs; // 0x30
		::System::Int32 m_BudgetCoolDownCurrent; // 0x34
		::System::Int32 m_BudgetMs; // 0x38
		::System::Int32 m_BudgetCoolDownMax; // 0x3C
		::Unity::Profiling::ProfilerMarker m_Marker; // 0x40

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_BEGIN_OFFSET))(this);
		}

		::System::Void Begin_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_BEGIN_1_OFFSET))(this, a1);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER_END_OFFSET))(this);
		}

		::System::Boolean _IsBudgetMarker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKER_OFFSET))(this);
		}

		::System::Boolean _IsBudgetMarkerActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__ISBUDGETMARKERACTIVATED_OFFSET))(this);
		}

		::System::Void _BudgetMarkerBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__BUDGETMARKERBEGIN_OFFSET))(this);
		}

		::System::Void _IntMarkerEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKER__INTMARKEREND_OFFSET))(this);
		}
	};
}
