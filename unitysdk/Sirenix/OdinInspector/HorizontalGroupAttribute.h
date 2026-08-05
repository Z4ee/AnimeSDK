#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_HORIZONTALGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1F7707A0)
#define SIRENIX_ODININSPECTOR_HORIZONTALGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7706D0)
#define SIRENIX_ODININSPECTOR_HORIZONTALGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770630)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HorizontalGroupAttribute_TypeDefinitionIndex = 7320;

	class HorizontalGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* Title; // 0x30
		::System::Single LabelWidth; // 0x38
		::System::Single MaxWidth; // 0x3C
		::System::Single PaddingLeft; // 0x40
		::System::Single MinWidth; // 0x44
		::System::Single Width; // 0x48
		::System::Single PaddingRight; // 0x4C
		::System::Single MarginRight; // 0x50
		::System::Single MarginLeft; // 0x54

		::System::Void _ctor(::System::String* group, ::System::Single width, ::System::Int32 marginLeft, ::System::Int32 marginRight, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HORIZONTALGROUPATTRIBUTE__CTOR_OFFSET))(this, group, width, marginLeft, marginRight, order);
		}

		::System::Void _ctor_1(::System::Single width, ::System::Int32 marginLeft, ::System::Int32 marginRight, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HORIZONTALGROUPATTRIBUTE__CTOR_1_OFFSET))(this, width, marginLeft, marginRight, order);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HORIZONTALGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
