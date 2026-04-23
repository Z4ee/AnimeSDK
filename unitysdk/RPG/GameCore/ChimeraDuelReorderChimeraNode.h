#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_35143B3CEB6472A3_OFFSET UNITYSDK_OFFSET(0x18803E80)
#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_659E048475A24F0C_OFFSET UNITYSDK_OFFSET(0x18803D40)
#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18803E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelReorderChimeraNode_TypeDefinitionIndex = 15132;

	class ChimeraDuelReorderChimeraNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_659E048475A24F0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_659E048475A24F0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35143B3CEB6472A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelReorderChimeraNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_35143B3CEB6472A3_OFFSET))(a1, a2);
		}
	};
}
