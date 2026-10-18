#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_5A50879BD1765915_OFFSET UNITYSDK_OFFSET(0x1D5A6110)
#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_FA6FB823AFE317E9_OFFSET UNITYSDK_OFFSET(0x1D5A6090)
#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A60F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcFireEffectNode_TypeDefinitionIndex = 15950;

	class ChimeraDuelNpcFireEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcSelectorConfig* Npc; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::RPG::MVector3 Scale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA6FB823AFE317E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_FA6FB823AFE317E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A50879BD1765915(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_5A50879BD1765915_OFFSET))(a1, a2);
		}
	};
}
