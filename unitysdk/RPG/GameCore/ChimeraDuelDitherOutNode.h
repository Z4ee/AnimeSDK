#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_3F509A8A97E57C0B_OFFSET UNITYSDK_OFFSET(0x1963AD50)
#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_41D078E6E14A4FC5_OFFSET UNITYSDK_OFFSET(0x1963AE30)
#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1963ADE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelDitherOutNode_TypeDefinitionIndex = 15185;

	class ChimeraDuelDitherOutNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::Single DitherTime; // 0x18
		::System::Boolean IsDestroy; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F509A8A97E57C0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDitherOutNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDitherOutNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_3F509A8A97E57C0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41D078E6E14A4FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDitherOutNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDitherOutNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_41D078E6E14A4FC5_OFFSET))(a1, a2);
		}
	};
}
