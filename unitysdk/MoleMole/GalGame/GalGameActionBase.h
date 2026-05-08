#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_GALGAMEACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B8B8E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameActionBase_TypeDefinitionIndex = 55821;

	class GalGameActionBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEACTIONBASE__CTOR_OFFSET))(this);
		}
	};
}
