#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CHESSBOARDFRONTVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2DAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardFrontViewConfig_TypeDefinitionIndex = 64826;

	class ChessboardFrontViewConfig : public ::System::Object
	{
	public:
		::System::Single OffsetZ; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDFRONTVIEWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
