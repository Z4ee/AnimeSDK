#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHESSMODIFIERCALLBACKCONFIG_METHOD_2_F953420CC2258649_OFFSET UNITYSDK_OFFSET(0x1708CD60)
#define RPG_GAMECORE_CHESSMODIFIERCALLBACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708CE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessModifierCallbackConfig_TypeDefinitionIndex = 16191;

	class ChessModifierCallbackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCALLBACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F953420CC2258649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessModifierCallbackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessModifierCallbackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCALLBACKCONFIG_METHOD_2_F953420CC2258649_OFFSET))(a1, a2);
		}
	};
}
