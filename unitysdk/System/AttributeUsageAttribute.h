#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/AttributeTargets.h"

#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1CD82820)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET UNITYSDK_OFFSET(0x1CD82830)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD82840)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD82810)

namespace System
{
	inline static constexpr unsigned int AttributeUsageAttribute_TypeDefinitionIndex = 191;

	class AttributeUsageAttribute : public ::System::Attribute
	{
	public:
		static ::System::AttributeUsageAttribute** StaticGet_Default()
		{
			return (::System::AttributeUsageAttribute**)Il2CppClass::FromTypeDefinitionIndex(AttributeUsageAttribute_TypeDefinitionIndex)->GetStaticField(0x1310);
		}
		::System::Boolean m_allowMultiple; // 0x10
		::System::Boolean m_inherited; // 0x11
		::System::AttributeTargets m_attributeTarget; // 0x14

		::System::Void _ctor(::System::AttributeTargets validOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeTargets))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_OFFSET))(this, validOn);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Void set_AllowMultiple(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET))(this, value);
		}

		::System::Void set_Inherited(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET))(this, value);
		}
	};
}
