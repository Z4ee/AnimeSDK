#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/System/Object.h"

class Class_2_36A4EB0E077FE274;
namespace RPG::Client { class AssemNPC; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CREATEASSEMBLYNPC_B__0_OFFSET UNITYSDK_OFFSET(0xFC01800)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFBDE600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass6_0_TypeDefinitionIndex = 55210;

	class EntityManagerExtension___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::AssemNPC* npcConfig; // 0x10
		::RPG::GameCore::EntityManager* pManager; // 0x18
		::RPG::GameCore::GameEntity* pEntity; // 0x20
		::System::Action_1<::RPG::GameCore::GameEntity*>* OnLoadFinish; // 0x28
		::System::String* uniqueName; // 0x30
		::RPG::Client::EAssemblyNPC npcType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateAssemblyNPC_b__0(::Class_2_36A4EB0E077FE274* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_36A4EB0E077FE274*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS6_0__CREATEASSEMBLYNPC_B__0_OFFSET))(this, a1);
		}
	};
}
