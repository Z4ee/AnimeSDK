#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"

#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x125CC470)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalShow3DModelNode_TypeDefinitionIndex = 63530;

	class GalShow3DModelNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Int32 modelID; // 0x20
		::MoleMole::GalGame::ModelConfigTemplateType configType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE__CTOR_OFFSET))(this);
		}
	};
}
