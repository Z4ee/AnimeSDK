#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class HipplenBuilderStatusAsset_StatConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUSASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x11E0A9B0)

inline static constexpr unsigned int HipplenBuilderStatusAsset_TypeDefinitionIndex = 44021;

class HipplenBuilderStatusAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::HipplenBuilderStatusAsset_StatConfig*>* statConfigs; // 0x18
	::UnityEngine::Color DefaultColor; // 0x20
	::UnityEngine::Color WarningColor; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUSASSET__CTOR_OFFSET))(this);
	}
};
