#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LONGTEXT_SUBTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD5772B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongText_SubText_TypeDefinitionIndex = 72496;

	class LongText_SubText : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* go; // 0x10
		::UnityEngine::CanvasRenderer* renderer; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SUBTEXT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
