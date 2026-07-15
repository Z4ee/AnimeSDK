#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_02A9EB52E264B5FE_OFFSET UNITYSDK_OFFSET(0x1BB752E0)
#define RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_E081C10C0D12EFFB_OFFSET UNITYSDK_OFFSET(0x1BB75210)
#define RPG_GAMECORE_ROGUETOURNFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB752D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFinish_TypeDefinitionIndex = 21290;

	class RogueTournFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E081C10C0D12EFFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_E081C10C0D12EFFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02A9EB52E264B5FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_02A9EB52E264B5FE_OFFSET))(a1, a2);
		}
	};
}
