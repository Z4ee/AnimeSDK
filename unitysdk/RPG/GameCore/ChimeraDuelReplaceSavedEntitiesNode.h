#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }

#define RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_METHOD_3_08ED987880D80073_OFFSET UNITYSDK_OFFSET(0x170A4E90)
#define RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_METHOD_3_4B8F1DD33775FA94_OFFSET UNITYSDK_OFFSET(0x170A4DB0)
#define RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A4E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelReplaceSavedEntitiesNode_TypeDefinitionIndex = 14665;

	class ChimeraDuelReplaceSavedEntitiesNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* SavedSelection; // 0x10
		::System::Boolean IsForceRaplace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B8F1DD33775FA94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_METHOD_3_4B8F1DD33775FA94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08ED987880D80073(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_METHOD_3_08ED987880D80073_OFFSET))(a1, a2);
		}
	};
}
