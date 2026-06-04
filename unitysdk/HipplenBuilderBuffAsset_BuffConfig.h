#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"

class HipplenBuilderBuffAsset_BuffElementConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERBUFFASSET_BUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C61210)

inline static constexpr unsigned int HipplenBuilderBuffAsset_BuffConfig_TypeDefinitionIndex = 44566;

class HipplenBuilderBuffAsset_BuffConfig : public ::System::Object
{
public:
	::System::String* Desc; // 0x10
	::System::Collections::Generic::List_1<::HipplenBuilderBuffAsset_BuffElementConfig*>* BuffList; // 0x18
	::HipplenBuilderStatus_StatType CostType; // 0x20
	::System::Int32 CostValue; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET_BUFFCONFIG__CTOR_OFFSET))(this);
	}
};
