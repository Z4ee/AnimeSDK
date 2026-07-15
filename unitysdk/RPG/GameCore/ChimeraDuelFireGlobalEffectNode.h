#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_METHOD_3_6D82F065F0E151AE_OFFSET UNITYSDK_OFFSET(0x1C23F690)
#define RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_METHOD_3_BC75A39BE3DA21D8_OFFSET UNITYSDK_OFFSET(0x1C23F720)
#define RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C23F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelFireGlobalEffectNode_TypeDefinitionIndex = 15347;

	class ChimeraDuelFireGlobalEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::String* AnchorName; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::MVector3 Scale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D82F065F0E151AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_METHOD_3_6D82F065F0E151AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC75A39BE3DA21D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_METHOD_3_BC75A39BE3DA21D8_OFFSET))(a1, a2);
		}
	};
}
