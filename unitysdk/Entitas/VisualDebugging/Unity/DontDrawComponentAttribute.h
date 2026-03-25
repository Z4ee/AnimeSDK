#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_VISUALDEBUGGING_UNITY_DONTDRAWCOMPONENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8B520)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int DontDrawComponentAttribute_TypeDefinitionIndex = 9753;

	class DontDrawComponentAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_DONTDRAWCOMPONENTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
