#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardEffectEventBase.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTDESTROYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC5510)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectDestroyEvent_TypeDefinitionIndex = 38112;

	class HollowChessboardEffectDestroyEvent : public ::MoleMole::HollowChessboard::HollowChessboardEffectEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTDESTROYEVENT__CTOR_OFFSET))(this);
		}
	};
}
