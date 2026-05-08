#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1300DAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameContext_TypeDefinitionIndex = 79432;

	class UINewsStandPuzzleGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
