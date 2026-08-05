#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ShowInInspectorAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ONINSPECTORDISPOSEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F770E70)
#define SIRENIX_ODININSPECTOR_ONINSPECTORDISPOSEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770E60)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OnInspectorDisposeAttribute_TypeDefinitionIndex = 7336;

	class OnInspectorDisposeAttribute : public ::Sirenix::OdinInspector::ShowInInspectorAttribute
	{
	public:
		::System::String* Action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONINSPECTORDISPOSEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONINSPECTORDISPOSEATTRIBUTE__CTOR_1_OFFSET))(this, action);
		}
	};
}
