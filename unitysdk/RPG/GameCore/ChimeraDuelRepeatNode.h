#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELREPEATNODE_METHOD_3_163E57BE995D9B77_OFFSET UNITYSDK_OFFSET(0x1E33B250)
#define RPG_GAMECORE_CHIMERADUELREPEATNODE_METHOD_3_87E4D772E1C56E4D_OFFSET UNITYSDK_OFFSET(0x1E33B2B0)
#define RPG_GAMECORE_CHIMERADUELREPEATNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33B2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRepeatNode_TypeDefinitionIndex = 15809;

	class ChimeraDuelRepeatNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* Nodes; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* RepeatTimesValueGetter; // 0x18
		::System::Single IntervalTime; // 0x20
		::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* SaveSelection; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_163E57BE995D9B77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRepeatNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRepeatNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATNODE_METHOD_3_163E57BE995D9B77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87E4D772E1C56E4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRepeatNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATNODE_METHOD_3_87E4D772E1C56E4D_OFFSET))(a1, a2);
		}
	};
}
