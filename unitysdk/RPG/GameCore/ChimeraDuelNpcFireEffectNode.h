#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_797014C79AA3D703_OFFSET UNITYSDK_OFFSET(0x170A1A80)
#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_8E91CB792C443B16_OFFSET UNITYSDK_OFFSET(0x170A1980)
#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A1A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcFireEffectNode_TypeDefinitionIndex = 14644;

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

		static ::System::Void Method_3_8E91CB792C443B16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_8E91CB792C443B16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_797014C79AA3D703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_METHOD_3_797014C79AA3D703_OFFSET))(a1, a2);
		}
	};
}
