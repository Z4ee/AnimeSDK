#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineElement.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDCAMERATIMELINEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1270C290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardCameraTimeLineElement_TypeDefinitionIndex = 42248;

	class ChessboardCameraTimeLineElement : public ::MoleMole::Config::ChessboardTimeLineElement
	{
	public:
		::System::String* stretchKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCAMERATIMELINEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
