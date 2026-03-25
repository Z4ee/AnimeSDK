#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimEntityBehaviour; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICATTACHDEBUGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x99AE070)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicAttachDebugBehaviour_TypeDefinitionIndex = 62564;

	class FiveDimDynamicAttachDebugBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 TargetEntityID; // 0x18
		::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour* AttachTarget; // 0x20
		::System::String* AttachPointName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICATTACHDEBUGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
