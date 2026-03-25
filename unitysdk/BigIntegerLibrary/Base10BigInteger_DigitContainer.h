#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_DIGITCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18CF0BE0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_DIGITCONTAINER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18CF0850)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_DIGITCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF0810)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int Base10BigInteger_DigitContainer_TypeDefinitionIndex = 6112;

	class Base10BigInteger_DigitContainer : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Int64>*>* digits; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_DIGITCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Int64 get_Item(::System::Int32 index)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_DIGITCONTAINER_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_DIGITCONTAINER_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
