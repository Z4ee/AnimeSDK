#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_ATTACHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1384EBF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSelfAttachPoint_AttachInfo_TypeDefinitionIndex = 45154;

	class MonoEffectSelfAttachPoint_AttachInfo : public ::System::Object
	{
	public:
		::System::String* attachPoint; // 0x10
		::UnityEngine::Transform* attachTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_ATTACHINFO__CTOR_OFFSET))(this);
		}
	};
}
