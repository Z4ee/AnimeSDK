#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_45298A96A4780C0D_OFFSET UNITYSDK_OFFSET(0x170321E0)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_C90D4D370D8EBA67_OFFSET UNITYSDK_OFFSET(0x170322B0)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17032260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournLastRoom_TypeDefinitionIndex = 20303;

	class ByIsRogueTournLastRoom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45298A96A4780C0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournLastRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournLastRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_45298A96A4780C0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C90D4D370D8EBA67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_METHOD_4_C90D4D370D8EBA67_OFFSET))(a1, a2);
		}
	};
}
