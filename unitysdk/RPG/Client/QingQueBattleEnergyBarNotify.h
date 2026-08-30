#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_QINGQUEBATTLEENERGYBARNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1801F0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int QingQueBattleEnergyBarNotify_TypeDefinitionIndex = 71769;

	class QingQueBattleEnergyBarNotify : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::QingQueEnergyBarIconType>* IconList; // 0x10
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::Boolean Hu; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QINGQUEBATTLEENERGYBARNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
