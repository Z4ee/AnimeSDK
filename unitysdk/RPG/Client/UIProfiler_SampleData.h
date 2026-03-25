#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0xA7296D0)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_END_OFFSET UNITYSDK_OFFSET(0xA7299E0)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xA72A170)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA72A1E0)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0xA72A130)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GET_SAMPLETYPE_OFFSET UNITYSDK_OFFSET(0xA72A120)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_LOGSAMPLEDATA_OFFSET UNITYSDK_OFFSET(0xA729A30)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_NOTIFYSAMPLEDATA_OFFSET UNITYSDK_OFFSET(0xA729A70)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7296C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_SampleData_TypeDefinitionIndex = 59988;

	class UIProfiler_SampleData : public ::System::Object
	{
	public:
		::System::String* _Name; // 0x10
		::System::Int32 _EndFrame; // 0x18
		::RPG::Client::UIProfiler_SampleType _Type; // 0x1C
		::System::Single _EndTime; // 0x20
		::System::Int32 _BeginFrame; // 0x24
		::System::Single _BeginTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIProfiler_SampleType get_SampleType()
		{
			return ((::RPG::Client::UIProfiler_SampleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_GET_SAMPLETYPE_OFFSET))(this);
		}

		::System::Void Begin(::RPG::Client::UIProfiler_SampleType sampleType, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_BEGIN_OFFSET))(this, sampleType, name);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_END_OFFSET))(this);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETNAME_OFFSET))(this);
		}

		::System::Single GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETDELTATIME_OFFSET))(this);
		}

		::System::Single GetFrameCount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETFRAMECOUNT_OFFSET))(this);
		}

		::System::Void NotifySampleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_NOTIFYSAMPLEDATA_OFFSET))(this);
		}

		::System::Void LogSampleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_LOGSAMPLEDATA_OFFSET))(this);
		}
	};
}
