#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_6D39B28620591593_OFFSET UNITYSDK_OFFSET(0x19CD7760)
#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_B0BB3CE8EA05CDD7_OFFSET UNITYSDK_OFFSET(0x19CD77B0)
#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD77A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChessRogueExistAeonRoom_TypeDefinitionIndex = 20013;

	class ByCompareChessRogueExistAeonRoom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D39B28620591593(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_6D39B28620591593_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B0BB3CE8EA05CDD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_METHOD_4_B0BB3CE8EA05CDD7_OFFSET))(a1, a2);
		}
	};
}
