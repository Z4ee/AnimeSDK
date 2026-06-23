#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define SIRENIX_ODININSPECTOR_EXTENSION_NAPTEXTAREAATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC9B0D0)
#define SIRENIX_ODININSPECTOR_EXTENSION_NAPTEXTAREAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9B0C0)

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int NapTextAreaAttribute_TypeDefinitionIndex = 7999;

	class NapTextAreaAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Int32 maxLines; // 0x10
		::System::Int32 minLines; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXTENSION_NAPTEXTAREAATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 minLines, ::System::Int32 maxLines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXTENSION_NAPTEXTAREAATTRIBUTE__CTOR_1_OFFSET))(this, minLines, maxLines);
		}
	};
}
