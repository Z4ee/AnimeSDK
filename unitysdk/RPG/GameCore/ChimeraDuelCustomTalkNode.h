#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_METHOD_3_D940FF54A397E9E1_OFFSET UNITYSDK_OFFSET(0x1963A8E0)
#define RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_METHOD_3_F70DAF0F635A99DD_OFFSET UNITYSDK_OFFSET(0x1963A7E0)
#define RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1963A880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCustomTalkNode_TypeDefinitionIndex = 15199;

	class ChimeraDuelCustomTalkNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::UInt32 CustomTalkID; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* TargetSelector; // 0x18
		::System::Boolean IsImmediateFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F70DAF0F635A99DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCustomTalkNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCustomTalkNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_METHOD_3_F70DAF0F635A99DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D940FF54A397E9E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCustomTalkNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_METHOD_3_D940FF54A397E9E1_OFFSET))(a1, a2);
		}
	};
}
