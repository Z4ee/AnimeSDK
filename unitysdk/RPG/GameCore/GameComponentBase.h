#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMECOMPONENTBASE_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x154EC910)
#define RPG_GAMECORE_GAMECOMPONENTBASE_INITOWNERREF_OFFSET UNITYSDK_OFFSET(0x154EC800)
#define RPG_GAMECORE_GAMECOMPONENTBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x154EC730)
#define RPG_GAMECORE_GAMECOMPONENTBASE_TICK_OFFSET UNITYSDK_OFFSET(0x154EC660)
#define RPG_GAMECORE_GAMECOMPONENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x154E98C0)
#define RPG_GAMECORE_GAMECOMPONENTBASE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x154EC8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameComponentBase_TypeDefinitionIndex = 55004;

	class GameComponentBase : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void InitOwnerRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOMPONENTBASE_INITOWNERREF_OFFSET))(this, a1);
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
