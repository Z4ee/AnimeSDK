#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class HipplenBuilderTimeAsset_TimeConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERTIMEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD70B0)

inline static constexpr unsigned int HipplenBuilderTimeAsset_TypeDefinitionIndex = 47695;

class HipplenBuilderTimeAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::HipplenBuilderTimeAsset_TimeConfig*>* timeConfigs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTIMEASSET__CTOR_OFFSET))(this);
	}
};
