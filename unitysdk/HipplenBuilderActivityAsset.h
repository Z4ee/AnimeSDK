#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class HipplenBuilderActivityAsset_Activity;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERACTIVITYASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13C611A0)

inline static constexpr unsigned int HipplenBuilderActivityAsset_TypeDefinitionIndex = 44558;

class HipplenBuilderActivityAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Int32 dailyActivityCount; // 0x18
	::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* activities; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERACTIVITYASSET__CTOR_OFFSET))(this);
	}
};
