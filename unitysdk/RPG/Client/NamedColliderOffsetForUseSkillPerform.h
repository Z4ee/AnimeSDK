#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_NAMEDCOLLIDEROFFSETFORUSESKILLPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xAB392F0)

namespace RPG::Client
{
	inline static constexpr unsigned int NamedColliderOffsetForUseSkillPerform_TypeDefinitionIndex = 64133;

	class NamedColliderOffsetForUseSkillPerform : public ::System::Object
	{
	public:
		::System::String* DynamicOffsetName; // 0x10
		::UnityEngine::Vector3 AnchorOffset; // 0x18
		::UnityEngine::Vector3 AimOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAMEDCOLLIDEROFFSETFORUSESKILLPERFORM__CTOR_OFFSET))(this);
		}
	};
}
