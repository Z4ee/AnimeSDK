#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_389E618667772EE9_OFFSET UNITYSDK_OFFSET(0x17099600)
#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_5176900F3A360A33_OFFSET UNITYSDK_OFFSET(0x170996E0)
#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17099690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelDitherOutNode_TypeDefinitionIndex = 14653;

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

		static ::System::Void Method_3_389E618667772EE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDitherOutNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDitherOutNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_389E618667772EE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5176900F3A360A33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDitherOutNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDitherOutNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_METHOD_3_5176900F3A360A33_OFFSET))(a1, a2);
		}
	};
}
