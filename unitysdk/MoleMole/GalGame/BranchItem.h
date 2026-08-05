#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_BRANCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A061490)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int BranchItem_TypeDefinitionIndex = 60089;

	class BranchItem : public ::System::Object
	{
	public:
		::System::Int32 value; // 0x10
		::System::Int32 bindSubSectionIndex; // 0x14
		::System::Int32 bindSectionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM__CTOR_OFFSET))(this);
		}
	};
}
