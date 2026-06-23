#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGSTRINGPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4CF30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagStringPair_TypeDefinitionIndex = 47713;

	class TagStringPair : public ::System::Object
	{
	public:
		::System::Int32 TagID; // 0x10
		::System::String* SetTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGSTRINGPAIR__CTOR_OFFSET))(this);
		}
	};
}
