#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HipplenBuilderTestAsset_TestConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERTESTASSET_TESTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD57E0)

inline static constexpr unsigned int HipplenBuilderTestAsset_TestLineConfig_TypeDefinitionIndex = 47694;

class HipplenBuilderTestAsset_TestLineConfig : public ::System::Object
{
public:
	::System::String* Desc; // 0x10
	::System::Collections::Generic::List_1<::HipplenBuilderTestAsset_TestConfig*>* TestLine; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTASSET_TESTLINECONFIG__CTOR_OFFSET))(this);
	}
};
