#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x19086B40)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagGroupAniPair_TypeDefinitionIndex = 56522;

	class TagGroupAniPair : public ::System::Object
	{
	public:
		::System::String* GroupConfigId; // 0x10
		::System::String* AvtarShowingkey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR__CTOR_OFFSET))(this);
		}
	};
}
