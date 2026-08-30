#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Guid.h"

class Class_0_16E4307DCC419505_460;
class Class_1_36264895A759B0FF;
class Class_1_80793F5E162C6353;
class Class_1_947F5BB3E2AFC4CE;
class Class_1_A59C2B52BC165D08;
class Class_1_DC7CAF0A5A38BD05;
class Class_2_0C169F681BDD42E0;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace RPG::GameCore { class CutSceneSFXConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PlayTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace RPGTools::Timeline { class BindingData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_2_D533150DA9942A27_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C32910)
#define CLASS_2_D533150DA9942A27_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16C2B3F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_07F3C9BBB17201F9_OFFSET UNITYSDK_OFFSET(0x16C2E670)
#define CLASS_2_D533150DA9942A27_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x16C2B170)
#define CLASS_2_D533150DA9942A27_METHOD_2_19C2B71F48BE27EE_OFFSET UNITYSDK_OFFSET(0x16C2D7A0)
#define CLASS_2_D533150DA9942A27_METHOD_2_20F902C5D75CEC0B_OFFSET UNITYSDK_OFFSET(0x16C2ED00)
#define CLASS_2_D533150DA9942A27_METHOD_2_231B70A5C4752963_OFFSET UNITYSDK_OFFSET(0x16C348B0)
#define CLASS_2_D533150DA9942A27_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x16C338C0)
#define CLASS_2_D533150DA9942A27_METHOD_2_2A8D0F3828218E1E_OFFSET UNITYSDK_OFFSET(0x16C35100)
#define CLASS_2_D533150DA9942A27_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0x16C34D50)
#define CLASS_2_D533150DA9942A27_METHOD_2_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x16C31340)
#define CLASS_2_D533150DA9942A27_METHOD_2_2DF0EFFDA2B6622E_OFFSET UNITYSDK_OFFSET(0x16C31200)
#define CLASS_2_D533150DA9942A27_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16C331E0)
#define CLASS_2_D533150DA9942A27_METHOD_2_3AD0AC9143B20894_OFFSET UNITYSDK_OFFSET(0x16C2CCD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16C32A70)
#define CLASS_2_D533150DA9942A27_METHOD_2_43405C47DB483091_OFFSET UNITYSDK_OFFSET(0x16C2C7F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x16C2DF00)
#define CLASS_2_D533150DA9942A27_METHOD_2_50BF1B0904E78DBA_OFFSET UNITYSDK_OFFSET(0x16C2E610)
#define CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16C31490)
#define CLASS_2_D533150DA9942A27_METHOD_2_54A7C35D9B7194C9_OFFSET UNITYSDK_OFFSET(0x16C2EDC0)
#define CLASS_2_D533150DA9942A27_METHOD_2_5D3D37F2BAE9FB65_1_OFFSET UNITYSDK_OFFSET(0x16C344D0)
#define CLASS_2_D533150DA9942A27_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x16C33E20)
#define CLASS_2_D533150DA9942A27_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x16C30E30)
#define CLASS_2_D533150DA9942A27_METHOD_2_668E04B95F67B3D3_OFFSET UNITYSDK_OFFSET(0x16C33710)
#define CLASS_2_D533150DA9942A27_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x16C350B0)
#define CLASS_2_D533150DA9942A27_METHOD_2_7EC5F7A94360BC42_OFFSET UNITYSDK_OFFSET(0x16C2F7E0)
#define CLASS_2_D533150DA9942A27_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x16C32F40)
#define CLASS_2_D533150DA9942A27_METHOD_2_939B0A8FB671683E_1_OFFSET UNITYSDK_OFFSET(0x16C34720)
#define CLASS_2_D533150DA9942A27_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0x16C33C90)
#define CLASS_2_D533150DA9942A27_METHOD_2_9406B9913FE114B6_OFFSET UNITYSDK_OFFSET(0x16C30150)
#define CLASS_2_D533150DA9942A27_METHOD_2_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x16C32C80)
#define CLASS_2_D533150DA9942A27_METHOD_2_985CE5A2B22AF551_OFFSET UNITYSDK_OFFSET(0x16C2E330)
#define CLASS_2_D533150DA9942A27_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x16C34B00)
#define CLASS_2_D533150DA9942A27_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x16C2DFA0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x16C31580)
#define CLASS_2_D533150DA9942A27_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16C33E90)
#define CLASS_2_D533150DA9942A27_METHOD_2_B95A2EA2A8345A6E_OFFSET UNITYSDK_OFFSET(0x16C2C770)
#define CLASS_2_D533150DA9942A27_METHOD_2_BB5C538354FD3393_OFFSET UNITYSDK_OFFSET(0x16C2F690)
#define CLASS_2_D533150DA9942A27_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x16C2DCD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x16C34210)
#define CLASS_2_D533150DA9942A27_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16C35180)
#define CLASS_2_D533150DA9942A27_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C2C730)
#define CLASS_2_D533150DA9942A27_METHOD_2_CF3EF672D8510D44_OFFSET UNITYSDK_OFFSET(0x16C34540)
#define CLASS_2_D533150DA9942A27_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x16C339B0)
#define CLASS_2_D533150DA9942A27_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x16C31890)
#define CLASS_2_D533150DA9942A27_METHOD_2_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0x16C33C10)
#define CLASS_2_D533150DA9942A27_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x16C330A0)
#define CLASS_2_D533150DA9942A27_METHOD_2_F330275D83DD93B1_OFFSET UNITYSDK_OFFSET(0x16C32BB0)
#define CLASS_2_D533150DA9942A27_METHOD_2_F7EDA528D89DF793_OFFSET UNITYSDK_OFFSET(0x16C34FC0)
#define CLASS_2_D533150DA9942A27_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16C317E0)
#define CLASS_2_D533150DA9942A27_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16C31430)
#define CLASS_2_D533150DA9942A27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C2B470)
#define CLASS_2_D533150DA9942A27_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C30CA0)
#define CLASS_2_D533150DA9942A27_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x16C2B400)
#define CLASS_2_D533150DA9942A27_TICK_OFFSET UNITYSDK_OFFSET(0x16C30D00)
#define CLASS_2_D533150DA9942A27__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C35190)
#define CLASS_2_D533150DA9942A27__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2B110)
#define CLASS_2_D533150DA9942A27___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET UNITYSDK_OFFSET(0x16C351B0)

inline static constexpr unsigned int Class_2_D533150DA9942A27_TypeDefinitionIndex = 56556;

class Class_2_D533150DA9942A27 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JIAGPNMOEOI()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27_TypeDefinitionIndex)->GetStaticField(0x67790);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CCADAHPDEAM()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27_TypeDefinitionIndex)->GetStaticField(0x67798);
	}
	// static const ::System::Single OIGCDPAKDON; // 0x0
	// static const ::System::Int32 PDMBOBLFJPC = 0xC8; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KMOIJHMMBMP; // 0x20
	::RPG::GameCore::GameWorld* GNPJIAHJGIG; // 0x28
	::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x30
	::RPG::GameCore::PlayTimeline* OFKGLJOAMLD; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* OKPEAPOAJGJ; // 0x40
	::RPG::GameCore::VideoCaptionConfig* OLHBEFCLGLA; // 0x48
	::Class_2_0C169F681BDD42E0* AFADKMBJPIJ; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* NDDKNNEOHNO; // 0x58
	::Class_1_5F51D4049EA87B7B* CJHJNLGOJLA; // 0x60
	::RPG::GameCore::CutSceneConfigRow* NBMDGPCGIOJ; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* KHONMKGFOOB; // 0x70
	::Class_1_36264895A759B0FF* PDOJELJJHCO; // 0x78
	::RPG::GameCore::CutSceneSFXConfig* GIAOLLLLBHP; // 0x80
	::System::UInt32 EPDNBCDDIIG; // 0x88
	::System::Boolean BLADJCPPMDL; // 0x8C
	::System::Boolean OOEEIFJPGLB; // 0x8D
	::System::Boolean KINCHLFNOIH; // 0x8E
	::System::Boolean HLFEBPNBOJJ; // 0x8F
	::System::Single CIJLBPIBKAO; // 0x90
	::System::Single KDBGMBINNAP; // 0x94
	::System::Guid GFAKDLGDHHF; // 0x98
	::System::UInt32 AGKGHDACNAF; // 0xA8
	::System::Single AHHCMLEEFLC; // 0xAC
	::System::Double KPKIDIHJIIK; // 0xB0
	::System::Int32 PEIFBPAMNCH; // 0xB8
	::System::Int32 FMJHGJLOGPG; // 0xBC

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27__CCTOR_OFFSET))();
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_GET_FORCESKIP_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_50BF1B0904E78DBA(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_50BF1B0904E78DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_07F3C9BBB17201F9(::UnityEngine::Playables::PlayableAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_07F3C9BBB17201F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_20F902C5D75CEC0B(::UnityEngine::Timeline::TimelineAsset* a1, ::RPGTools::Timeline::BindingData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::RPGTools::Timeline::BindingData*&))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_20F902C5D75CEC0B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_43405C47DB483091(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_43405C47DB483091_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_54A7C35D9B7194C9(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_54A7C35D9B7194C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_7EC5F7A94360BC42(::UnityEngine::Timeline::TimelineAsset* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_7EC5F7A94360BC42_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DF0EFFDA2B6622E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2DF0EFFDA2B6622E_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Int32 Method_2_F330275D83DD93B1(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F330275D83DD93B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AD0AC9143B20894(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_3AD0AC9143B20894_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_19C2B71F48BE27EE(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_19C2B71F48BE27EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_E092EFE670864887_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_2_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_5D3D37F2BAE9FB65_1_OFFSET))(this);
	}

	::System::Void Method_2_CF3EF672D8510D44(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_CF3EF672D8510D44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9406B9913FE114B6(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_9406B9913FE114B6_OFFSET))(this, a1);
	}

	::Class_1_DC7CAF0A5A38BD05* Method_2_939B0A8FB671683E()
	{
		return ((::Class_1_DC7CAF0A5A38BD05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_939B0A8FB671683E_OFFSET))(this);
	}

	::Class_1_A59C2B52BC165D08* Method_2_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_A59C2B52BC165D08*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B95A2EA2A8345A6E(::RPG::GameCore::TimelineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B95A2EA2A8345A6E_OFFSET))(this, a1);
	}

	::Class_1_80793F5E162C6353* Method_2_939B0A8FB671683E_1()
	{
		return ((::Class_1_80793F5E162C6353*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_939B0A8FB671683E_1_OFFSET))(this);
	}

	::System::Void Method_2_985CE5A2B22AF551(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_985CE5A2B22AF551_OFFSET))(this, a1);
	}

	::System::Void Method_2_668E04B95F67B3D3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_668E04B95F67B3D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_BB5C538354FD3393(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_BB5C538354FD3393_OFFSET))(this, a1);
	}

	::System::Void Method_2_231B70A5C4752963(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_231B70A5C4752963_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_2_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7EDA528D89DF793(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F7EDA528D89DF793_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_2A8D0F3828218E1E(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2A8D0F3828218E1E_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __CutsceneAudioBegin_b__30_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET))(this, a1);
	}
};
