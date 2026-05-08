#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SHARE_CTOCHANGEINFOOFPROPERTY_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x1904BCC0)
#define SHARE_CTOCHANGEINFOOFPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1904BCB0)
#define SHARE_CTOCHANGEINFOOFPROPERTY_GET_TOADDVALUE_OFFSET UNITYSDK_OFFSET(0x1904BCD0)
#define SHARE_CTOCHANGEINFOOFPROPERTY_SET_TOADDVALUE_OFFSET UNITYSDK_OFFSET(0x1904BCE0)
#define SHARE_CTOCHANGEINFOOFPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1904BCF0)

namespace Share
{
	inline static constexpr unsigned int CToChangeInfoOfProperty_TypeDefinitionIndex = 11066;

	class CToChangeInfoOfProperty : public ::System::Object
	{
	public:
		::System::Int32 _ToAddValue_k__BackingField; // 0x10
		::System::Int32 _CurValue_k__BackingField; // 0x14
		::System::UInt16 _PropertyType_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt16 dwPropertyType, ::System::Int32 dwCurValue, ::System::Int32 dwToAddValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CTOCHANGEINFOOFPROPERTY__CTOR_OFFSET))(this, dwPropertyType, dwCurValue, dwToAddValue);
		}

		::System::UInt16 get_PropertyType()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CTOCHANGEINFOOFPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Int32 get_CurValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CTOCHANGEINFOOFPROPERTY_GET_CURVALUE_OFFSET))(this);
		}

		::System::Int32 get_ToAddValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CTOCHANGEINFOOFPROPERTY_GET_TOADDVALUE_OFFSET))(this);
		}

		::System::Void set_ToAddValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CTOCHANGEINFOOFPROPERTY_SET_TOADDVALUE_OFFSET))(this, value);
		}
	};
}
