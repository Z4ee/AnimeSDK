#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_METHOD_3_BBBA63D8360AFC53_OFFSET UNITYSDK_OFFSET(0x1C4AF6F0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_METHOD_3_F444CB41A8FC1516_OFFSET UNITYSDK_OFFSET(0x1C4AF620)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AF6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3AdventureRoomPrepare_TypeDefinitionIndex = 21466;

	class RogueDLC1Dot3AdventureRoomPrepare : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F444CB41A8FC1516(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_METHOD_3_F444CB41A8FC1516_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBBA63D8360AFC53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_METHOD_3_BBBA63D8360AFC53_OFFSET))(a1, a2);
		}
	};
}
