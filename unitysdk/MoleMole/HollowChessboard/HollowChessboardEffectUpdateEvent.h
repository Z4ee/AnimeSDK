#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardEffectEventBase.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17908680)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectUpdateEvent_TypeDefinitionIndex = 56132;

	class HollowChessboardEffectUpdateEvent : public ::MoleMole::HollowChessboard::HollowChessboardEffectEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTUPDATEEVENT__CTOR_OFFSET))(this);
		}
	};
}
