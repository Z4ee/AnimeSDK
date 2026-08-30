#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_35143B3CEB6472A3_OFFSET UNITYSDK_OFFSET(0x1CFCD980)
#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_79E11C7AEE610B22_OFFSET UNITYSDK_OFFSET(0x1CFCD8E0)
#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCD970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelReorderChimeraNode_TypeDefinitionIndex = 15795;

	class ChimeraDuelReorderChimeraNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79E11C7AEE610B22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_79E11C7AEE610B22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35143B3CEB6472A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelReorderChimeraNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_METHOD_3_35143B3CEB6472A3_OFFSET))(a1, a2);
		}
	};
}
