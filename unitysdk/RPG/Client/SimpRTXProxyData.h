#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class SimpRTXProxy; }

#define RPG_CLIENT_SIMPRTXPROXYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x143800)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXProxyData_TypeDefinitionIndex = 65630;

	struct alignas(4) SimpRTXProxyData
	{
		::UnityEngine::Vector3 localPosition; // 0x10
		::System::Single rotateY; // 0x1C
		::UnityEngine::Vector2 scale; // 0x20
		::UnityEngine::Vector4 atlasUVST; // 0x28

		::System::Void _ctor(::RPG::Client::SimpRTXProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpRTXProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXPROXYDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
