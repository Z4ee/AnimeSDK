#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CakeRaceBattleItemUIHandler_DragBeginDelegate; }
namespace RPG::Client { class CakeRaceBattleItemUIHandler_DragCornerDelegate; }
namespace RPG::Client { class CakeRaceBattleItemUIHandler_DragDelegate; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xB490020)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xB490220)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGTOCORNER_OFFSET UNITYSDK_OFFSET(0xB490320)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB490120)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_CLAMPMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xB48FCB0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4830A0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETCENTERMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xB48FDF0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETLEFTSTICKINPUTVECTORSCALEDBYSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0xB48FEA0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ISMOUSEINRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB48F8C0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xB48F690)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGEND_OFFSET UNITYSDK_OFFSET(0xB48F820)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAG_OFFSET UNITYSDK_OFFSET(0xB48F720)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_MOUSEPOSITIONTOLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xB48FA70)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_NORMALIZEMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xB48FBF0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xB4900A0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xB4902A0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGTOCORNER_OFFSET UNITYSDK_OFFSET(0xB4903A0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB4901A0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB482F20)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_TypeDefinitionIndex = 58950;

	class CakeRaceBattleItemUIHandler : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* OnDragEnd; // 0x10
		::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* OnDrag; // 0x18
		::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate* OnDragToCorner; // 0x20
		::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate* OnDragBegin; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void LuaCall_DragBegin(::System::UInt32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGBEGIN_OFFSET))(this, a1, a2);
		}

		::System::Boolean LuaCall_Drag(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LuaCall_DragEnd(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGEND_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean IsMouseInRectTransform(::UnityEngine::Vector2 a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ISMOUSEINRECTTRANSFORM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 MousePositionToLocalPosition(::UnityEngine::Vector2 a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_MOUSEPOSITIONTOLOCALPOSITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 NormalizeMousePosition(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_NORMALIZEMOUSEPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 ClampMousePosition(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_CLAMPMOUSEPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GetCenterMousePosition()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETCENTERMOUSEPOSITION_OFFSET))();
		}

		static ::UnityEngine::Vector2 GetLeftStickInputVectorScaledByScreenWidth()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETLEFTSTICKINPUTVECTORSCALEDBYSCREENWIDTH_OFFSET))();
		}

		::System::Void add_OnDragBegin(::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGBEGIN_OFFSET))(this, a1);
		}

		::System::Void remove_OnDragBegin(::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGBEGIN_OFFSET))(this, a1);
		}

		::System::Void add_OnDrag(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void remove_OnDrag(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void add_OnDragEnd(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGEND_OFFSET))(this, a1);
		}

		::System::Void remove_OnDragEnd(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGEND_OFFSET))(this, a1);
		}

		::System::Void add_OnDragToCorner(::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGTOCORNER_OFFSET))(this, a1);
		}

		::System::Void remove_OnDragToCorner(::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGTOCORNER_OFFSET))(this, a1);
		}
	};
}
