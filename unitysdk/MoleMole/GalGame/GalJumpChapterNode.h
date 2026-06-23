#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDE100)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalJumpChapterNode_TypeDefinitionIndex = 71265;

	class GalJumpChapterNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Int32 subIndex; // 0x20
		::System::Int32 chapterIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE__CTOR_OFFSET))(this);
		}
	};
}
