#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_METHOD_3_2B1D02E38C8E1379_OFFSET UNITYSDK_OFFSET(0x17664FC0)
#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_METHOD_3_AE27074B867CF0C5_OFFSET UNITYSDK_OFFSET(0x17664EB0)
#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17664F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournEnterNextRoom_TypeDefinitionIndex = 20281;

	class RogueTournEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTERNEXTROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE27074B867CF0C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournEnterNextRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournEnterNextRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_METHOD_3_AE27074B867CF0C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B1D02E38C8E1379(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_METHOD_3_2B1D02E38C8E1379_OFFSET))(a1, a2);
		}
	};
}
