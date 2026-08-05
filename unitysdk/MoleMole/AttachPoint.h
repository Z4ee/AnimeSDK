#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ATTACHPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x134C66F0)
#define MOLEMOLE_ATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x134C66D0)

namespace MoleMole
{
	inline static constexpr unsigned int AttachPoint_TypeDefinitionIndex = 50276;

	class AttachPoint : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Transform* pointTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_ATTACHPOINT__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
