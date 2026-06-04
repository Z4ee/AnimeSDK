#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB490490)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB490500)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB48F710)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB490420)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_DragBeginDelegate_TypeDefinitionIndex = 58952;

	class CakeRaceBattleItemUIHandler_DragBeginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGBEGINDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
