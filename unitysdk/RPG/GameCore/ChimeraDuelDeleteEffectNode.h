#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_METHOD_3_4C0361E04F7C83F4_OFFSET UNITYSDK_OFFSET(0x170993E0)
#define RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_METHOD_3_B69FFF2D0E21AB17_OFFSET UNITYSDK_OFFSET(0x170994C0)
#define RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17099470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelDeleteEffectNode_TypeDefinitionIndex = 14649;

	class ChimeraDuelDeleteEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C0361E04F7C83F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDeleteEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDeleteEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_METHOD_3_4C0361E04F7C83F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B69FFF2D0E21AB17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelDeleteEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelDeleteEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_METHOD_3_B69FFF2D0E21AB17_OFFSET))(a1, a2);
		}
	};
}
