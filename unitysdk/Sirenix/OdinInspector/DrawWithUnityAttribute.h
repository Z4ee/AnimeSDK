#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DRAWWITHUNITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328B70)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DrawWithUnityAttribute_TypeDefinitionIndex = 7289;

	class DrawWithUnityAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DRAWWITHUNITYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
