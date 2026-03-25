#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CakeRaceBattleItemUIHandler_DragBeginDelegate; }
namespace RPG::Client { class CakeRaceBattleItemUIHandler_DragCornerDelegate; }
namespace RPG::Client { class CakeRaceBattleItemUIHandler_DragDelegate; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0x922F370)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x922F7C0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGTOCORNER_OFFSET UNITYSDK_OFFSET(0x922F8C0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x922F470)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_CLAMPMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x922F000)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9222F40)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETCENTERMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x922F140)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETLEFTSTICKINPUTVECTORSCALEDBYSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x922F1F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ISMOUSEINRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x922EC10)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGBEGIN_OFFSET UNITYSDK_OFFSET(0x922EA40)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGEND_OFFSET UNITYSDK_OFFSET(0x922EB80)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAG_OFFSET UNITYSDK_OFFSET(0x922EAB0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_MOUSEPOSITIONTOLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x922EDC0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_NORMALIZEMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x922EF40)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0x922F3F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x922F840)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGTOCORNER_OFFSET UNITYSDK_OFFSET(0x922F940)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x922F4F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x922F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_TypeDefinitionIndex = 51114;

	class CakeRaceBattleItemUIHandler : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate* OnDragToCorner; // 0x10
		::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* OnDrag; // 0x18
		::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate* OnDragBegin; // 0x20
		::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* OnDragEnd; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void LuaCall_DragBegin(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGBEGIN_OFFSET))(this, itemID, mousePosition);
		}

		::System::Boolean LuaCall_Drag(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePosition, ::System::Boolean isValidArea, ::System::Single cornerFactor)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAG_OFFSET))(this, itemID, mousePosition, isValidArea, cornerFactor);
		}

		::System::Boolean LuaCall_DragEnd(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePosition, ::System::Boolean isValidArea)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_LUACALL_DRAGEND_OFFSET))(this, itemID, mousePosition, isValidArea);
		}

		static ::System::Boolean IsMouseInRectTransform(::UnityEngine::Vector2 mousePosition, ::UnityEngine::RectTransform* transform)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ISMOUSEINRECTTRANSFORM_OFFSET))(mousePosition, transform);
		}

		static ::UnityEngine::Vector3 MousePositionToLocalPosition(::UnityEngine::Vector2 mousePosition, ::UnityEngine::RectTransform* parentTransform)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_MOUSEPOSITIONTOLOCALPOSITION_OFFSET))(mousePosition, parentTransform);
		}

		static ::UnityEngine::Vector2 NormalizeMousePosition(::UnityEngine::Vector2 mousePosition)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_NORMALIZEMOUSEPOSITION_OFFSET))(mousePosition);
		}

		static ::UnityEngine::Vector2 ClampMousePosition(::UnityEngine::Vector2 mousePosition)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_CLAMPMOUSEPOSITION_OFFSET))(mousePosition);
		}

		static ::UnityEngine::Vector2 GetCenterMousePosition()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETCENTERMOUSEPOSITION_OFFSET))();
		}

		static ::UnityEngine::Vector2 GetLeftStickInputVectorScaledByScreenWidth()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_GETLEFTSTICKINPUTVECTORSCALEDBYSCREENWIDTH_OFFSET))();
		}

		::System::Void add_OnDragBegin(::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGBEGIN_OFFSET))(this, value);
		}

		::System::Void remove_OnDragBegin(::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragBeginDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGBEGIN_OFFSET))(this, value);
		}

		::System::Void add_OnDrag(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnDrag(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnDragEnd(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGEND_OFFSET))(this, value);
		}

		::System::Void remove_OnDragEnd(::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGEND_OFFSET))(this, value);
		}

		::System::Void add_OnDragToCorner(::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_ADD_ONDRAGTOCORNER_OFFSET))(this, value);
		}

		::System::Void remove_OnDragToCorner(::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_DragCornerDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_REMOVE_ONDRAGTOCORNER_OFFSET))(this, value);
		}
	};
}
