#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_TAGFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x14665230)

namespace Cinemachine
{
	inline static constexpr unsigned int TagFieldAttribute_TypeDefinitionIndex = 36891;

	class TagFieldAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TAGFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
