#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x138448D0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowRenderSequenceConfig_TypeDefinitionIndex = 57070;

	class HollowRenderSequenceConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::MoleMole::HollowChessboard::HollowEntityRenderSequence* Sequence; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG__CTOR_OFFSET))(this);
		}
	};
}
