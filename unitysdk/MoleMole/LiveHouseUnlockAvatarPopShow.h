#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_LIVEHOUSEUNLOCKAVATARPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14186FA0)
#define MOLEMOLE_LIVEHOUSEUNLOCKAVATARPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14186FF0)
#define MOLEMOLE_LIVEHOUSEUNLOCKAVATARPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14186FB0)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseUnlockAvatarPopShow_TypeDefinitionIndex = 39755;

	class LiveHouseUnlockAvatarPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 AvatarID; // 0x28

		::System::Void _ctor(::System::Int32 avatarid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSEUNLOCKAVATARPOPSHOW__CTOR_OFFSET))(this, avatarid);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSEUNLOCKAVATARPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSEUNLOCKAVATARPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
