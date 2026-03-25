#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CHESSWAITSECOND_METHOD_3_1941E1673291D565_OFFSET UNITYSDK_OFFSET(0x1708FA40)
#define RPG_GAMECORE_CHESSWAITSECOND_METHOD_3_D6BA95A2CB3B730C_OFFSET UNITYSDK_OFFSET(0x1708FB60)
#define RPG_GAMECORE_CHESSWAITSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1708FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessWaitSecond_TypeDefinitionIndex = 21984;

	class ChessWaitSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITSECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1941E1673291D565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITSECOND_METHOD_3_1941E1673291D565_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6BA95A2CB3B730C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITSECOND_METHOD_3_D6BA95A2CB3B730C_OFFSET))(a1, a2);
		}
	};
}
