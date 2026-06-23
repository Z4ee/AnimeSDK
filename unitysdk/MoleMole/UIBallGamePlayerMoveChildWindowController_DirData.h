#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;

#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A0750)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGamePlayerMoveChildWindowController_DirData_TypeDefinitionIndex = 89406;

	class UIBallGamePlayerMoveChildWindowController_DirData : public ::System::Object
	{
	public:
		::Class_2_1A39E1B51756BF41* trans; // 0x10
		::System::Single rBegin; // 0x18
		::System::Single rEnd; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET))(this);
		}
	};
}
