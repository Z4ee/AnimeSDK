#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SHARE_CCHANGEDPROPERTYINFO_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x1F8F4670)
#define SHARE_CCHANGEDPROPERTYINFO_GET_PREVVALUE_OFFSET UNITYSDK_OFFSET(0x1F8F4650)
#define SHARE_CCHANGEDPROPERTYINFO_SET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x1F8F4680)
#define SHARE_CCHANGEDPROPERTYINFO_SET_PREVVALUE_OFFSET UNITYSDK_OFFSET(0x1F8F4660)
#define SHARE_CCHANGEDPROPERTYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8F46A0)
#define SHARE_CCHANGEDPROPERTYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F4690)

namespace Share
{
	inline static constexpr unsigned int CChangedPropertyInfo_TypeDefinitionIndex = 15537;

	class CChangedPropertyInfo : public ::System::Object
	{
	public:
		::System::Int32 _CurValue_k__BackingField; // 0x10
		::System::Int32 _PrevValue_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CCHANGEDPROPERTYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 dwPrevValue, ::System::Int32 dwCurValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CCHANGEDPROPERTYINFO__CTOR_1_OFFSET))(this, dwPrevValue, dwCurValue);
		}

		::System::Int32 get_PrevValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CCHANGEDPROPERTYINFO_GET_PREVVALUE_OFFSET))(this);
		}

		::System::Void set_PrevValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CCHANGEDPROPERTYINFO_SET_PREVVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_CurValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CCHANGEDPROPERTYINFO_GET_CURVALUE_OFFSET))(this);
		}

		::System::Void set_CurValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CCHANGEDPROPERTYINFO_SET_CURVALUE_OFFSET))(this, value);
		}
	};
}
