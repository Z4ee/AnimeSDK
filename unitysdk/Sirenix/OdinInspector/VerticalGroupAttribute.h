#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_VERTICALGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1C022880)
#define SIRENIX_ODININSPECTOR_VERTICALGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0227E0)
#define SIRENIX_ODININSPECTOR_VERTICALGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C022770)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int VerticalGroupAttribute_TypeDefinitionIndex = 7253;

	class VerticalGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::Single PaddingTop; // 0x30
		::System::Single PaddingBottom; // 0x34

		::System::Void _ctor(::System::String* groupId, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VERTICALGROUPATTRIBUTE__CTOR_OFFSET))(this, groupId, order);
		}

		::System::Void _ctor_1(::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VERTICALGROUPATTRIBUTE__CTOR_1_OFFSET))(this, order);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VERTICALGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
