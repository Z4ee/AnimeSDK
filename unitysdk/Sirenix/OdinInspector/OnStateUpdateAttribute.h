#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ONSTATEUPDATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329B60)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OnStateUpdateAttribute_TypeDefinitionIndex = 7336;

	class OnStateUpdateAttribute : public ::System::Attribute
	{
	public:
		::System::String* Action; // 0x10

		::System::Void _ctor(::System::String* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONSTATEUPDATEATTRIBUTE__CTOR_OFFSET))(this, action);
		}
	};
}
