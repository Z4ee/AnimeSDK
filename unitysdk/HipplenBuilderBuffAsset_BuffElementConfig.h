#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderBuffAsset_BuffType.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG_GET_SHOWBUFFSTRFLOAT_OFFSET UNITYSDK_OFFSET(0x18DC6F00)
#define HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG_GET_SHOWBUFFSTRINT_OFFSET UNITYSDK_OFFSET(0x18DC6F50)
#define HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG_GET_SHOWSTATTYPE_OFFSET UNITYSDK_OFFSET(0x18DC6EB0)
#define HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC6FA0)

inline static constexpr unsigned int HipplenBuilderBuffAsset_BuffElementConfig_TypeDefinitionIndex = 47687;

class HipplenBuilderBuffAsset_BuffElementConfig : public ::System::Object
{
public:
	::System::String* Desc; // 0x10
	::HipplenBuilderBuffAsset_BuffType Type; // 0x18
	::HipplenBuilderStatus_StatType StatType; // 0x1C
	::System::Single BuffStrFloat; // 0x20
	::System::Int32 BuffStrInt; // 0x24
	::System::Int32 Duration; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG__CTOR_OFFSET))(this);
	}

	::System::Boolean get_showStatType()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG_GET_SHOWSTATTYPE_OFFSET))(this);
	}

	::System::Boolean get_showBuffStrFloat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG_GET_SHOWBUFFSTRFLOAT_OFFSET))(this);
	}

	::System::Boolean get_showBuffStrInt()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_BUFFELEMENTCONFIG_GET_SHOWBUFFSTRINT_OFFSET))(this);
	}
};
