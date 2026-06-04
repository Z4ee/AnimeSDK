#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define COFFEE_UIPARTICLEINTERNAL_ICONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1467CB50)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int IconAttribute_TypeDefinitionIndex = 41519;

	class IconAttribute : public ::System::Attribute
	{
	public:
		::System::String* _path; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_ICONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
