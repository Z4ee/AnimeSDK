#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_DISABLEPLAYERLOCK_METHOD_4_22248F963B8F612C_OFFSET UNITYSDK_OFFSET(0x18DF6870)
#define RPG_GAMECORE_ST_SIDE_DISABLEPLAYERLOCK_METHOD_4_28EBA20D1BA7007B_OFFSET UNITYSDK_OFFSET(0x18DF6700)
#define RPG_GAMECORE_ST_SIDE_DISABLEPLAYERLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF6820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_DisablePlayerLock_TypeDefinitionIndex = 19077;

	class ST_Side_DisablePlayerLock : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DISABLEPLAYERLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_28EBA20D1BA7007B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_DisablePlayerLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_DisablePlayerLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DISABLEPLAYERLOCK_METHOD_4_28EBA20D1BA7007B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22248F963B8F612C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_DisablePlayerLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_DisablePlayerLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DISABLEPLAYERLOCK_METHOD_4_22248F963B8F612C_OFFSET))(a1, a2);
		}
	};
}
