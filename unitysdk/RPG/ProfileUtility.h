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

#define RPG_PROFILEUTILITY_ADDCOUNTER_OFFSET UNITYSDK_OFFSET(0x182DD890)
#define RPG_PROFILEUTILITY_APPENDGOPLISTITEM_OFFSET UNITYSDK_OFFSET(0x182DEC70)
#define RPG_PROFILEUTILITY_APPENDLOADERLISTITEM_OFFSET UNITYSDK_OFFSET(0x182DECD0)
#define RPG_PROFILEUTILITY_BEGINADVLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x182DDFD0)
#define RPG_PROFILEUTILITY_BEGINBGPLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x182DED50)
#define RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x182E0620)
#define RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_OFFSET UNITYSDK_OFFSET(0x182E0610)
#define RPG_PROFILEUTILITY_BEGINLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x182DF740)
#define RPG_PROFILEUTILITY_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x182E05F0)
#define RPG_PROFILEUTILITY_CLEARALLLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x182DFFF0)
#define RPG_PROFILEUTILITY_CLEARCOMPLETEDLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x182E0260)
#define RPG_PROFILEUTILITY_CLEARPROGRESSLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x182E03D0)
#define RPG_PROFILEUTILITY_EMITFRAMEMETASTRING_OFFSET UNITYSDK_OFFSET(0x182E0640)
#define RPG_PROFILEUTILITY_ENDADVLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x182DDFE0)
#define RPG_PROFILEUTILITY_ENDBGPLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x182DED60)
#define RPG_PROFILEUTILITY_ENDDETAILSAMPLE_OFFSET UNITYSDK_OFFSET(0x182E0630)
#define RPG_PROFILEUTILITY_ENDLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x182DFC30)
#define RPG_PROFILEUTILITY_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x182E0600)
#define RPG_PROFILEUTILITY_EXPORTALLLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x182E05B0)
#define RPG_PROFILEUTILITY_GETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x182DF730)
#define RPG_PROFILEUTILITY_GETOUTPUTDIR_OFFSET UNITYSDK_OFFSET(0x182DE110)
#define RPG_PROFILEUTILITY_GETPROFILENAME_OFFSET UNITYSDK_OFFSET(0x182E0840)
#define RPG_PROFILEUTILITY_GETTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x182E0C10)
#define RPG_PROFILEUTILITY_INCCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x182DF720)
#define RPG_PROFILEUTILITY_LOGADVLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x182DE590)
#define RPG_PROFILEUTILITY_LOGBGPLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x182DF280)
#define RPG_PROFILEUTILITY_LOGCOMMONLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x182DE900)
#define RPG_PROFILEUTILITY_MARKENDADVENTURELOADING_OFFSET UNITYSDK_OFFSET(0x182DE150)
#define RPG_PROFILEUTILITY_MARKENDBATTLELOADING_OFFSET UNITYSDK_OFFSET(0x182DEDF0)
#define RPG_PROFILEUTILITY_MARKSTARTADVENTURELOADING_OFFSET UNITYSDK_OFFSET(0x182DDFF0)
#define RPG_PROFILEUTILITY_MARKSTARTBATTLELOADING_OFFSET UNITYSDK_OFFSET(0x182DED70)
#define RPG_PROFILEUTILITY_RESETALLCOUNTERS_OFFSET UNITYSDK_OFFSET(0x182DF600)
#define RPG_PROFILEUTILITY_SETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x182DF5F0)
#define RPG_PROFILEUTILITY__BGPSTATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x182DEDE0)
#define RPG_PROFILEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x182E0DA0)
#define RPG_PROFILEUTILITY__STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x182DE140)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_TypeDefinitionIndex = 27616;

	class ProfileUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ProfileUtility_LoadingData*>** StaticGet_s_LoadingData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ProfileUtility_LoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8A0);
		}
		static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_s_AllCounters()
		{
			return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::System::String*>** StaticGet_s_CachedProfileStrings()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8B0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__LoaderList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_s_TypeFullNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>** StaticGet_s_StringToBytesCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8C8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__Logs()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::RPG::ProfileUtility_LoadingData*>** StaticGet_s_ProgressData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::RPG::ProfileUtility_LoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8D8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__GOPList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x8E0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_EditorOnlyMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x530);
		}
		static ::System::Int32* StaticGet__CommonLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x538);
		}
		static ::System::Single* StaticGet__BgpLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x53C);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ProfilerOnlyMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		static ::System::Guid* StaticGet_ProfilerGuid()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x548);
		}
		static ::System::Int32* StaticGet_DefaultTag()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x558);
		}
		static ::System::Int32* StaticGet__BgpLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x55C);
		}
		static ::System::Int32* StaticGet__AdvLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::System::Single* StaticGet__AdvLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x564);
		}
		static ::System::Single* StaticGet__CommonLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::System::Int32* StaticGet_s_SerialId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x56C);
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
