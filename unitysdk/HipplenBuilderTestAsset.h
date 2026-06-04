#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class HipplenBuilderTestAsset_TestLineConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERTESTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6E1B0)

inline static constexpr unsigned int HipplenBuilderTestAsset_TypeDefinitionIndex = 44570;

class HipplenBuilderTestAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::HipplenBuilderTestAsset_TestLineConfig*>* TestLineConfigs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTASSET__CTOR_OFFSET))(this);
	}
};
