#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x922FD40)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x922FDB0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x922F9F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x922F9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_DragBeginDelegate_TypeDefinitionIndex = 51116;

	class CakeRaceBattleItemUIHandler_DragBeginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_INVOKE_OFFSET))(this, itemID, mousePos);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 itemID, ::UnityEngine::Vector2 mousePos, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_BEGININVOKE_OFFSET))(this, itemID, mousePos, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
