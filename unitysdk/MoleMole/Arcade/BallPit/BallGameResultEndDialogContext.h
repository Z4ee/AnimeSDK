#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6F28FFD006F2B451;
namespace System { class String; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLGAMERESULTENDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6C790)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallGameResultEndDialogContext_TypeDefinitionIndex = 92568;

	class BallGameResultEndDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* RankStr; // 0x28
		::Class_3_6F28FFD006F2B451* world; // 0x30
		::System::Boolean IsSuccess; // 0x38
		::System::Int32 Rank; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLGAMERESULTENDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
