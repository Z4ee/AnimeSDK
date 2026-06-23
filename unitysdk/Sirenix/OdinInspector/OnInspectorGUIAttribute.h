#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ShowInInspectorAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ONINSPECTORGUIATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E329B00)
#define SIRENIX_ODININSPECTOR_ONINSPECTORGUIATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E329B20)
#define SIRENIX_ODININSPECTOR_ONINSPECTORGUIATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329AF0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OnInspectorGUIAttribute_TypeDefinitionIndex = 7333;

	class OnInspectorGUIAttribute : public ::Sirenix::OdinInspector::ShowInInspectorAttribute
	{
	public:
		::System::String* Append; // 0x10
		::System::String* PrependMethodName; // 0x18
		::System::String* Prepend; // 0x20
		::System::String* AppendMethodName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONINSPECTORGUIATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* action, ::System::Boolean append)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONINSPECTORGUIATTRIBUTE__CTOR_1_OFFSET))(this, action, append);
		}

		::System::Void _ctor_2(::System::String* prepend, ::System::String* append)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONINSPECTORGUIATTRIBUTE__CTOR_2_OFFSET))(this, prepend, append);
		}
	};
}
