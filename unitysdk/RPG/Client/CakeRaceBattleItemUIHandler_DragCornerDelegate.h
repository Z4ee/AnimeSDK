#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceBattleItemUIHandler_MouseCornerPositionType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9EF3A00)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9EF3A90)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9EF2660)
#define RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF39E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemUIHandler_DragCornerDelegate_TypeDefinitionIndex = 58038;

	class CakeRaceBattleItemUIHandler_DragCornerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType posType, ::System::Boolean isValidArea)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_INVOKE_OFFSET))(this, posType, isValidArea);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType posType, ::System::Boolean isValidArea, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_BEGININVOKE_OFFSET))(this, posType, isValidArea, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMUIHANDLER_DRAGCORNERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
