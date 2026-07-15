#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ProfileUtility_Key.h"
#include "unitysdk/RPG/ProfileUtility_LoadReason.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_PROFILEUTILITY_LOADINGDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x1D2A2960)
#define RPG_PROFILEUTILITY_LOADINGDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2A4290)
#define RPG_PROFILEUTILITY_LOADINGDATA_END_OFFSET UNITYSDK_OFFSET(0x1D2A2D60)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_BEGINDATETIME_OFFSET UNITYSDK_OFFSET(0x1D2A4250)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_BEGINFRAME_OFFSET UNITYSDK_OFFSET(0x1D2A4200)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1D2A4230)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1D2A41C0)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D2A4220)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D2A4260)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1D2A4210)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D2A4240)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_FRAMEDURATION_OFFSET UNITYSDK_OFFSET(0x1D2A41F0)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D2A31B0)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D2A4180)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D2A41D0)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1D2A4270)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1D2A41E0)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_SAMPLENAME_OFFSET UNITYSDK_OFFSET(0x1D2A41B0)
#define RPG_PROFILEUTILITY_LOADINGDATA_GET_SERIALID_OFFSET UNITYSDK_OFFSET(0x1D2A41A0)
#define RPG_PROFILEUTILITY_LOADINGDATA_SET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1D2A4280)
#define RPG_PROFILEUTILITY_LOADINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A4360)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_LoadingData_TypeDefinitionIndex = 33722;

	class ProfileUtility_LoadingData : public ::System::Object
	{
	public:
		::RPG::ProfileUtility_Key m_Key; // 0x10
		::RPG::ProfileUtility_LoadingData* m_NextNode; // 0x20
		::System::Int32 m_SerialId; // 0x28
		::System::Int32 m_BeginFrame; // 0x2C
		::System::Single m_BeginTime; // 0x30
		::RPG::ProfileUtility_LoadReason m_Reason; // 0x34
		::System::Single m_EndTime; // 0x38
		::System::Int32 m_Level; // 0x3C
		::System::Int32 m_EndFrame; // 0x40
		::System::DateTime m_BeginDateTime; // 0x48
		::System::DateTime m_EndDateTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Int32 get_SerialId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_SERIALID_OFFSET))(this);
		}

		::System::String* get_SampleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_SAMPLENAME_OFFSET))(this);
		}

		::System::String* get_Detail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_DETAIL_OFFSET))(this);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::ProfileUtility_LoadReason get_Reason()
		{
			return ((::RPG::ProfileUtility_LoadReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_REASON_OFFSET))(this);
		}

		::System::Int32 get_FrameDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_FRAMEDURATION_OFFSET))(this);
		}

		::System::Int32 get_BeginFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_BEGINFRAME_OFFSET))(this);
		}

		::System::Int32 get_EndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_ENDFRAME_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_BeginTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Single get_EndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_ENDTIME_OFFSET))(this);
		}

		::System::DateTime get_BeginDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_BEGINDATETIME_OFFSET))(this);
		}

		::System::DateTime get_EndDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_ENDDATETIME_OFFSET))(this);
		}

		::RPG::ProfileUtility_LoadingData* get_NextNode()
		{
			return ((::RPG::ProfileUtility_LoadingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_GET_NEXTNODE_OFFSET))(this);
		}

		::System::Void set_NextNode(::RPG::ProfileUtility_LoadingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::ProfileUtility_LoadingData*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_SET_NEXTNODE_OFFSET))(this, a1);
		}

		::System::Void Begin(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::RPG::ProfileUtility_LoadReason a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::RPG::ProfileUtility_LoadReason))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_BEGIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::ProfileUtility_LoadingData* End()
		{
			return ((::RPG::ProfileUtility_LoadingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_END_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOADINGDATA_CLEAR_OFFSET))(this);
		}
	};
}
