#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB3_COMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F42D980)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_Comment_TypeDefinitionIndex = 94495;

	class MB3_Comment : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* comment; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_COMMENT__CTOR_OFFSET))(this);
		}
	};
}
