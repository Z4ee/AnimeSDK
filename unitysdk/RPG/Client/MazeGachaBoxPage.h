#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSFOCUS_OFFSET UNITYSDK_OFFSET(0xBFC6310)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK1_OFFSET UNITYSDK_OFFSET(0xBFC6330)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK2_OFFSET UNITYSDK_OFFSET(0xBFC6350)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_ROLLSPEED_OFFSET UNITYSDK_OFFSET(0xBFC6370)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0xBFC62F0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBFC6770)
#define RPG_CLIENT_MAZEGACHABOXPAGE_ONSTOPROLLING_OFFSET UNITYSDK_OFFSET(0xBFC6720)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSFOCUS_OFFSET UNITYSDK_OFFSET(0xBFC6320)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK1_OFFSET UNITYSDK_OFFSET(0xBFC6340)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK2_OFFSET UNITYSDK_OFFSET(0xBFC6360)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_ROLLSPEED_OFFSET UNITYSDK_OFFSET(0xBFC6380)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0xBFC6300)
#define RPG_CLIENT_MAZEGACHABOXPAGE_STARTROLLING_OFFSET UNITYSDK_OFFSET(0xBFC6390)
#define RPG_CLIENT_MAZEGACHABOXPAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFC67C0)
#define RPG_CLIENT_MAZEGACHABOXPAGE__CALCCURRENTINDEX_OFFSET UNITYSDK_OFFSET(0xBFC6880)
#define RPG_CLIENT_MAZEGACHABOXPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC6F60)
#define RPG_CLIENT_MAZEGACHABOXPAGE__POS2INDEX_OFFSET UNITYSDK_OFFSET(0xBFC6C20)
#define RPG_CLIENT_MAZEGACHABOXPAGE__REMOVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xBFC64F0)
#define RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHTGACHAGROUP_OFFSET UNITYSDK_OFFSET(0xBFC6A20)
#define RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xBFC6D30)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeGachaBoxPage_TypeDefinitionIndex = 68113;

	class MazeGachaBoxPage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _TargetIndex; // 0x18
		::System::Int32 _WalkNum; // 0x1C
		::System::Boolean _IsRolling; // 0x20
		::System::Boolean _IsStopped; // 0x21
		::System::Single _RollingStartTime; // 0x24
		::System::Single _LastRecordSpeedTime; // 0x28
		::System::Int32 _CurHighlightIndex; // 0x2C
		::System::Action* _OnStopRolling; // 0x30
		::System::Action* _OnFinish; // 0x38
		::System::Single _WaitSeconds_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GachaGroupsFocus_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GachaGroupsMask1_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GachaGroupsMask2_k__BackingField; // 0x58
		::System::Single _RollSpeed_k__BackingField; // 0x60
		::System::Single Duration; // 0x64
		::UnityEngine::AnimationCurve* Curve; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__CTOR_OFFSET))(this);
		}

		::System::Single get_WaitSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_WAITSECONDS_OFFSET))(this);
		}

		::System::Void set_WaitSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_WAITSECONDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GachaGroupsFocus()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSFOCUS_OFFSET))(this);
		}

		::System::Void set_GachaGroupsFocus(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSFOCUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GachaGroupsMask1()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK1_OFFSET))(this);
		}

		::System::Void set_GachaGroupsMask1(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GachaGroupsMask2()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK2_OFFSET))(this);
		}

		::System::Void set_GachaGroupsMask2(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK2_OFFSET))(this, a1);
		}

		::System::Single get_RollSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_ROLLSPEED_OFFSET))(this);
		}

		::System::Void set_RollSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_ROLLSPEED_OFFSET))(this, a1);
		}

		::System::Void StartRolling(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_STARTROLLING_OFFSET))(this, a1, a2);
		}

		::System::Void OnStopRolling(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_ONSTOPROLLING_OFFSET))(this, a1);
		}

		::System::Void OnFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_ONFINISH_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_UPDATE_OFFSET))(this);
		}

		::System::Int32 _CalcCurrentIndex(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__CALCCURRENTINDEX_OFFSET))(this, a1);
		}

		static ::System::Int32 _Pos2Index(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__POS2INDEX_OFFSET))(a1, a2);
		}

		::System::Void _SetHighlightGachaGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHTGACHAGROUP_OFFSET))(this, a1);
		}

		static ::System::Void _SetHighlight(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _RemoveHighlight(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__REMOVEHIGHLIGHT_OFFSET))(a1, a2, a3);
		}
	};
}
