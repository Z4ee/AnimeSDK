#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD9D50)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFrameAsset_TypeDefinitionIndex = 40169;

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
