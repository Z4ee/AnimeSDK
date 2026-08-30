#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerFrameData_1.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEFLOATDATA_LERP_OFFSET UNITYSDK_OFFSET(0x1EF9BD90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEFLOATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9BE30)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFrameFloatData_TypeDefinitionIndex = 41946;

	class PhantomPlayerFrameFloatData : public ::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEFLOATDATA__CTOR_OFFSET))(this);
		}

		::System::Single Lerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEFLOATDATA_LERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
