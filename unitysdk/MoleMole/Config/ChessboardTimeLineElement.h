#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CHESSBOARDTIMELINEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12D31C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardTimeLineElement_TypeDefinitionIndex = 68479;

	class ChessboardTimeLineElement : public ::System::Object
	{
	public:
		::System::Single StartTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDTIMELINEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
