#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGANIPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x149EC860)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagAniPair_TypeDefinitionIndex = 75376;

	class TagAniPair : public ::System::Object
	{
	public:
		::System::Int32 TagID; // 0x10
		::System::String* AvtarShowingkey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR__CTOR_OFFSET))(this);
		}
	};
}
