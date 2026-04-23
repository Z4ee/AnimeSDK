#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_MONOATLASMOUTHTALK__CTOR_OFFSET UNITYSDK_OFFSET(0xA90EF90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAtlasMouthTalk_TypeDefinitionIndex = 63191;

	class MonoAtlasMouthTalk : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MeshName; // 0x18
		::System::Int32 UseNum; // 0x20
		::System::Int32 CloseIndex; // 0x24
		::System::Single SeparateLoudness1; // 0x28
		::System::Int32 MiddleIndex; // 0x2C
		::System::Single SeparateLoudness2; // 0x30
		::System::Int32 OpenIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATLASMOUTHTALK__CTOR_OFFSET))(this);
		}
	};
}
