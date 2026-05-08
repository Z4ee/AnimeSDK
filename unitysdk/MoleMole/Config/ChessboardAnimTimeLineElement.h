#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ChessboardAnimTimeLineElement_AnimType.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineElement.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CHESSBOARDANIMTIMELINEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF9789B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardAnimTimeLineElement_TypeDefinitionIndex = 73665;

	class ChessboardAnimTimeLineElement : public ::MoleMole::Config::ChessboardTimeLineElement
	{
	public:
		::UnityEngine::AnimationCurve* frequencyCurve; // 0x18
		::System::Single frequencyMin; // 0x20
		::MoleMole::Config::ChessboardAnimTimeLineElement_AnimType type; // 0x24
		::System::Single frequencyMax; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDANIMTIMELINEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
