#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SIMPRTXPROXY_METHOD_1_8ACAC425340483C4_OFFSET UNITYSDK_OFFSET(0xE08D9C0)
#define RPG_CLIENT_SIMPRTXPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xE08DC70)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXProxy_TypeDefinitionIndex = 70149;

	class SimpRTXProxy : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 localPosition; // 0x10
		::System::Single rotateY; // 0x1C
		::UnityEngine::Vector2 scale; // 0x20
		::UnityEngine::Texture2D* texture; // 0x28
		::UnityEngine::Vector2Int atlasPosition; // 0x30
		::UnityEngine::Vector4 atlasUVST; // 0x38
		::System::Boolean showGizmos; // 0x48
		::UnityEngine::Color gizmosColor; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXPROXY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 Method_1_8ACAC425340483C4(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXPROXY_METHOD_1_8ACAC425340483C4_OFFSET))(this, a1);
		}
	};
}
