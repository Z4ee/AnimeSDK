#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_HOUSERHYTHMAVATARUNLOCKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x142921C0)

namespace MoleMole
{
	inline static constexpr unsigned int HouseRhythmAvatarUnlockContext_TypeDefinitionIndex = 53133;

	class HouseRhythmAvatarUnlockContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 avatarid; // 0x28

		::System::Void _ctor(::System::Int32 avatarid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOUSERHYTHMAVATARUNLOCKCONTEXT__CTOR_OFFSET))(this, avatarid);
		}
	};
}
