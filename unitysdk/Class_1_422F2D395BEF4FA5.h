#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5_BeatType.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5_MusicPhase.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Object.h"

class Class_1_04316EB8ECDF7B06;
class Class_1_3F51724BA2A18D7F;
class Class_1_5D89E5E082F40A4C;
class Class_1_619F886B74415EBA;
class Class_1_8DD407826F55E7BF;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_422F2D395BEF4FA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA905E80)
#define CLASS_1_422F2D395BEF4FA5_GET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0xA909E60)
#define CLASS_1_422F2D395BEF4FA5_GET_BEATTIME_OFFSET UNITYSDK_OFFSET(0xA909DE0)
#define CLASS_1_422F2D395BEF4FA5_GET_BOARD_OFFSET UNITYSDK_OFFSET(0xA909E40)
#define CLASS_1_422F2D395BEF4FA5_GET_ISADJUST_OFFSET UNITYSDK_OFFSET(0xA909E80)
#define CLASS_1_422F2D395BEF4FA5_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xA909E20)
#define CLASS_1_422F2D395BEF4FA5_GET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0xA909EA0)
#define CLASS_1_422F2D395BEF4FA5_GET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0xA909E00)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0xA906210)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA906A90)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_28F4C2ABDCC41027_OFFSET UNITYSDK_OFFSET(0xA9067F0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_2E05D4898E2BA5A5_OFFSET UNITYSDK_OFFSET(0xA909530)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA909910)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA909EC0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_40556D2510043259_OFFSET UNITYSDK_OFFSET(0xA908480)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_45F740D50EBD16AA_OFFSET UNITYSDK_OFFSET(0xA906440)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA909D10)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA907DB0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xA907F40)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0xA909A10)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xA906B00)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_817318C744BE409A_OFFSET UNITYSDK_OFFSET(0xA906380)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_84868B009B97FC99_OFFSET UNITYSDK_OFFSET(0xA907370)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_897E40D1C7EB9645_OFFSET UNITYSDK_OFFSET(0xA9087E0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_9753F4D159A24514_OFFSET UNITYSDK_OFFSET(0xA908B30)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xA906E80)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D5BA0D4001A1E089_OFFSET UNITYSDK_OFFSET(0xA9085A0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xA9083E0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA907BD0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_E3DA1650B07BB219_OFFSET UNITYSDK_OFFSET(0xA907FE0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xA906EF0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_EE47CAE8B6BF5A56_OFFSET UNITYSDK_OFFSET(0xA909680)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_F22E917EA16961A8_OFFSET UNITYSDK_OFFSET(0xA9065D0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_F9F961550F954A6F_OFFSET UNITYSDK_OFFSET(0xA908D10)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xA909DC0)
#define CLASS_1_422F2D395BEF4FA5_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA9072E0)
#define CLASS_1_422F2D395BEF4FA5_SET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0xA909E70)
#define CLASS_1_422F2D395BEF4FA5_SET_BEATTIME_OFFSET UNITYSDK_OFFSET(0xA909DF0)
#define CLASS_1_422F2D395BEF4FA5_SET_BOARD_OFFSET UNITYSDK_OFFSET(0xA909E50)
#define CLASS_1_422F2D395BEF4FA5_SET_ISADJUST_OFFSET UNITYSDK_OFFSET(0xA909E90)
#define CLASS_1_422F2D395BEF4FA5_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xA909E30)
#define CLASS_1_422F2D395BEF4FA5_SET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0xA909EB0)
#define CLASS_1_422F2D395BEF4FA5_SET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0xA909E10)
#define CLASS_1_422F2D395BEF4FA5__CCTOR_OFFSET UNITYSDK_OFFSET(0xA909F20)
#define CLASS_1_422F2D395BEF4FA5__CTOR_OFFSET UNITYSDK_OFFSET(0xA905D00)

inline static constexpr unsigned int Class_1_422F2D395BEF4FA5_TypeDefinitionIndex = 56240;

class Class_1_422F2D395BEF4FA5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x35630);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x35638);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0x35640);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0xA8C0);
	}
	static ::System::Single* StaticGet_Field_1_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0xA8C4);
	}
	static ::System::Single* StaticGet_Field_1_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_422F2D395BEF4FA5_TypeDefinitionIndex)->GetStaticField(0xA8C8);
	}
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8DD407826F55E7BF*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_1_3F51724BA2A18D7F*>* Field_1_8; // 0x20
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* Field_1_10; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* Field_1_12; // 0x40
	::RPG::GameCore::MusicRhythmTimelineConfig* _TimelineConfig_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Class_1_5D89E5E082F40A4C*>* Field_1_14; // 0x50
	::Class_1_04316EB8ECDF7B06* _PressNote_k__BackingField; // 0x58
	::RPG::Client::MusicRhythmBoard* _Board_k__BackingField; // 0x60
	::System::Single Field_1_17; // 0x68
	::System::Single Field_1_18; // 0x6C
	::Class_1_422F2D395BEF4FA5_BeatType Field_1_19; // 0x70
	::System::UInt32 Field_1_20; // 0x74
	::System::Single Field_1_21; // 0x78
	::System::Single Field_1_22; // 0x7C
	::System::Boolean Field_1_23; // 0x80
	::System::Boolean Field_1_24; // 0x81
	::System::Single Field_1_25; // 0x84
	::System::Boolean Field_1_26; // 0x88
	::System::Boolean Field_1_27; // 0x89
	::System::Boolean _IsAdjust_k__BackingField; // 0x8A
	::System::Boolean Field_1_29; // 0x8B
	::System::UInt32 Field_1_30; // 0x8C
	::System::UInt32 Field_1_31; // 0x90
	::System::UInt32 Field_1_32; // 0x94
	::System::Single Field_1_33; // 0x98
	::System::Single _AdjustTime_k__BackingField; // 0x9C
	::System::Int32 Field_1_35; // 0xA0
	::System::UInt32 Field_1_36; // 0xA4
	::System::Boolean Field_1_37; // 0xA8
	::System::Boolean Field_1_38; // 0xA9
	::System::Boolean Field_1_39; // 0xAA
	::System::UInt32 Field_1_40; // 0xAC
	::System::UInt32 Field_1_41; // 0xB0
	::System::Int32 Field_1_42; // 0xB4
	::System::UInt32 Field_1_43; // 0xB8
	::System::Int32 Field_1_44; // 0xBC
	::System::Single _BeatTime_k__BackingField; // 0xC0
	::System::Double Field_1_46; // 0xC8
	::System::Single Field_1_47; // 0xD0
	::Class_1_422F2D395BEF4FA5_MusicPhase _Phase_k__BackingField; // 0xD4

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

	::System::Void Method_1_817318C744BE409A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_817318C744BE409A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
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

	::System::Void Method_1_84868B009B97FC99(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_84868B009B97FC99_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_1_F22E917EA16961A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_F22E917EA16961A8_OFFSET))(this, a1);
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

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
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

	::Class_1_04316EB8ECDF7B06* get_PressNote()
	{
		return ((::Class_1_04316EB8ECDF7B06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_GET_PRESSNOTE_OFFSET))(this);
	}

	::System::Void set_PressNote(::Class_1_04316EB8ECDF7B06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04316EB8ECDF7B06*))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_SET_PRESSNOTE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422F2D395BEF4FA5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
