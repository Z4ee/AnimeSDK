#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_EXTENSION_LABELTEXTNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75B650)

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int LabelTextNapAttribute_TypeDefinitionIndex = 8197;

	class LabelTextNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* MethodName; // 0x10

		::System::Void _ctor(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXTENSION_LABELTEXTNAPATTRIBUTE__CTOR_OFFSET))(this, methodName);
		}
	};
}
