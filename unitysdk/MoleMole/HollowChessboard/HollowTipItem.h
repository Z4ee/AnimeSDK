#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x149EF8C0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowTipItem_TypeDefinitionIndex = 76987;

	class HollowTipItem : public ::System::Object
	{
	public:
		::System::Single waitTime; // 0x10
		::System::Int32 priority; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPITEM__CTOR_OFFSET))(this);
		}
	};
}
