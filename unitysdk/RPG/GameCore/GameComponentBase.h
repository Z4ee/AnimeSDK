#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMECOMPONENTBASE_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0xA946360)
#define RPG_GAMECORE_GAMECOMPONENTBASE_INITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA946300)
#define RPG_GAMECORE_GAMECOMPONENTBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA920A70)
#define RPG_GAMECORE_GAMECOMPONENTBASE_TICK_OFFSET UNITYSDK_OFFSET(0xA920990)
#define RPG_GAMECORE_GAMECOMPONENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA920950)
#define RPG_GAMECORE_GAMECOMPONENTBASE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA945E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameComponentBase_TypeDefinitionIndex = 46389;

	class GameComponentBase : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void InitOwnerRef(::RPG::GameCore::GameEntity* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_INITOWNERREF_OFFSET))(this, owner);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE__ONINITOWNERREF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_GET_OWNERREF_OFFSET))(this);
		}
	};
}
