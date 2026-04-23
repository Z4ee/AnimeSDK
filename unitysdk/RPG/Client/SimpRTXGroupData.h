#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class SimpRTXGroup; }

#define RPG_CLIENT_SIMPRTXGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC80)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXGroupData_TypeDefinitionIndex = 64708;

	struct alignas(4) SimpRTXGroupData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single rotateY; // 0x1C
		::UnityEngine::Vector2 scale; // 0x20
		::System::Int32 proxyCount; // 0x28
		::System::Int32 atlasIndex; // 0x2C

		::System::Void _ctor(::RPG::Client::SimpRTXGroup* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpRTXGroup*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUPDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
