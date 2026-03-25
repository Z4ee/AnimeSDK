#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/AttributeTargets.h"

#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x161B8540)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_INHERITED_OFFSET UNITYSDK_OFFSET(0x161B8560)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x161B8550)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET UNITYSDK_OFFSET(0x161B8570)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x161B8580)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161B8530)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x161B8520)

namespace System
{
	inline static constexpr unsigned int AttributeUsageAttribute_TypeDefinitionIndex = 203;

	class AttributeUsageAttribute : public ::System::Attribute
	{
	public:
		static ::System::AttributeUsageAttribute** StaticGet_Default()
		{
			return (::System::AttributeUsageAttribute**)Il2CppClass::FromTypeDefinitionIndex(AttributeUsageAttribute_TypeDefinitionIndex)->GetStaticField(0x15D0);
		}
		::System::AttributeTargets m_attributeTarget; // 0x10
		::System::Boolean m_inherited; // 0x14
		::System::Boolean m_allowMultiple; // 0x15

		::System::Void _ctor(::System::AttributeTargets validOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeTargets))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_OFFSET))(this, validOn);
		}

		::System::Void _ctor_1(::System::AttributeTargets validOn, ::System::Boolean allowMultiple, ::System::Boolean inherited)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeTargets, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_1_OFFSET))(this, validOn, allowMultiple, inherited);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_AllowMultiple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_ALLOWMULTIPLE_OFFSET))(this);
		}

		::System::Void set_AllowMultiple(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET))(this, value);
		}

		::System::Boolean get_Inherited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_INHERITED_OFFSET))(this);
		}

		::System::Void set_Inherited(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET))(this, value);
		}
	};
}
