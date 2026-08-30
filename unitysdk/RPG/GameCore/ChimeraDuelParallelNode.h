#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNodeSequence; }

#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_F782096C88ACAB43_OFFSET UNITYSDK_OFFSET(0x1E338BB0)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_FBE791170E0D4EB3_OFFSET UNITYSDK_OFFSET(0x1E338C10)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E338C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelParallelNode_TypeDefinitionIndex = 15811;

	class ChimeraDuelParallelNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelNodeSequence*>* Sequences; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F782096C88ACAB43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelParallelNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelParallelNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_F782096C88ACAB43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBE791170E0D4EB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelParallelNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_FBE791170E0D4EB3_OFFSET))(a1, a2);
		}
	};
}
