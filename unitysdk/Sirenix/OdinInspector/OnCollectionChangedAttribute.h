#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ONCOLLECTIONCHANGEDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0207B0)
#define SIRENIX_ODININSPECTOR_ONCOLLECTIONCHANGEDATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C0207C0)
#define SIRENIX_ODININSPECTOR_ONCOLLECTIONCHANGEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0207A0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OnCollectionChangedAttribute_TypeDefinitionIndex = 7200;

	class OnCollectionChangedAttribute : public ::System::Attribute
	{
	public:
		::System::String* After; // 0x10
		::System::String* Before; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONCOLLECTIONCHANGEDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* after)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONCOLLECTIONCHANGEDATTRIBUTE__CTOR_1_OFFSET))(this, after);
		}

		::System::Void _ctor_2(::System::String* before, ::System::String* after)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONCOLLECTIONCHANGEDATTRIBUTE__CTOR_2_OFFSET))(this, before, after);
		}
	};
}
