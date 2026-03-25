#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1684E980)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFrameAsset_TypeDefinitionIndex = 33598;

	class PhantomPlayerFrameAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames* FrameData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEASSET__CTOR_OFFSET))(this);
		}
	};
}
