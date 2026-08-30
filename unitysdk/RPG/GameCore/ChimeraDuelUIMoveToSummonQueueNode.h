#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_METHOD_3_A71EE3BA1BD149CE_OFFSET UNITYSDK_OFFSET(0x1E33DC00)
#define RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_METHOD_3_EE32C954720A0502_OFFSET UNITYSDK_OFFSET(0x1E33DB30)
#define RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33DBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelUIMoveToSummonQueueNode_TypeDefinitionIndex = 15796;

	class ChimeraDuelUIMoveToSummonQueueNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE32C954720A0502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_METHOD_3_EE32C954720A0502_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A71EE3BA1BD149CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_METHOD_3_A71EE3BA1BD149CE_OFFSET))(a1, a2);
		}
	};
}
