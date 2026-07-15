#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_250721E2E4E8F572_OFFSET UNITYSDK_OFFSET(0x1C247A40)
#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_61CA27C536F3FF90_OFFSET UNITYSDK_OFFSET(0x1C247AA0)
#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C247A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSetChimeraLightWeightActiveNode_TypeDefinitionIndex = 15360;

	class ChimeraDuelSetChimeraLightWeightActiveNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Targets; // 0x10
		::System::Boolean IsLightWeightActive; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_250721E2E4E8F572(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_250721E2E4E8F572_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61CA27C536F3FF90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_METHOD_3_61CA27C536F3FF90_OFFSET))(a1, a2);
		}
	};
}
