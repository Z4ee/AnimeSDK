#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceBattleItemUIHandler_MouseCornerPositionType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC9BB4C0)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC9BB550)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC9BA730)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9BB450)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_DragCornerDelegate_TypeDefinitionIndex = 63073;

	class CakeRaceBattleItemUIHandler_DragCornerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
