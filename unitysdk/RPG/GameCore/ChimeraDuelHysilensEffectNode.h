#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_METHOD_3_C4188FD5B6DD2E27_OFFSET UNITYSDK_OFFSET(0x1CFC7D50)
#define RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_METHOD_3_D36EBBECE0C10569_OFFSET UNITYSDK_OFFSET(0x1CFC7CF0)
#define RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC7D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelHysilensEffectNode_TypeDefinitionIndex = 15808;

	class ChimeraDuelHysilensEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* HPChangeValue; // 0x18
		::RPG::GameCore::BaseChimeraDuelValueGetter* AtkChangeValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D36EBBECE0C10569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_METHOD_3_D36EBBECE0C10569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4188FD5B6DD2E27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelHysilensEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_METHOD_3_C4188FD5B6DD2E27_OFFSET))(a1, a2);
		}
	};
}
