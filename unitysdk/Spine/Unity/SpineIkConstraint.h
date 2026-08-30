#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace System { class String; }

#define SPINE_UNITY_SPINEIKCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x183413D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineIkConstraint_TypeDefinitionIndex = 43903;

	class SpineIkConstraint : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEIKCONSTRAINT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
