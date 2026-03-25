#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSLOOKAT_METHOD_3_1DEFC4A5A575159B_OFFSET UNITYSDK_OFFSET(0x1708C690)
#define RPG_GAMECORE_CHESSLOOKAT_METHOD_3_2E56DB8AFFE25204_OFFSET UNITYSDK_OFFSET(0x1708C760)
#define RPG_GAMECORE_CHESSLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1708C710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessLookAt_TypeDefinitionIndex = 21982;

	class ChessLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DEFC4A5A575159B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSLOOKAT_METHOD_3_1DEFC4A5A575159B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E56DB8AFFE25204(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSLOOKAT_METHOD_3_2E56DB8AFFE25204_OFFSET))(a1, a2);
		}
	};
}
