#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_METHOD_3_89FB40F6B6B8E849_OFFSET UNITYSDK_OFFSET(0x1BA05E50)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_METHOD_3_F53C0B370B133B0C_OFFSET UNITYSDK_OFFSET(0x1BA05D80)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA05E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostClosePage_TypeDefinitionIndex = 21023;

	class PlayPenaconyEndmostClosePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F53C0B370B133B0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostClosePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostClosePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_METHOD_3_F53C0B370B133B0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89FB40F6B6B8E849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostClosePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTCLOSEPAGE_METHOD_3_89FB40F6B6B8E849_OFFSET))(a1, a2);
		}
	};
}
