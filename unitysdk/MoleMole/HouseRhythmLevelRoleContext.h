#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOUSERHYTHMLEVELROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B927A0)

namespace MoleMole
{
	inline static constexpr unsigned int HouseRhythmLevelRoleContext_TypeDefinitionIndex = 74336;

	class HouseRhythmLevelRoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onCharacterSelect; // 0x28
		::System::Int32 id; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOUSERHYTHMLEVELROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
