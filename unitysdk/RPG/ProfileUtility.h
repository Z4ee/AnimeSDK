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

#define RPG_PROFILEUTILITY_ADDCOUNTER_OFFSET UNITYSDK_OFFSET(0x1EF92BF0)
#define RPG_PROFILEUTILITY_APPENDGOPLISTITEM_OFFSET UNITYSDK_OFFSET(0x1EF93EE0)
#define RPG_PROFILEUTILITY_APPENDLOADERLISTITEM_OFFSET UNITYSDK_OFFSET(0x1EF93F90)
#define RPG_PROFILEUTILITY_BEGINADVLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF93350)
#define RPG_PROFILEUTILITY_BEGINBGPLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF94060)
#define RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x1EF95810)
#define RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF95800)
#define RPG_PROFILEUTILITY_BEGINLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF949C0)
#define RPG_PROFILEUTILITY_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF957E0)
#define RPG_PROFILEUTILITY_CLEARALLLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x1EF95230)
#define RPG_PROFILEUTILITY_CLEARCOMPLETEDLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x1EF95470)
#define RPG_PROFILEUTILITY_CLEARPROGRESSLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x1EF955D0)
#define RPG_PROFILEUTILITY_EMITFRAMEMETASTRING_OFFSET UNITYSDK_OFFSET(0x1EF95830)
#define RPG_PROFILEUTILITY_ENDADVLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF93360)
#define RPG_PROFILEUTILITY_ENDBGPLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF94070)
#define RPG_PROFILEUTILITY_ENDDETAILSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF95820)
#define RPG_PROFILEUTILITY_ENDLOADINGSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF94EA0)
#define RPG_PROFILEUTILITY_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EF957F0)
#define RPG_PROFILEUTILITY_EXPORTALLLOADINGDATA_OFFSET UNITYSDK_OFFSET(0x1EF957A0)
#define RPG_PROFILEUTILITY_GETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x1EF949B0)
#define RPG_PROFILEUTILITY_GETOUTPUTDIR_OFFSET UNITYSDK_OFFSET(0x1EF93490)
#define RPG_PROFILEUTILITY_GETPROFILENAME_OFFSET UNITYSDK_OFFSET(0x1EF95A10)
#define RPG_PROFILEUTILITY_GETTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1EF95E00)
#define RPG_PROFILEUTILITY_INCCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x1EF949A0)
#define RPG_PROFILEUTILITY_LOGADVLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x1EF938A0)
#define RPG_PROFILEUTILITY_LOGBGPLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x1EF94530)
#define RPG_PROFILEUTILITY_LOGCOMMONLOADINGPROFILE_OFFSET UNITYSDK_OFFSET(0x1EF93BC0)
#define RPG_PROFILEUTILITY_MARKENDADVENTURELOADING_OFFSET UNITYSDK_OFFSET(0x1EF934D0)
#define RPG_PROFILEUTILITY_MARKENDBATTLELOADING_OFFSET UNITYSDK_OFFSET(0x1EF94100)
#define RPG_PROFILEUTILITY_MARKSTARTADVENTURELOADING_OFFSET UNITYSDK_OFFSET(0x1EF93370)
#define RPG_PROFILEUTILITY_MARKSTARTBATTLELOADING_OFFSET UNITYSDK_OFFSET(0x1EF94080)
#define RPG_PROFILEUTILITY_RESETALLCOUNTERS_OFFSET UNITYSDK_OFFSET(0x1EF94860)
#define RPG_PROFILEUTILITY_SETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x1EF94850)
#define RPG_PROFILEUTILITY__BGPSTATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x1EF940F0)
#define RPG_PROFILEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF95FE0)
#define RPG_PROFILEUTILITY__STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x1EF934C0)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_TypeDefinitionIndex = 34485;

	class ProfileUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::RPG::ProfileUtility_LoadingData*>** StaticGet_s_ProgressData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::RPG::ProfileUtility_LoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xA80);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__Logs()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xA88);
		}
		static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_s_AllCounters()
		{
			return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::System::String*>** StaticGet_s_CachedProfileStrings()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::ProfileUtility_Key, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xA98);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__LoaderList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xAA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ProfileUtility_LoadingData*>** StaticGet_s_LoadingData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ProfileUtility_LoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xAA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_s_TypeFullNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xAB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>** StaticGet_s_StringToBytesCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xAB8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__GOPList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0xAC0);
		}
		static ::System::Int32* StaticGet__BgpLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x520);
		}
		static ::System::Int32* StaticGet__AdvLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x524);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_EditorOnlyMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x528);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ProfilerOnlyMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x530);
		}
		static ::System::Single* StaticGet__BgpLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x538);
		}
		static ::System::Single* StaticGet__CommonLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x53C);
		}
		static ::System::Int32* StaticGet_s_SerialId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		static ::System::Guid* StaticGet_ProfilerGuid()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x544);
		}
		static ::System::Int32* StaticGet__CommonLoadingStartFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x554);
		}
		static ::System::Single* StaticGet__AdvLoadingStartTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x558);
		}
		static ::System::Int32* StaticGet_DefaultTag()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProfileUtility_TypeDefinitionIndex)->GetStaticField(0x55C);
		}
		// static const ::System::String* ProfilePrefixName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void BeginAdvLoadingSample(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINADVLOADINGSAMPLE_OFFSET))(a1);
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

		static ::System::Void LogAdvLoadingProfile(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOGADVLOADINGPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void LogCommonLoadingProfile(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOGCOMMONLOADINGPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void AppendGopListItem(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_APPENDGOPLISTITEM_OFFSET))(a1);
		}

		static ::System::Void AppendLoaderListItem(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_APPENDLOADERLISTITEM_OFFSET))(a1);
		}

		static ::System::Void BeginBgpLoadingSample(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINBGPLOADINGSAMPLE_OFFSET))(a1);
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

		static ::System::Void LogBgpLoadingProfile(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_LOGBGPLOADINGPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void SetCounterValue(::RPG::ProfileCounterType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::ProfileCounterType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_SETCOUNTERVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void AddCounter(::RPG::ProfileCounter* a1)
		{
			return ((::System::Void(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ADDCOUNTER_OFFSET))(a1);
		}

		static ::System::Void ResetAllCounters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_RESETALLCOUNTERS_OFFSET))();
		}

		static ::System::Void IncCounterValue(::RPG::ProfileCounterType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::ProfileCounterType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_INCCOUNTERVALUE_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCounterValue(::RPG::ProfileCounterType a1)
		{
			return ((::System::Int32(*)(::RPG::ProfileCounterType))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETCOUNTERVALUE_OFFSET))(a1);
		}

		static ::System::Void BeginLoadingSample(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::RPG::ProfileUtility_LoadReason a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::RPG::ProfileUtility_LoadReason))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINLOADINGSAMPLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EndLoadingSample(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDLOADINGSAMPLE_OFFSET))(a1, a2);
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

		static ::System::String* ExportAllLoadingData(::RPG::ProfileUtility_LoadReason a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::RPG::ProfileUtility_LoadReason, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_EXPORTALLLOADINGDATA_OFFSET))(a1, a2);
		}

		static ::System::Void BeginSample(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINSAMPLE_OFFSET))(a1);
		}

		static ::System::Void EndSample()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDSAMPLE_OFFSET))();
		}

		static ::System::Void BeginDetailSample(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void BeginDetailSample_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_BEGINDETAILSAMPLE_1_OFFSET))(a1, a2);
		}

		static ::System::Void EndDetailSample()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_ENDDETAILSAMPLE_OFFSET))();
		}

		static ::System::Void EmitFrameMetaString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_EMITFRAMEMETASTRING_OFFSET))(a1);
		}

		static ::System::String* GetProfileName(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETPROFILENAME_OFFSET))(a1, a2);
		}

		static ::System::String* GetTypeFullName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_GETTYPEFULLNAME_OFFSET))(a1);
		}
	};
}
