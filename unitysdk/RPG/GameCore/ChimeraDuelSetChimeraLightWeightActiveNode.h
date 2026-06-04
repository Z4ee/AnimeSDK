#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_4C5BD286E52F3E9F_OFFSET UNITYSDK_OFFSET(0x196465E0)
#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_61CA27C536F3FF90_OFFSET UNITYSDK_OFFSET(0x196466E0)
#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19646680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSetChimeraLightWeightActiveNode_TypeDefinitionIndex = 15196;

	class ChimeraDuelSetChimeraLightWeightActiveNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Targets; // 0x10
		::System::Boolean IsLightWeightActive; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C5BD286E52F3E9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_4C5BD286E52F3E9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61CA27C536F3FF90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_61CA27C536F3FF90_OFFSET))(a1, a2);
		}
	};
}
