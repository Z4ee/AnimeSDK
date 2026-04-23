#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Guid.h"

class Class_0_16E4307DCC419505_382;
class Class_1_068B5138C0F1D881;
class Class_1_36264895A759B0FF;
class Class_1_80793F5E162C6353;
class Class_1_947F5BB3E2AFC4CE;
class Class_1_DC7CAF0A5A38BD05;
class Class_2_EDBFEE9656CDD763;
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

#define CLASS_2_D533150DA9942A27_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1184EBE0)
#define CLASS_2_D533150DA9942A27_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x11848E30)
#define CLASS_2_D533150DA9942A27_METHOD_2_00E8D4584E39B171_OFFSET UNITYSDK_OFFSET(0x1184CBA0)
#define CLASS_2_D533150DA9942A27_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x11850E20)
#define CLASS_2_D533150DA9942A27_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1184B230)
#define CLASS_2_D533150DA9942A27_METHOD_2_07F3C9BBB17201F9_OFFSET UNITYSDK_OFFSET(0x1184B7D0)
#define CLASS_2_D533150DA9942A27_METHOD_2_0F3EBBFE62BDFF9D_OFFSET UNITYSDK_OFFSET(0x1184ABD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x118502E0)
#define CLASS_2_D533150DA9942A27_METHOD_2_16A9A42E2CDA943E_OFFSET UNITYSDK_OFFSET(0x1184BD40)
#define CLASS_2_D533150DA9942A27_METHOD_2_272464DD455D9251_OFFSET UNITYSDK_OFFSET(0x118505D0)
#define CLASS_2_D533150DA9942A27_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1184FFD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x11850930)
#define CLASS_2_D533150DA9942A27_METHOD_2_3AD0AC9143B20894_OFFSET UNITYSDK_OFFSET(0x1184A4D0)
#define CLASS_2_D533150DA9942A27_METHOD_2_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x1184B190)
#define CLASS_2_D533150DA9942A27_METHOD_2_50BF1B0904E78DBA_OFFSET UNITYSDK_OFFSET(0x1184B770)
#define CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x1184DCC0)
#define CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1184FA40)
#define CLASS_2_D533150DA9942A27_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x11851080)
#define CLASS_2_D533150DA9942A27_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x1184D630)
#define CLASS_2_D533150DA9942A27_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x1184F8A0)
#define CLASS_2_D533150DA9942A27_METHOD_2_6FE6E0587E8D1F5C_1_OFFSET UNITYSDK_OFFSET(0x11850560)
#define CLASS_2_D533150DA9942A27_METHOD_2_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x1184FF60)
#define CLASS_2_D533150DA9942A27_METHOD_2_726354DCE97130D8_OFFSET UNITYSDK_OFFSET(0x1184DBE0)
#define CLASS_2_D533150DA9942A27_METHOD_2_7599C2232709D642_OFFSET UNITYSDK_OFFSET(0x1184BC80)
#define CLASS_2_D533150DA9942A27_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x11850B80)
#define CLASS_2_D533150DA9942A27_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1184F1E0)
#define CLASS_2_D533150DA9942A27_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1184F340)
#define CLASS_2_D533150DA9942A27_METHOD_2_9F035AB66324ED79_OFFSET UNITYSDK_OFFSET(0x1184C520)
#define CLASS_2_D533150DA9942A27_METHOD_2_A35036E315EC562E_OFFSET UNITYSDK_OFFSET(0x1184A170)
#define CLASS_2_D533150DA9942A27_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x11851160)
#define CLASS_2_D533150DA9942A27_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x1184E0C0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x1184DDB0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1184FB00)
#define CLASS_2_D533150DA9942A27_METHOD_2_B7E7D354F8A3A915_OFFSET UNITYSDK_OFFSET(0x1184DA20)
#define CLASS_2_D533150DA9942A27_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1184AF50)
#define CLASS_2_D533150DA9942A27_METHOD_2_B95A2EA2A8345A6E_OFFSET UNITYSDK_OFFSET(0x1184A0E0)
#define CLASS_2_D533150DA9942A27_METHOD_2_BB5C538354FD3393_OFFSET UNITYSDK_OFFSET(0x1184C3D0)
#define CLASS_2_D533150DA9942A27_METHOD_2_BD50D311A56B5E90_OFFSET UNITYSDK_OFFSET(0x1184B580)
#define CLASS_2_D533150DA9942A27_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11851230)
#define CLASS_2_D533150DA9942A27_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1184F400)
#define CLASS_2_D533150DA9942A27_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1184A0A0)
#define CLASS_2_D533150DA9942A27_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1184ED10)
#define CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_1_OFFSET UNITYSDK_OFFSET(0x118507B0)
#define CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_OFFSET UNITYSDK_OFFSET(0x1184FDE0)
#define CLASS_2_D533150DA9942A27_METHOD_2_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0x1184FD60)
#define CLASS_2_D533150DA9942A27_METHOD_2_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x1184EF30)
#define CLASS_2_D533150DA9942A27_METHOD_2_F330275D83DD93B1_OFFSET UNITYSDK_OFFSET(0x1184EE60)
#define CLASS_2_D533150DA9942A27_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x11848D50)
#define CLASS_2_D533150DA9942A27_METHOD_2_F5AA48DF093DA896_OFFSET UNITYSDK_OFFSET(0x118511B0)
#define CLASS_2_D533150DA9942A27_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1184E010)
#define CLASS_2_D533150DA9942A27_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1184DC60)
#define CLASS_2_D533150DA9942A27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11848EB0)
#define CLASS_2_D533150DA9942A27_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1184D4A0)
#define CLASS_2_D533150DA9942A27_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x11848E40)
#define CLASS_2_D533150DA9942A27_TICK_OFFSET UNITYSDK_OFFSET(0x1184D500)
#define CLASS_2_D533150DA9942A27__CCTOR_OFFSET UNITYSDK_OFFSET(0x11851240)
#define CLASS_2_D533150DA9942A27__CTOR_OFFSET UNITYSDK_OFFSET(0x11848CF0)
#define CLASS_2_D533150DA9942A27___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET UNITYSDK_OFFSET(0x11851260)

inline static constexpr unsigned int Class_2_D533150DA9942A27_TypeDefinitionIndex = 51958;

class Class_2_D533150DA9942A27 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_29()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27_TypeDefinitionIndex)->GetStaticField(0x157F0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_30()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27_TypeDefinitionIndex)->GetStaticField(0x157F8);
	}
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0xC8; // 0x0
	::RPG::GameCore::TaskContext* Field_2_5; // 0x18
	::RPG::GameCore::PlayTimeline* Field_2_4; // 0x20
	::RPG::GameCore::VideoCaptionConfig* Field_2_22; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_15; // 0x30
	::Class_1_36264895A759B0FF* Field_2_10; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_13; // 0x40
	::RPG::GameCore::CutSceneConfigRow* Field_2_16; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_14; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* Field_2_17; // 0x58
	::RPG::GameCore::CutSceneSFXConfig* Field_2_25; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x68
	::Class_2_EDBFEE9656CDD763* Field_2_7; // 0x70
	::UnityEngine::Playables::PlayableDirector* Field_2_9; // 0x78
	::RPG::GameCore::GameWorld* Field_2_6; // 0x80
	::System::Int32 Field_2_26; // 0x88
	::System::UInt32 Field_2_18; // 0x8C
	::System::Single Field_2_27; // 0x90
	::System::Single Field_2_12; // 0x94
	::System::Double Field_2_28; // 0x98
	::System::Single Field_2_23; // 0xA0
	::System::Guid Field_2_11; // 0xA4
	::System::UInt32 Field_2_19; // 0xB4
	::System::Int32 Field_2_8; // 0xB8
	::System::Boolean Field_2_24; // 0xBC
	::System::Boolean Field_2_20; // 0xBD
	::System::Boolean Field_2_21; // 0xBE
	::System::Boolean Field_2_3; // 0xBF

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

	::System::Boolean Method_2_7599C2232709D642(::UnityEngine::Timeline::TimelineAsset* a1, ::RPGTools::Timeline::BindingData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::RPGTools::Timeline::BindingData*&))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_7599C2232709D642_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_A35036E315EC562E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_A35036E315EC562E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_16A9A42E2CDA943E(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_16A9A42E2CDA943E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_9F035AB66324ED79(::UnityEngine::Timeline::TimelineAsset* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_9F035AB66324ED79_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7E7D354F8A3A915(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B7E7D354F8A3A915_OFFSET))(this, a1);
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

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Int32 Method_2_F330275D83DD93B1(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F330275D83DD93B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AD0AC9143B20894(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_3AD0AC9143B20894_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_0F3EBBFE62BDFF9D(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_0F3EBBFE62BDFF9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_E092EFE670864887_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void Method_2_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_2_6FE6E0587E8D1F5C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_6FE6E0587E8D1F5C_1_OFFSET))(this);
	}

	::System::Void Method_2_272464DD455D9251(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_272464DD455D9251_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00E8D4584E39B171(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_00E8D4584E39B171_OFFSET))(this, a1);
	}

	::Class_1_DC7CAF0A5A38BD05* Method_2_D576072A5004A133()
	{
		return ((::Class_1_DC7CAF0A5A38BD05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_OFFSET))(this);
	}

	::Class_1_068B5138C0F1D881* Method_2_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_068B5138C0F1D881*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B95A2EA2A8345A6E(::RPG::GameCore::TimelineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B95A2EA2A8345A6E_OFFSET))(this, a1);
	}

	::Class_1_80793F5E162C6353* Method_2_D576072A5004A133_1()
	{
		return ((::Class_1_80793F5E162C6353*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_1_OFFSET))(this);
	}

	::System::Void Method_2_BD50D311A56B5E90(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_BD50D311A56B5E90_OFFSET))(this, a1);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_BB5C538354FD3393(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_BB5C538354FD3393_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2DE13BE11F24F545_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_726354DCE97130D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_726354DCE97130D8_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_F5AA48DF093DA896(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F5AA48DF093DA896_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __CutsceneAudioBegin_b__30_1(::System::UInt32 eventID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET))(this, eventID);
	}
};
