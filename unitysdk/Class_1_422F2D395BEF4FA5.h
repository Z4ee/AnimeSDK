#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5_BeatType.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5_MusicPhase.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Object.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_5D89E5E082F40A4C;
class Class_1_619F886B74415EBA;
class Class_1_8DD407826F55E7BF;
class Class_1_C67F599303150E7F;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_422F2D395BEF4FA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1706C7A0)
#define CLASS_1_422F2D395BEF4FA5_GET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0x17070BA0)
#define CLASS_1_422F2D395BEF4FA5_GET_BEATTIME_OFFSET UNITYSDK_OFFSET(0x17070B20)
#define CLASS_1_422F2D395BEF4FA5_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x17070B80)
#define CLASS_1_422F2D395BEF4FA5_GET_ISADJUST_OFFSET UNITYSDK_OFFSET(0x17070BC0)
#define CLASS_1_422F2D395BEF4FA5_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x17070B60)
#define CLASS_1_422F2D395BEF4FA5_GET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0x17070BE0)
#define CLASS_1_422F2D395BEF4FA5_GET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x17070B40)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x1706CB30)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0x17070670)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x1706D480)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_28F4C2ABDCC41027_OFFSET UNITYSDK_OFFSET(0x1706D180)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_2E05D4898E2BA5A5_OFFSET UNITYSDK_OFFSET(0x17070110)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17070C00)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_40556D2510043259_OFFSET UNITYSDK_OFFSET(0x1706F060)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_45F740D50EBD16AA_OFFSET UNITYSDK_OFFSET(0x1706CD60)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1706E990)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1706EB20)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x17070A30)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_5CCDB056872E8BC6_OFFSET UNITYSDK_OFFSET(0x1706DE80)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x1706D9A0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x1706D550)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_704182D469158D60_OFFSET UNITYSDK_OFFSET(0x1706CCA0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_897E40D1C7EB9645_OFFSET UNITYSDK_OFFSET(0x1706F3C0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_9753F4D159A24514_OFFSET UNITYSDK_OFFSET(0x1706F710)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x1706D930)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D5BA0D4001A1E089_OFFSET UNITYSDK_OFFSET(0x1706F180)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1706EFC0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x1706E7B0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_E3DA1650B07BB219_OFFSET UNITYSDK_OFFSET(0x1706EBC0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x170704F0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_EBE01B84C1D38AD1_OFFSET UNITYSDK_OFFSET(0x1706CF00)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_EE47CAE8B6BF5A56_OFFSET UNITYSDK_OFFSET(0x17070260)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_F9F961550F954A6F_OFFSET UNITYSDK_OFFSET(0x1706F8F0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x17070B00)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1706DDF0)
#define CLASS_1_422F2D395BEF4FA5_SET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0x17070BB0)
#define CLASS_1_422F2D395BEF4FA5_SET_BEATTIME_OFFSET UNITYSDK_OFFSET(0x17070B30)
#define CLASS_1_422F2D395BEF4FA5_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x17070B90)
#define CLASS_1_422F2D395BEF4FA5_SET_ISADJUST_OFFSET UNITYSDK_OFFSET(0x17070BD0)
#define CLASS_1_422F2D395BEF4FA5_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x17070B70)
#define CLASS_1_422F2D395BEF4FA5_SET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0x17070BF0)
#define CLASS_1_422F2D395BEF4FA5_SET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x17070B50)
#define CLASS_1_422F2D395BEF4FA5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17070C60)
#define CLASS_1_422F2D395BEF4FA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1706C620)

inline static constexpr unsigned int Class_1_422F2D395BEF4FA5_TypeDefinitionIndex = 60296;

class Class_1_422F2D395BEF4FA5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_MHBEDKNOILN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x54A90);
	}
	static ::System::String** StaticGet_IOAHOFMICPK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x54A98);
	}
	static ::System::String** StaticGet_LKBDNNDLDIB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x54AA0);
	}
	static ::System::Single* StaticGet_MPEGANNLENK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x115C0);
	}
	static ::System::Single* StaticGet_OCNKMKNEBCA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x115C4);
	}
	static ::System::Single* StaticGet_GHOOMHFJIFC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x115C8);
	}
	::System::Collections::Generic::List_1<::Class_1_8DD407826F55E7BF*>* DIMLPFMLPNJ; // 0x10
	::Class_1_C67F599303150E7F* _PressNote_k__BackingField; // 0x18
	::RPG::GameCore::MusicRhythmTimelineConfig* _TimelineConfig_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* DBBJLAFJHGC; // 0x28
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* NOCMBINLGJL; // 0x30
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* BBMMPMMLPBI; // 0x38
	::System::Collections::Generic::List_1<::Class_1_3F51724BA2A18D7F*>* CBENMNAKIAM; // 0x40
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* HOLCODKCKPK; // 0x48
	::System::Collections::Generic::List_1<::Class_1_5D89E5E082F40A4C*>* OECMIMNNDHG; // 0x50
	::RPG::Client::MusicRhythmBoard* _Board_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* GFGBFKPKDDL; // 0x60
	::System::UInt32 KOKEMNFEKHD; // 0x68
	::System::Single JMMONFJHCDH; // 0x6C
	::System::Single _BeatTime_k__BackingField; // 0x70
	::System::Int32 DAGEINKHBEM; // 0x74
	::System::Single GOBCFCOEAIC; // 0x78
	::System::Boolean IIBPDJJDMDF; // 0x7C
	::System::Boolean ADHOANELEHF; // 0x7D
	::System::UInt32 NDKNONANFLJ; // 0x80
	::System::UInt32 CAPLNPGDLNF; // 0x84
	::System::Boolean LMNKNPLAEID; // 0x88
	::System::Boolean _IsAdjust_k__BackingField; // 0x89
	::System::Boolean MCAPIAKDMAA; // 0x8A
	::System::Boolean JMCGNGDELDM; // 0x8B
	::System::Int32 JHALKHDDAGL; // 0x8C
	::System::UInt32 PGBNBOLMHFD; // 0x90
	::System::Single PFBMMCKHPNP; // 0x94
	::System::Single BOBDOMHBPDI; // 0x98
	::System::UInt32 PEKOLFBAIFJ; // 0x9C
	::System::Boolean JOHGADIOILC; // 0xA0
	::System::Boolean ILPBAGFGKLH; // 0xA1
	::System::Boolean DJFIIKLAPNO; // 0xA2
	::System::UInt32 DGNLBDCAAKO; // 0xA4
	::System::UInt32 LHEDKCCJFPM; // 0xA8
	::System::Single OGOIBIPHOGP; // 0xAC
	::System::Int32 BMINICDGGKI; // 0xB0
	::Class_1_422F2D395BEF4FA5_BeatType MCIIOMLMAEO; // 0xB4
	::System::Single IENOOKKGFPM; // 0xB8
	::Class_1_422F2D395BEF4FA5_MusicPhase _Phase_k__BackingField; // 0xBC
	::System::UInt32 DOEJBENLOAN; // 0xC0
	::System::Single _AdjustTime_k__BackingField; // 0xC4
	::System::Single HJKJOLPBAOO; // 0xC8
	::System::Double LGPLNDPJEKE; // 0xD0

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_704182D469158D60(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_704182D469158D60_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_45F740D50EBD16AA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_45F740D50EBD16AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CCDB056872E8BC6(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_5CCDB056872E8BC6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_1_E3DA1650B07BB219(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_E3DA1650B07BB219_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_1_40556D2510043259(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_40556D2510043259_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5BA0D4001A1E089(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_D5BA0D4001A1E089_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_897E40D1C7EB9645(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_897E40D1C7EB9645_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_EBE01B84C1D38AD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_EBE01B84C1D38AD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9753F4D159A24514(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_9753F4D159A24514_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_28F4C2ABDCC41027(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_28F4C2ABDCC41027_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* Method_1_F9F961550F954A6F(::System::Single a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_F9F961550F954A6F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2E05D4898E2BA5A5(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_2E05D4898E2BA5A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE47CAE8B6BF5A56(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_EE47CAE8B6BF5A56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_0AD139A96804E15E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_0AD139A96804E15E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single get_BeatTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_BEATTIME_OFFSET))(this);
	}

	::System::Void set_BeatTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_BEATTIME_OFFSET))(this, a1);
	}

	::RPG::GameCore::MusicRhythmTimelineConfig* get_TimelineConfig()
	{
		return ((::RPG::GameCore::MusicRhythmTimelineConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_TIMELINECONFIG_OFFSET))(this);
	}

	::System::Void set_TimelineConfig(::RPG::GameCore::MusicRhythmTimelineConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_TIMELINECONFIG_OFFSET))(this, a1);
	}

	::Class_1_422F2D395BEF4FA5_MusicPhase get_Phase()
	{
		return ((::Class_1_422F2D395BEF4FA5_MusicPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::Class_1_422F2D395BEF4FA5_MusicPhase a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_422F2D395BEF4FA5_MusicPhase))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_PHASE_OFFSET))(this, a1);
	}

	::RPG::Client::MusicRhythmBoard* get_Board()
	{
		return ((::RPG::Client::MusicRhythmBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_BOARD_OFFSET))(this);
	}

	::System::Void set_Board(::RPG::Client::MusicRhythmBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_BOARD_OFFSET))(this, a1);
	}

	::System::Single get_AdjustTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_ADJUSTTIME_OFFSET))(this);
	}

	::System::Void set_AdjustTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_ADJUSTTIME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAdjust()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_ISADJUST_OFFSET))(this);
	}

	::System::Void set_IsAdjust(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_ISADJUST_OFFSET))(this, a1);
	}

	::Class_1_C67F599303150E7F* get_PressNote()
	{
		return ((::Class_1_C67F599303150E7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_PRESSNOTE_OFFSET))(this);
	}

	::System::Void set_PressNote(::Class_1_C67F599303150E7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C67F599303150E7F*))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_PRESSNOTE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
