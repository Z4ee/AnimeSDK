#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ProfileCounterType.h"
#include "unitysdk/RPG/ProfileUtility_Key.h"
#include "unitysdk/RPG/ProfileUtility_LoadReason.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace RPG { class ProfileCounter; }
namespace RPG { class ProfileUtility_LoadingData; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_PROFILEUTILITY_ADDCOUNTER_OFFSET UNITYSDK_OFFSET(0x19D335D0)
#define RPG_PROFILEUTILITY_APPENDGOPLISTITEM_OFFSET UNITYSDK_OFFSET(0x19D349B0)
#define RPG_PROFILEUTILITY_APPENDLOADERLISTITEM_OFFSET UNITYSDK_OFFSET(0x19D34A10)
#define RPG_PROFILEUTILITY_BEGINADVLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D33D10)
#define RPG_PROFILEUTILITY_BEGINBGPLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D34A90)
#define RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x19D36360)
#define RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D36350)
#define RPG_PROFILEUTILITY_BEGINLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D35480)
#define RPG_PROFILEUTILITY_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D36330)
#define RPG_PROFILEUTILITY_CLEARALLLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x19D35D30)
#define RPG_PROFILEUTILITY_CLEARCOMPLETEDLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x19D35FA0)
#define RPG_PROFILEUTILITY_CLEARPROGRESSLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x19D36110)
#define RPG_PROFILEUTILITY_EMITFRAMEMETASTRING_OFFSET UNITYSDK_OFFSET(0x19D36380)
#define RPG_PROFILEUTILITY_ENDADVLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D33D20)
#define RPG_PROFILEUTILITY_ENDBGPLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D34AA0)
#define RPG_PROFILEUTILITY_ENDDETAILSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D36370)
#define RPG_PROFILEUTILITY_ENDLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D35970)
#define RPG_PROFILEUTILITY_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x19D36340)
#define RPG_PROFILEUTILITY_EXPORTALLLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x19D362F0)
#define RPG_PROFILEUTILITY_GETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x19D35470)
#define RPG_PROFILEUTILITY_GETOUTPUTDIR_OFFSET UNITYSDK_OFFSET(0x19D33E50)
#define RPG_PROFILEUTILITY_GETPROFILENAME_OFFSET UNITYSDK_OFFSET(0x19D36560)
#define RPG_PROFILEUTILITY_GETTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x19D36930)
#define RPG_PROFILEUTILITY_INCCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x19D35460)
#define RPG_PROFILEUTILITY_LOGADVLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x19D342D0)
#define RPG_PROFILEUTILITY_LOGBGPLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x19D34FC0)
#define RPG_PROFILEUTILITY_LOGCOMMONLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x19D34640)
#define RPG_PROFILEUTILITY_MARKENDADVENTURELOADING_OFFSET UNITYSDK_OFFSET(0x19D33E90)
#define RPG_PROFILEUTILITY_MARKENDBATTLELOADING_OFFSET UNITYSDK_OFFSET(0x19D34B30)
#define RPG_PROFILEUTILITY_MARKSTARTADVENTURELOADING_OFFSET UNITYSDK_OFFSET(0x19D33D30)
#define RPG_PROFILEUTILITY_MARKSTARTBATTLELOADING_OFFSET UNITYSDK_OFFSET(0x19D34AB0)
#define RPG_PROFILEUTILITY_RESETALLCOUNTERS_OFFSET UNITYSDK_OFFSET(0x19D35340)
#define RPG_PROFILEUTILITY_SETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x19D35330)
#define RPG_PROFILEUTILITY__BGPSTATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x19D34B20)
#define RPG_PROFILEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D36AC0)
#define RPG_PROFILEUTILITY__STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x19D33E80)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_TypeDefinitionIndex = 33240;

	class ProfileUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::System::String*>** StaticGet_s_CachedProfileStrings()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD00);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>** StaticGet_s_StringToBytesCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD08);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__GOPList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD10);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::RPG::ProfileUtility_LoadingData*>** StaticGet_s_ProgressData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::RPG::ProfileUtility_LoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD18);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__Logs()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD20);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__LoaderList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD28);
		}
		static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_s_AllCounters()
		{
			return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ProfileUtility_LoadingData*>** StaticGet_s_LoadingData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ProfileUtility_LoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_s_TypeFullNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xD40);
		}
		static ::System::Int32* StaticGet__BgpLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		static ::System::Int32* StaticGet__AdvLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7C4);
		}
		static ::System::Int32* StaticGet__CommonLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7C8);
		}
		static ::System::Int32* StaticGet_DefaultTag()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7CC);
		}
		static ::System::Single* StaticGet__BgpLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		static ::System::Guid* StaticGet_ProfilerGuid()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7D4);
		}
		static ::System::Single* StaticGet__CommonLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7E4);
		}
		static ::System::Single* StaticGet__AdvLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7E8);
		}
		static ::System::Int32* StaticGet_s_SerialId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7EC);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ProfilerOnlyMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7F0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_EditorOnlyMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x7F8);
		}
		// static const ::System::String* ProfilePrefixName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void BeginAdvLoadingSample(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINADVLOADINGSAMPLE_OFFSET))(msg);
		}

		static ::System::Void EndAdvLoadingSample()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDADVLOADINGSAMPLE_OFFSET))();
		}

		static ::System::Void MarkStartAdventureLoading()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_MARKSTARTADVENTURELOADING_OFFSET))();
		}

		static ::System::String* GetOutputDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETOUTPUTDIR_OFFSET))();
		}

		static ::System::Void _StatisticsData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY__STATISTICSDATA_OFFSET))();
		}

		static ::System::Void MarkEndAdventureLoading()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_MARKENDADVENTURELOADING_OFFSET))();
		}

		static ::System::Void LogAdvLoadingProfile(::System::String* message, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOGADVLOADINGPROFILE_OFFSET))(message, level);
		}

		static ::System::Void LogCommonLoadingProfile(::System::String* message, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOGCOMMONLOADINGPROFILE_OFFSET))(message, level);
		}

		static ::System::Void AppendGopListItem(::System::String* item)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_APPENDGOPLISTITEM_OFFSET))(item);
		}

		static ::System::Void AppendLoaderListItem(::System::String* item)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_APPENDLOADERLISTITEM_OFFSET))(item);
		}

		static ::System::Void BeginBgpLoadingSample(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINBGPLOADINGSAMPLE_OFFSET))(msg);
		}

		static ::System::Void EndBgpLoadingSample()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDBGPLOADINGSAMPLE_OFFSET))();
		}

		static ::System::Void MarkStartBattleLoading()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_MARKSTARTBATTLELOADING_OFFSET))();
		}

		static ::System::Void _BgpStatisticsData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY__BGPSTATISTICSDATA_OFFSET))();
		}

		static ::System::Void MarkEndBattleLoading()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_MARKENDBATTLELOADING_OFFSET))();
		}

		static ::System::Void LogBgpLoadingProfile(::System::String* message, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOGBGPLOADINGPROFILE_OFFSET))(message, level);
		}

		static ::System::Void SetCounterValue(::RPG::ProfileCounterType counterType, ::System::Int32 val)
		{
			return ((::System::Void(*)(::RPG::ProfileCounterType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_SETCOUNTERVALUE_OFFSET))(counterType, val);
		}

		static ::System::Void AddCounter(::RPG::ProfileCounter* counter)
		{
			return ((::System::Void(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ADDCOUNTER_OFFSET))(counter);
		}

		static ::System::Void ResetAllCounters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_RESETALLCOUNTERS_OFFSET))();
		}

		static ::System::Void IncCounterValue(::RPG::ProfileCounterType counterType, ::System::Int32 val)
		{
			return ((::System::Void(*)(::RPG::ProfileCounterType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_INCCOUNTERVALUE_OFFSET))(counterType, val);
		}

		static ::System::Int32 GetCounterValue(::RPG::ProfileCounterType counterType)
		{
			return ((::System::Int32(*)(::RPG::ProfileCounterType))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETCOUNTERVALUE_OFFSET))(counterType);
		}

		static ::System::Void BeginLoadingSample(::System::String* sampleName, ::System::String* detail, ::System::Int32 level, ::RPG::ProfileUtility_LoadReason reason)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::RPG::ProfileUtility_LoadReason))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINLOADINGSAMPLE_OFFSET))(sampleName, detail, level, reason);
		}

		static ::System::Void EndLoadingSample(::System::String* sampleName, ::System::String* detail)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDLOADINGSAMPLE_OFFSET))(sampleName, detail);
		}

		static ::System::Void ClearAllLoadingData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_CLEARALLLOADINGDATA_OFFSET))();
		}

		static ::System::Void ClearCompletedLoadingData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_CLEARCOMPLETEDLOADINGDATA_OFFSET))();
		}

		static ::System::Void ClearProgressLoadingData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_CLEARPROGRESSLOADINGDATA_OFFSET))();
		}

		static ::System::String* ExportAllLoadingData(::RPG::ProfileUtility_LoadReason reason, ::System::Int32 level)
		{
			return ((::System::String*(*)(::RPG::ProfileUtility_LoadReason, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_EXPORTALLLOADINGDATA_OFFSET))(reason, level);
		}

		static ::System::Void BeginSample(::System::String* sampleName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINSAMPLE_OFFSET))(sampleName);
		}

		static ::System::Void EndSample()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDSAMPLE_OFFSET))();
		}

		static ::System::Void BeginDetailSample(::System::String* sampleName, ::System::String* detail)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_OFFSET))(sampleName, detail);
		}

		static ::System::Void BeginDetailSample_1(::System::String* sampleName, ::System::Object* contextObject)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_1_OFFSET))(sampleName, contextObject);
		}

		static ::System::Void EndDetailSample()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDDETAILSAMPLE_OFFSET))();
		}

		static ::System::Void EmitFrameMetaString(::System::String* metaStr)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_EMITFRAMEMETASTRING_OFFSET))(metaStr);
		}

		static ::System::String* GetProfileName(::System::String* sampleName, ::System::Object* detailContext)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETPROFILENAME_OFFSET))(sampleName, detailContext);
		}

		static ::System::String* GetTypeFullName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETTYPEFULLNAME_OFFSET))(type);
		}
	};
}
