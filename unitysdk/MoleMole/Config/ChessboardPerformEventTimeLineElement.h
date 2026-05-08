#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineElement.h"

#define MOLEMOLE_CONFIG_CHESSBOARDPERFORMEVENTTIMELINEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xED0EAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardPerformEventTimeLineElement_TypeDefinitionIndex = 58571;

	class ChessboardPerformEventTimeLineElement : public ::MoleMole::Config::ChessboardTimeLineElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDPERFORMEVENTTIMELINEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
