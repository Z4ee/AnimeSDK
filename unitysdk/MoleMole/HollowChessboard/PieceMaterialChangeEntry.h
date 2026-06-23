#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class PieceMaterialSetting; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALCHANGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11623050)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int PieceMaterialChangeEntry_TypeDefinitionIndex = 50032;

	class PieceMaterialChangeEntry : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::PieceMaterialSetting* BackConfig; // 0x10
		::MoleMole::HollowChessboard::PieceMaterialSetting* PathConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALCHANGEENTRY__CTOR_OFFSET))(this);
		}
	};
}
