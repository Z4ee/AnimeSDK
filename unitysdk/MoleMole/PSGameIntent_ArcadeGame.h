#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_PSGAMEINTENT_ARCADEGAME_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11DE46B0)
#define MOLEMOLE_PSGAMEINTENT_ARCADEGAME_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11DE46D0)
#define MOLEMOLE_PSGAMEINTENT_ARCADEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE46C0)

namespace MoleMole
{
	inline static constexpr unsigned int PSGameIntent_ArcadeGame_TypeDefinitionIndex = 69688;

	class PSGameIntent_ArcadeGame : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PSGAMEINTENT_ARCADEGAME__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PSGAMEINTENT_ARCADEGAME_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PSGAMEINTENT_ARCADEGAME_ONPROCESS_OFFSET))(this);
		}
	};
}
