#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Guid.h"

class Class_0_16E4307DCC419505_401;
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

#define CLASS_2_6B967A8FF85DEF97_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC0D3F0)
#define CLASS_2_6B967A8FF85DEF97_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAC06EF0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_00E8D4584E39B171_OFFSET UNITYSDK_OFFSET(0xAC0B220)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_01F8C9B8FEC4A2CF_OFFSET UNITYSDK_OFFSET(0xAC0E120)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_20F902C5D75CEC0B_OFFSET UNITYSDK_OFFSET(0xAC0A160)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_231B70A5C4752963_OFFSET UNITYSDK_OFFSET(0xAC0F2C0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0xAC0E2C0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_28C532CD321F20DC_OFFSET UNITYSDK_OFFSET(0xAC0C760)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_2A8D0F3828218E1E_OFFSET UNITYSDK_OFFSET(0xAC0FB60)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xAC0F7B0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xAC0DC50)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_3AD0AC9143B20894_OFFSET UNITYSDK_OFFSET(0xAC08820)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xAC0D550)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_43405C47DB483091_OFFSET UNITYSDK_OFFSET(0xAC08320)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0xAC095A0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_50BF1B0904E78DBA_OFFSET UNITYSDK_OFFSET(0xAC09C40)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xAC0C360)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_54A7C35D9B7194C9_OFFSET UNITYSDK_OFFSET(0xAC0A220)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_5D3D37F2BAE9FB65_1_OFFSET UNITYSDK_OFFSET(0xAC0EED0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xAC0E820)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xAC0BD00)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xAC0FB10)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_7EC5F7A94360BC42_OFFSET UNITYSDK_OFFSET(0xAC0AAB0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xAC0DA20)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_85770AA57A8A2376_OFFSET UNITYSDK_OFFSET(0xAC099D0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_939B0A8FB671683E_1_OFFSET UNITYSDK_OFFSET(0xAC0F130)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0xAC0E690)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0xAC0D760)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_A970D5A812316D0F_OFFSET UNITYSDK_OFFSET(0xAC08FC0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_B03BD337C608E98D_OFFSET UNITYSDK_OFFSET(0xAC0C280)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0xAC09640)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0xAC0C450)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xAC0E890)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_B95A2EA2A8345A6E_OFFSET UNITYSDK_OFFSET(0xAC08290)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_BB5C538354FD3393_OFFSET UNITYSDK_OFFSET(0xAC0A960)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xAC09370)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0xAC0EC10)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_C3361B9526BEAB18_OFFSET UNITYSDK_OFFSET(0xAC0C0D0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xAC0FBE0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xAC0F510)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC08250)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_CF3EF672D8510D44_OFFSET UNITYSDK_OFFSET(0xAC0EF40)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xAC0E3B0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0xAC0E610)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xAC0DB80)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_E7B666AE91ADD0C2_OFFSET UNITYSDK_OFFSET(0xAC09CA0)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_F330275D83DD93B1_OFFSET UNITYSDK_OFFSET(0xAC0D690)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xAC06E10)
#define CLASS_2_6B967A8FF85DEF97_METHOD_2_F7EDA528D89DF793_OFFSET UNITYSDK_OFFSET(0xAC0FA20)
#define CLASS_2_6B967A8FF85DEF97_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAC0C6B0)
#define CLASS_2_6B967A8FF85DEF97_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAC0C300)
#define CLASS_2_6B967A8FF85DEF97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC06F70)
#define CLASS_2_6B967A8FF85DEF97_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC0BB70)
#define CLASS_2_6B967A8FF85DEF97_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xAC06F00)
#define CLASS_2_6B967A8FF85DEF97_TICK_OFFSET UNITYSDK_OFFSET(0xAC0BBD0)
#define CLASS_2_6B967A8FF85DEF97__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC0FBF0)
#define CLASS_2_6B967A8FF85DEF97__CTOR_OFFSET UNITYSDK_OFFSET(0xAC06DB0)
#define CLASS_2_6B967A8FF85DEF97___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET UNITYSDK_OFFSET(0xAC0FC10)

inline static constexpr unsigned int Class_2_6B967A8FF85DEF97_TypeDefinitionIndex = 52632;

class Class_2_6B967A8FF85DEF97 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B967A8FF85DEF97_TypeDefinitionIndex)->GetStaticField(0x13190);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B967A8FF85DEF97_TypeDefinitionIndex)->GetStaticField(0x13198);
	}
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Int32 Field_2_3 = 0xC8; // 0x0
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_5; // 0x20
	::Class_1_36264895A759B0FF* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* Field_2_7; // 0x30
	::RPG::GameCore::CutSceneSFXConfig* Field_2_8; // 0x38
	::RPG::GameCore::CutSceneConfigRow* Field_2_9; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_10; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_11; // 0x50
	::RPG::GameCore::GameWorld* Field_2_12; // 0x58
	::RPG::GameCore::TaskContext* Field_2_13; // 0x60
	::RPG::GameCore::PlayTimeline* Field_2_14; // 0x68
	::UnityEngine::Playables::PlayableDirector* Field_2_15; // 0x70
	::RPG::GameCore::VideoCaptionConfig* Field_2_16; // 0x78
	::Class_2_0C169F681BDD42E0* Field_2_17; // 0x80
	::System::Int32 Field_2_18; // 0x88
	::System::UInt32 Field_2_19; // 0x8C
	::System::Single Field_2_20; // 0x90
	::System::Single Field_2_21; // 0x94
	::System::Single Field_2_22; // 0x98
	::System::Boolean Field_2_23; // 0x9C
	::System::Boolean Field_2_24; // 0x9D
	::System::Boolean Field_2_25; // 0x9E
	::System::Boolean Field_2_26; // 0x9F
	::System::Guid Field_2_27; // 0xA0
	::System::UInt32 Field_2_28; // 0xB0
	::System::Int32 Field_2_29; // 0xB4
	::System::Double Field_2_30; // 0xB8

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97__CCTOR_OFFSET))();
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_GET_FORCESKIP_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_50BF1B0904E78DBA(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_50BF1B0904E78DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E7B666AE91ADD0C2(::UnityEngine::Playables::PlayableAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_E7B666AE91ADD0C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_20F902C5D75CEC0B(::UnityEngine::Timeline::TimelineAsset* a1, ::RPGTools::Timeline::BindingData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::RPGTools::Timeline::BindingData*&))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_20F902C5D75CEC0B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_43405C47DB483091(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_43405C47DB483091_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_54A7C35D9B7194C9(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_54A7C35D9B7194C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_7EC5F7A94360BC42(::UnityEngine::Timeline::TimelineAsset* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_7EC5F7A94360BC42_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3361B9526BEAB18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_C3361B9526BEAB18_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_28C532CD321F20DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_28C532CD321F20DC_OFFSET))(this);
	}

	::System::Int32 Method_2_F330275D83DD93B1(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_F330275D83DD93B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AD0AC9143B20894(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_3AD0AC9143B20894_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_A970D5A812316D0F(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_A970D5A812316D0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_E092EFE670864887_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_2_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_5D3D37F2BAE9FB65_1_OFFSET))(this);
	}

	::System::Void Method_2_CF3EF672D8510D44(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_CF3EF672D8510D44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00E8D4584E39B171(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_00E8D4584E39B171_OFFSET))(this, a1);
	}

	::Class_1_DC7CAF0A5A38BD05* Method_2_939B0A8FB671683E()
	{
		return ((::Class_1_DC7CAF0A5A38BD05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_939B0A8FB671683E_OFFSET))(this);
	}

	::Class_1_A59C2B52BC165D08* Method_2_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_A59C2B52BC165D08*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B95A2EA2A8345A6E(::RPG::GameCore::TimelineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_B95A2EA2A8345A6E_OFFSET))(this, a1);
	}

	::Class_1_80793F5E162C6353* Method_2_939B0A8FB671683E_1()
	{
		return ((::Class_1_80793F5E162C6353*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_939B0A8FB671683E_1_OFFSET))(this);
	}

	::System::Void Method_2_85770AA57A8A2376(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_85770AA57A8A2376_OFFSET))(this, a1);
	}

	::System::Void Method_2_01F8C9B8FEC4A2CF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_01F8C9B8FEC4A2CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_BB5C538354FD3393(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_BB5C538354FD3393_OFFSET))(this, a1);
	}

	::System::Void Method_2_231B70A5C4752963(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_231B70A5C4752963_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_B03BD337C608E98D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_B03BD337C608E98D_OFFSET))(this);
	}

	::System::Void Method_2_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7EDA528D89DF793(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_F7EDA528D89DF793_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_2A8D0F3828218E1E(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_2A8D0F3828218E1E_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __CutsceneAudioBegin_b__30_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET))(this, a1);
	}
};
