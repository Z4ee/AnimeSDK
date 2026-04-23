#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class HipplenBuilderBuffAsset_BuffConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERBUFFASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x11DFD580)

inline static constexpr unsigned int HipplenBuilderBuffAsset_TypeDefinitionIndex = 44017;

class HipplenBuilderBuffAsset : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::HipplenBuilderBuffAsset_BuffConfig*>* buffConfigs; // 0x18
	::System::Int32 BuffSelectCount; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERBUFFASSET__CTOR_OFFSET))(this);
	}
};
