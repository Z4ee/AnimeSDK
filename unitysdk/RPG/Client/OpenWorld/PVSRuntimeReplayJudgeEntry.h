#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYJUDGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xDA00A80)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int PVSRuntimeReplayJudgeEntry_TypeDefinitionIndex = 73660;

	class PVSRuntimeReplayJudgeEntry : public ::System::Object
	{
	public:
		::System::String* stage; // 0x10
		::System::Boolean pass; // 0x18
		::System::String* evidence; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYJUDGEENTRY__CTOR_OFFSET))(this);
		}
	};
}
