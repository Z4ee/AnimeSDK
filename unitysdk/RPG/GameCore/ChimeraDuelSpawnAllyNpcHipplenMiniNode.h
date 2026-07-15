#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_23637435EED557C6_OFFSET UNITYSDK_OFFSET(0x1C248470)
#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_60FA80D9E493CD26_OFFSET UNITYSDK_OFFSET(0x1C248410)
#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C248460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSpawnAllyNpcHipplenMiniNode_TypeDefinitionIndex = 15343;

	class ChimeraDuelSpawnAllyNpcHipplenMiniNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single DitherTime; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Owners; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60FA80D9E493CD26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_60FA80D9E493CD26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23637435EED557C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_METHOD_3_23637435EED557C6_OFFSET))(a1, a2);
		}
	};
}
