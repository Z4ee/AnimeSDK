#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x107E1060)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagGroupBoolPair_TypeDefinitionIndex = 44877;

	class TagGroupBoolPair : public ::System::Object
	{
	public:
		::System::String* GroupConfigId; // 0x10
		::System::Boolean IsVisible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR__CTOR_OFFSET))(this);
		}
	};
}
