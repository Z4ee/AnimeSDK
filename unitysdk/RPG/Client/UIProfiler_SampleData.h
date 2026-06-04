#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0xCB8E1E0)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_END_OFFSET UNITYSDK_OFFSET(0xCB8E4C0)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xCB8ECC0)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xCB8ED30)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0xCB8EC80)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_GET_SAMPLETYPE_OFFSET UNITYSDK_OFFSET(0xCB8EC70)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_LOGSAMPLEDATA_OFFSET UNITYSDK_OFFSET(0xCB8E510)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA_NOTIFYSAMPLEDATA_OFFSET UNITYSDK_OFFSET(0xCB8E550)
#define RPG_CLIENT_UIPROFILER_SAMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB8E1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_SampleData_TypeDefinitionIndex = 68338;

	class UIProfiler_SampleData : public ::System::Object
	{
	public:
		::System::String* _Name; // 0x10
		::RPG::Client::UIProfiler_SampleType _Type; // 0x18
		::System::Single _EndTime; // 0x1C
		::System::Int32 _EndFrame; // 0x20
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

		::System::Void Begin(::RPG::Client::UIProfiler_SampleType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_SAMPLEDATA_BEGIN_OFFSET))(this, a1, a2);
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
