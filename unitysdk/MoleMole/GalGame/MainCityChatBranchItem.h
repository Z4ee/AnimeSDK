#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x144D8800)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchItem_TypeDefinitionIndex = 64389;

	class MainCityChatBranchItem : public ::System::Object
	{
	public:
		::System::Int32 bindSectionIndex; // 0x10
		::System::Int32 bindSubSectionIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM__CTOR_OFFSET))(this);
		}
	};
}
