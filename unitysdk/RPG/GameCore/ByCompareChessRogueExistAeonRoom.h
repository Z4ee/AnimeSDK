#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_4C288916971C88DE_OFFSET UNITYSDK_OFFSET(0x19509830)
#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_B0BB3CE8EA05CDD7_OFFSET UNITYSDK_OFFSET(0x19509900)
#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x195098B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChessRogueExistAeonRoom_TypeDefinitionIndex = 19654;

	class ByCompareChessRogueExistAeonRoom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4C288916971C88DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_4C288916971C88DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B0BB3CE8EA05CDD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_B0BB3CE8EA05CDD7_OFFSET))(a1, a2);
		}
	};
}
