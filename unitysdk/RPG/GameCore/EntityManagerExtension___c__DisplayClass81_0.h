#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS81_0__CREATETUTORIALGRAPHENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xE6596F0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE64CB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass81_0_TypeDefinitionIndex = 57783;

	class EntityManagerExtension___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::System::String* levelGraphPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateTutorialGraphEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS81_0__CREATETUTORIALGRAPHENTITY_B__0_OFFSET))(this, a1);
		}
	};
}
