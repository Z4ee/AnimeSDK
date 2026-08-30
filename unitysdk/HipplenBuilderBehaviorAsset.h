#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class HipplenBuilderBehaviorAsset_BehaviorConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERBEHAVIORASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC6E70)

inline static constexpr unsigned int HipplenBuilderBehaviorAsset_TypeDefinitionIndex = 47683;

class HipplenBuilderBehaviorAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::HipplenBuilderBehaviorAsset_BehaviorConfig*>* behaviorConfigs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBEHAVIORASSET__CTOR_OFFSET))(this);
	}
};
