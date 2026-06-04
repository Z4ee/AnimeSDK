#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNodeSequence; }

#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_F17DDF690FCEA91E_OFFSET UNITYSDK_OFFSET(0x196430A0)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_FBE791170E0D4EB3_OFFSET UNITYSDK_OFFSET(0x19643180)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19643130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelParallelNode_TypeDefinitionIndex = 15210;

	class ChimeraDuelParallelNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelNodeSequence*>* Sequences; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F17DDF690FCEA91E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelParallelNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelParallelNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_F17DDF690FCEA91E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBE791170E0D4EB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelParallelNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_FBE791170E0D4EB3_OFFSET))(a1, a2);
		}
	};
}
