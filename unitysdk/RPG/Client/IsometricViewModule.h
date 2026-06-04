#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65282CEDEA364C3F;
namespace RPG::Client::Prop { class IsometricViewPuzzleItem; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_ISOMETRICVIEWMODULE_ADDCONNECTORS_OFFSET UNITYSDK_OFFSET(0xBD594D0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ENABLETELEPORT_OFFSET UNITYSDK_OFFSET(0xBD59AF0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ENDMODULE_OFFSET UNITYSDK_OFFSET(0xBD56FE0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ENDZOOMFOLLOW_OFFSET UNITYSDK_OFFSET(0xBD5A430)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBD5B2F0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xBD5B2E0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xBD5B300)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0xBD56E60)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBD56F20)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEMOVEPLATFORM_OFFSET UNITYSDK_OFFSET(0xBD5ADB0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEROTATEPLATFORM_OFFSET UNITYSDK_OFFSET(0xBD5AE00)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTENDMODULE_OFFSET UNITYSDK_OFFSET(0xBD5A590)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTSTARTMODULE_OFFSET UNITYSDK_OFFSET(0xBD5AAC0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STARTMODULE_OFFSET UNITYSDK_OFFSET(0xBD59B40)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STARTSWIPECAMERA_OFFSET UNITYSDK_OFFSET(0xBD5AE50)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STARTZOOMFOLLOW_OFFSET UNITYSDK_OFFSET(0xBD5B240)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STOPSWIPECAMERA_OFFSET UNITYSDK_OFFSET(0xBD5AFE0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_SWITCHISOMETRICVIEW_OFFSET UNITYSDK_OFFSET(0xBD5B060)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_TICK_OFFSET UNITYSDK_OFFSET(0xBD57810)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__ADDSHADOW_OFFSET UNITYSDK_OFFSET(0xBD58EA0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD5B440)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5B310)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xBD5B290)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__REMOVESHADOW_OFFSET UNITYSDK_OFFSET(0xBD58E30)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATEFOLLOWANCHOR_OFFSET UNITYSDK_OFFSET(0xBD59040)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATESHADOWPOSITION_OFFSET UNITYSDK_OFFSET(0xBD58FD0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xBD5B490)
#define RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBD5B4F0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xBD5B550)

namespace RPG::Client
{
	inline static constexpr unsigned int IsometricViewModule_TypeDefinitionIndex = 56237;

	class IsometricViewModule : public ::Class_1_47C4886CB6C61234
	{
	public:
		static ::System::String** StaticGet_GAME_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IsometricViewModule_TypeDefinitionIndex)->GetStaticField(0x45820);
		}
		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IsometricViewModule_TypeDefinitionIndex)->GetStaticField(0xC800);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Prop::IsometricViewPuzzleItem*>* _Items; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ExtraData; // 0x28
		::RPG::GameCore::AnchorInfo* _OriginAnchor; // 0x30
		::RPG::GameCore::AnchorInfo* _FollowAnchor; // 0x38
		::RPG::GameCore::GameEntity* _OwnerProp; // 0x40
		::RPG::GameCore::GameEntity* _Player; // 0x48
		::Class_1_65282CEDEA364C3F* _SwipeCamera; // 0x50
		::System::Collections::Generic::Dictionary_2<::UnityEngine::BoxCollider*, ::RPG::Client::Prop::IsometricViewPuzzleItem*>* _Colliders; // 0x58
		::RPG::GameCore::AnchorInfo* _SwipeAnchor; // 0x60
		::System::Int32 _LastReportEnd; // 0x68
		::System::Single _ObserveTime; // 0x6C
		::System::Single _MaxBorderY; // 0x70
		::System::Single _ZoomOffsetUp; // 0x74
		::System::Int32 _StartTime; // 0x78
		::System::UInt32 _ObserveCounter; // 0x7C
		::System::Single _MaxCameraSize; // 0x80
		::System::Boolean _EnableTeleport; // 0x84
		::System::Boolean _ZoomFollow; // 0x85
		::System::Boolean _InTriggerRegion; // 0x86
		::System::Boolean _ShadowActive; // 0x87
		::System::Int32 _PositionID; // 0x88
		::System::Int32 _CasterID; // 0x8C
		::System::Single _MaxBorderX; // 0x90
		::System::Boolean RecordClusterLighting; // 0x94
		::System::Boolean _IsActive; // 0x95
		::System::UInt32 _MoveCount; // 0x98
		::System::Single _ZoomOffsetRight; // 0x9C
		::System::Single _ZoomOffsetDown; // 0xA0
		::System::Single _ZoomOffsetLeft; // 0xA4
		::System::UInt32 _RotateCount; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__CCTOR_OFFSET))();
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ONUNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_TICK_OFFSET))(this, a1);
		}

		::System::Void AddConnectors(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ADDCONNECTORS_OFFSET))(this, a1);
		}

		::System::Void EnableTeleport(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ENABLETELEPORT_OFFSET))(this, a1);
		}

		::System::Void StartModule(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::AnchorInfo* a6, ::System::Single a7, ::RPG::GameCore::AnchorInfo* a8, ::RPG::GameCore::AnchorInfo* a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::AnchorInfo*, ::System::Single, ::RPG::GameCore::AnchorInfo*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STARTMODULE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void EndModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ENDMODULE_OFFSET))(this);
		}

		::System::Void ReportStartModule(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTSTARTMODULE_OFFSET))(this, a1);
		}

		::System::Void ReportEndModule(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTENDMODULE_OFFSET))(this, a1);
		}

		::System::Void OperateMovePlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEMOVEPLATFORM_OFFSET))(this);
		}

		::System::Void OperateRotatePlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEROTATEPLATFORM_OFFSET))(this);
		}

		::System::Void StartSwipeCamera(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STARTSWIPECAMERA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void StopSwipeCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STOPSWIPECAMERA_OFFSET))(this);
		}

		::System::Void SwitchIsometricView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_SWITCHISOMETRICVIEW_OFFSET))(this);
		}

		::System::Void StartZoomFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STARTZOOMFOLLOW_OFFSET))(this);
		}

		::System::Void EndZoomFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ENDZOOMFOLLOW_OFFSET))(this);
		}

		::System::Void _UpdateFollowAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATEFOLLOWANCHOR_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _AddShadow(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__ADDSHADOW_OFFSET))(this, a1);
		}

		::System::Void _UpdateShadowPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATESHADOWPOSITION_OFFSET))(this, a1);
		}

		::System::Void _RemoveShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__REMOVESHADOW_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Int32 get_StartTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
