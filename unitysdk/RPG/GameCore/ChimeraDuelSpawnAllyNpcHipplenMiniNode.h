#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_22F32C54AE85C8D9_OFFSET UNITYSDK_OFFSET(0x18805860)
#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_23637435EED557C6_OFFSET UNITYSDK_OFFSET(0x18805940)
#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE__CTOR_OFFSET UNITYSDK_OFFSET(0x188058F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSpawnAllyNpcHipplenMiniNode_TypeDefinitionIndex = 15117;

	class ChimeraDuelSpawnAllyNpcHipplenMiniNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single DitherTime; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Owners; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22F32C54AE85C8D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_22F32C54AE85C8D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23637435EED557C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_23637435EED557C6_OFFSET))(a1, a2);
		}
	};
}
