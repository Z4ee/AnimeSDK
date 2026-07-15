#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/AttributeTargets.h"

#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1AD2D870)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_INHERITED_OFFSET UNITYSDK_OFFSET(0x1AD2D890)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1AD2D880)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET UNITYSDK_OFFSET(0x1AD2D8A0)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD2D8B0)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD2D860)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2D850)

namespace System
{
	inline static constexpr unsigned int AttributeUsageAttribute_TypeDefinitionIndex = 202;

	class AttributeUsageAttribute : public ::System::Attribute
	{
	public:
		static ::System::AttributeUsageAttribute** StaticGet_Default()
		{
			return (::System::AttributeUsageAttribute**)Il2CppClass::FromTypeDefinitionIndex(AttributeUsageAttribute_TypeDefinitionIndex)->GetStaticField(0x3E00);
		}
		::System::Boolean m_allowMultiple; // 0x10
		::System::Boolean m_inherited; // 0x11
		::System::AttributeTargets m_attributeTarget; // 0x14

		::System::Void _ctor(::System::AttributeTargets a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeTargets))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::AttributeTargets a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeTargets, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_AllowMultiple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_ALLOWMULTIPLE_OFFSET))(this);
		}

		::System::Void set_AllowMultiple(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET))(this, a1);
		}

		::System::Boolean get_Inherited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_INHERITED_OFFSET))(this);
		}

		::System::Void set_Inherited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET))(this, a1);
		}
	};
}
