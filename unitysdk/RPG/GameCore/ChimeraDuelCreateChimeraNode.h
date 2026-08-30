#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELCREATECHIMERANODE_METHOD_3_31BBDCB7051935B9_OFFSET UNITYSDK_OFFSET(0x1E330900)
#define RPG_GAMECORE_CHIMERADUELCREATECHIMERANODE_METHOD_3_C4C329187C755E17_OFFSET UNITYSDK_OFFSET(0x1E3308A0)
#define RPG_GAMECORE_CHIMERADUELCREATECHIMERANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3308F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCreateChimeraNode_TypeDefinitionIndex = 15789;

	class ChimeraDuelCreateChimeraNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::String* InitAnchor; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCREATECHIMERANODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4C329187C755E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCREATECHIMERANODE_METHOD_3_C4C329187C755E17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_31BBDCB7051935B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCreateChimeraNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCREATECHIMERANODE_METHOD_3_31BBDCB7051935B9_OFFSET))(a1, a2);
		}
	};
}
