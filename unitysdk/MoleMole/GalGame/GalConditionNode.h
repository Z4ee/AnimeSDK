#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class BranchItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALCONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBD780)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalConditionNode_TypeDefinitionIndex = 46221;

	class GalConditionNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		// static const ::System::String* GENDER_COND; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>* conditionList; // 0x20
		::System::String* conditionKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALCONDITIONNODE__CTOR_OFFSET))(this);
		}
	};
}
