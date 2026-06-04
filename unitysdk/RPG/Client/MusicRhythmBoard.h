#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicRhythmBoard_Struct_2_E829EAB92082DE6E.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_422F2D395BEF4FA5;
class Class_1_5713C98DC6CE30C7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmGameConfig; }
namespace RPG::GameCore { class MusicRhythmGroupRow; }
namespace RPG::GameCore { class MusicRhythmLevelRow; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICRHYTHMBOARD_ADDTUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0xC223DC0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC221A10)
#define RPG_CLIENT_MUSICRHYTHMBOARD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC2231E0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GETENTITY_OFFSET UNITYSDK_OFFSET(0xC2239A0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GETPOINT_OFFSET UNITYSDK_OFFSET(0xC2232A0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0xC223E70)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xC223E10)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xC223E30)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELROW_OFFSET UNITYSDK_OFFSET(0xC223E50)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_SKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC223EB0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_TUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0xC223E90)
#define RPG_CLIENT_MUSICRHYTHMBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC220150)
#define RPG_CLIENT_MUSICRHYTHMBOARD_ISTIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0xC2222B0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xC222910)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xC2208A0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_5AAD8A621CCD075B_OFFSET UNITYSDK_OFFSET(0xC222DD0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_802D2A6E195347E8_OFFSET UNITYSDK_OFFSET(0xC2217F0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_1_OFFSET UNITYSDK_OFFSET(0xC222720)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_2_OFFSET UNITYSDK_OFFSET(0xC222A30)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_3_OFFSET UNITYSDK_OFFSET(0xC222B30)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_4_OFFSET UNITYSDK_OFFSET(0xC222D20)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_5_OFFSET UNITYSDK_OFFSET(0xC222F20)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_6_OFFSET UNITYSDK_OFFSET(0xC223000)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xC2224A0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC2207B0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_D2666B2B900DD38A_OFFSET UNITYSDK_OFFSET(0xC2233D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0xC222BE0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_EEB340E9273B82CD_OFFSET UNITYSDK_OFFSET(0xC2230C0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_F4702DCB1E895B7F_OFFSET UNITYSDK_OFFSET(0xC2227D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0xC2225C0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0xC221550)
#define RPG_CLIENT_MUSICRHYTHMBOARD_RESETANIMATORS_OFFSET UNITYSDK_OFFSET(0xC223A80)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SETADJUSTMODE_OFFSET UNITYSDK_OFFSET(0xC221890)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_GROUPROW_OFFSET UNITYSDK_OFFSET(0xC223E80)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xC223E20)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xC223E40)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELROW_OFFSET UNITYSDK_OFFSET(0xC223E60)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_SKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC223EC0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_TUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0xC223EA0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SHOWPLAYERHINT_OFFSET UNITYSDK_OFFSET(0xC222310)
#define RPG_CLIENT_MUSICRHYTHMBOARD_STARTMUSICRHYTHM_OFFSET UNITYSDK_OFFSET(0xC2214A0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC223180)
#define RPG_CLIENT_MUSICRHYTHMBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC223ED0)
#define RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC224000)
#define RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC223FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmBoard_TypeDefinitionIndex = 56238;

	class MusicRhythmBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::RPG::GameCore::MusicRhythmLevelRow** StaticGet__LevelRow_k__BackingField()
		{
			return (::RPG::GameCore::MusicRhythmLevelRow**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmBoard_TypeDefinitionIndex)->GetStaticField(0x35590);
		}
		static ::RPG::GameCore::MusicRhythmGameConfig** StaticGet_MusicRhythmConfig()
		{
			return (::RPG::GameCore::MusicRhythmGameConfig**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmBoard_TypeDefinitionIndex)->GetStaticField(0x35598);
		}
		static ::RPG::GameCore::MusicRhythmGroupRow** StaticGet__GroupRow_k__BackingField()
		{
			return (::RPG::GameCore::MusicRhythmGroupRow**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmBoard_TypeDefinitionIndex)->GetStaticField(0x355A0);
		}
		::System::Boolean _IsDisposed_k__BackingField; // 0x48
		::Class_1_422F2D395BEF4FA5* Field_6_4; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MusicRhythmBoard_Struct_2_E829EAB92082DE6E>* Field_6_5; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_6_6; // 0x60
		::RPG::GameCore::GameEntity* Field_6_7; // 0x68
		::System::Single Field_6_8; // 0x70
		::Class_1_5713C98DC6CE30C7* GunManager; // 0x78
		::System::UInt32 _LevelId_k__BackingField; // 0x80
		::System::Int32 _TutorialFailTimes_k__BackingField; // 0x84
		::System::Boolean _SkipTutorial_k__BackingField; // 0x88
		::System::Int32 TutorialTotalTime; // 0x8C
		::System::String* Field_6_14; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartMusicRhythm(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_STARTMUSICRHYTHM_OFFSET))(this, a1);
		}

		::System::Void PlayTimeline(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_PLAYTIMELINE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetAdjustMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SETADJUSTMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsTimelineFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ISTIMELINEFINISH_OFFSET))(this);
		}

		::System::Void ShowPlayerHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SHOWPLAYERHINT_OFFSET))(this);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_OFFSET))(this, a1);
		}

		::System::Void Method_6_F69068FADEFBD596(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_F69068FADEFBD596_OFFSET))(this, a1);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_F4702DCB1E895B7F(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_F4702DCB1E895B7F_OFFSET))(this, a1);
		}

		::System::Void Method_6_022B0D58A3077BF2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_022B0D58A3077BF2_OFFSET))(this, a1);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_2_OFFSET))(this, a1);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_3_OFFSET))(this, a1);
		}

		::System::Void Method_6_DFD7F5C5419FD422(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_DFD7F5C5419FD422_OFFSET))(this, a1);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7_4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_4_OFFSET))(this, a1);
		}

		::System::Void Method_6_5AAD8A621CCD075B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_5AAD8A621CCD075B_OFFSET))(this, a1);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7_5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_5_OFFSET))(this, a1);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7_6(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_8C3DB70FFBBF01C7_6_OFFSET))(this, a1);
		}

		::System::Void Method_6_EEB340E9273B82CD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_EEB340E9273B82CD_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmTimelineConfig* Method_6_802D2A6E195347E8(::System::String* a1)
		{
			return ((::RPG::GameCore::MusicRhythmTimelineConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_802D2A6E195347E8_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPoint(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GETPOINT_OFFSET))(this, a1);
		}

		::System::Void Method_6_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_2566AD459572DFC3_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_D2666B2B900DD38A(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::String* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_D2666B2B900DD38A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::GameEntity* GetEntity(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GETENTITY_OFFSET))(this, a1);
		}

		::System::Void ResetAnimators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_RESETANIMATORS_OFFSET))(this);
		}

		::System::Void AddTutorialFailTimes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ADDTUTORIALFAILTIMES_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_ISDISPOSED_OFFSET))(this, a1);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::UInt32 get_LevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELID_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::MusicRhythmLevelRow* get_LevelRow()
		{
			return ((::RPG::GameCore::MusicRhythmLevelRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELROW_OFFSET))();
		}

		static ::System::Void set_LevelRow(::RPG::GameCore::MusicRhythmLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::MusicRhythmGroupRow* get_GroupRow()
		{
			return ((::RPG::GameCore::MusicRhythmGroupRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_GROUPROW_OFFSET))();
		}

		static ::System::Void set_GroupRow(::RPG::GameCore::MusicRhythmGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_GROUPROW_OFFSET))(a1);
		}

		::System::Int32 get_TutorialFailTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_TUTORIALFAILTIMES_OFFSET))(this);
		}

		::System::Void set_TutorialFailTimes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_TUTORIALFAILTIMES_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_SKIPTUTORIAL_OFFSET))(this);
		}

		::System::Void set_SkipTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_SKIPTUTORIAL_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
