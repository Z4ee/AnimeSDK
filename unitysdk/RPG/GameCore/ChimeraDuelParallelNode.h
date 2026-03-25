#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNodeSequence; }

#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_B9145CE905CD20BE_OFFSET UNITYSDK_OFFSET(0x170A2050)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_D2FA51C858137555_OFFSET UNITYSDK_OFFSET(0x170A1F70)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A2000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelParallelNode_TypeDefinitionIndex = 14678;

	class ChimeraDuelParallelNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelNodeSequence*>* Sequences; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2FA51C858137555(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelParallelNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelParallelNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_D2FA51C858137555_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9145CE905CD20BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelParallelNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_METHOD_3_B9145CE905CD20BE_OFFSET))(a1, a2);
		}
	};
}
