#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_TAGBOOLPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x19086B30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagBoolPair_TypeDefinitionIndex = 88101;

	class TagBoolPair : public ::System::Object
	{
	public:
		::System::Int32 TagID; // 0x10
		::System::Boolean IsVisible; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR__CTOR_OFFSET))(this);
		}
	};
}
