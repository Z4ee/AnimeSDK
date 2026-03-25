#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9230590)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9230620)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x92301F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x92301D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_DragDelegate_TypeDefinitionIndex = 51117;

	class CakeRaceBattleItemUIHandler_DragDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePos, ::System::Boolean isValidArea)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE_INVOKE_OFFSET))(this, itemID, mousePos, isValidArea);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePos, ::System::Boolean isValidArea, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE_BEGININVOKE_OFFSET))(this, itemID, mousePos, isValidArea, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
