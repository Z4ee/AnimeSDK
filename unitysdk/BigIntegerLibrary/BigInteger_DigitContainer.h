#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BIGINTEGERLIBRARY_BIGINTEGER_DIGITCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x16D351D0)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIGITCONTAINER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x16D34EC0)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIGITCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D34E80)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigInteger_DigitContainer_TypeDefinitionIndex = 6992;

	class BigInteger_DigitContainer : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Int64>*>* digits; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIGITCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Int64 get_Item(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIGITCONTAINER_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIGITCONTAINER_SET_ITEM_OFFSET))(this, a1, a2);
		}
	};
}
