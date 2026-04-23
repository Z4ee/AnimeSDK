#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6AC940)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimPropView_TypeDefinitionIndex = 70894;

	class FiveDimPropView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPVIEW__CTOR_OFFSET))(this);
		}
	};
}
