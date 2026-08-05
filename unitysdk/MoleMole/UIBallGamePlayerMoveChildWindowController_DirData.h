#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;

#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E773550)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGamePlayerMoveChildWindowController_DirData_TypeDefinitionIndex = 93371;

	class UIBallGamePlayerMoveChildWindowController_DirData : public ::System::Object
	{
	public:
		::Class_2_1A39E1B51756BF41* trans; // 0x10
		::System::Single rEnd; // 0x18
		::System::Single rBegin; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET))(this);
		}
	};
}
