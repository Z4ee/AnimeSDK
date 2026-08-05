#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define ROOTMOTION_INSPECTORCOMMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F922D90)
#define ROOTMOTION_INSPECTORCOMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F922D40)

namespace RootMotion
{
	inline static constexpr unsigned int InspectorComment_TypeDefinitionIndex = 38874;

	class InspectorComment : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* color; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_INSPECTORCOMMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::System::String* color)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_INSPECTORCOMMENT__CTOR_1_OFFSET))(this, name, color);
		}
	};
}
