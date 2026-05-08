#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicEventBase.h"

#define MOLEMOLE_COMIC_MONOCOMICKEYEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x141DCDE0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicKeyEventBase_TypeDefinitionIndex = 76913;

	class MonoComicKeyEventBase : public ::MoleMole::Comic::MonoComicEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICKEYEVENTBASE__CTOR_OFFSET))(this);
		}
	};
}
