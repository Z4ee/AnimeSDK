#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_GALPLAYABLENODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x136A4070)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeBase_TypeDefinitionIndex = 85840;

	class GalPlayableNodeBase : public ::System::Object
	{
	public:
		::System::Int32 subSectionIdx; // 0x10
		::MoleMole::GalGame::GalPlayableNodeType nodeType; // 0x14
		::System::Int32 sectionIdx; // 0x18

		::System::Void _ctor(::MoleMole::GalGame::GalPlayableNodeType nodeType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLENODEBASE__CTOR_OFFSET))(this, nodeType);
		}
	};
}
