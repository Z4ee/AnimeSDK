#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_METHOD_3_03666CF8123FE44C_OFFSET UNITYSDK_OFFSET(0x18807580)
#define RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_METHOD_3_AD78BA7045AE7647_OFFSET UNITYSDK_OFFSET(0x18807680)
#define RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18807620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitReplaceEffectNode_TypeDefinitionIndex = 15120;

	class ChimeraDuelWaitReplaceEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::MVector3 Scale; // 0x30
		::System::Single WaitTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03666CF8123FE44C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_METHOD_3_03666CF8123FE44C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD78BA7045AE7647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_METHOD_3_AD78BA7045AE7647_OFFSET))(a1, a2);
		}
	};
}
