#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HIPPLENBUILDERTESTASSET_TESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADDA90)

inline static constexpr unsigned int HipplenBuilderTestAsset_TestConfig_TypeDefinitionIndex = 47693;

class HipplenBuilderTestAsset_TestConfig : public ::System::Object
{
public:
	::System::String* Desc; // 0x10
	::System::Int32 TestDay; // 0x18
	::System::Int32 Requirement; // 0x1C
	::System::String* RequirementDesc; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTASSET_TESTCONFIG__CTOR_OFFSET))(this);
	}
};
