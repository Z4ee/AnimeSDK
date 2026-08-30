#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_METHOD_3_3A6EB8D91BEAAB38_OFFSET UNITYSDK_OFFSET(0x1CFC6460)
#define RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_METHOD_3_4E4D5F853B075B6A_OFFSET UNITYSDK_OFFSET(0x1CFC64E0)
#define RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC64C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelFireEffectNode_TypeDefinitionIndex = 15781;

	class ChimeraDuelFireEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::MVector3 Scale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A6EB8D91BEAAB38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelFireEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelFireEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_METHOD_3_3A6EB8D91BEAAB38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E4D5F853B075B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelFireEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_METHOD_3_4E4D5F853B075B6A_OFFSET))(a1, a2);
		}
	};
}
