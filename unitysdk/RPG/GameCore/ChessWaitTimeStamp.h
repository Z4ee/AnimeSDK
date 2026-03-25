#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CHESSWAITTIMESTAMP_METHOD_3_D2C6D7F987DEE92F_OFFSET UNITYSDK_OFFSET(0x1708FCA0)
#define RPG_GAMECORE_CHESSWAITTIMESTAMP_METHOD_3_E6894C793E3D5802_OFFSET UNITYSDK_OFFSET(0x1708FDC0)
#define RPG_GAMECORE_CHESSWAITTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1708FD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessWaitTimeStamp_TypeDefinitionIndex = 21985;

	class ChessWaitTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2C6D7F987DEE92F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITTIMESTAMP_METHOD_3_D2C6D7F987DEE92F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E6894C793E3D5802(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITTIMESTAMP_METHOD_3_E6894C793E3D5802_OFFSET))(a1, a2);
		}
	};
}
