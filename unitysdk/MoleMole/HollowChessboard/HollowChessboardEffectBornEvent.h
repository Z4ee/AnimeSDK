#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardEffectEventBase.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTBORNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6390)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectBornEvent_TypeDefinitionIndex = 90261;

	class HollowChessboardEffectBornEvent : public ::MoleMole::HollowChessboard::HollowChessboardEffectEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTBORNEVENT__CTOR_OFFSET))(this);
		}
	};
}
