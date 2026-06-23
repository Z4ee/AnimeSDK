#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MB3_DISABLEHIDDENANIMATIONS_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D3B71F0)
#define MB3_DISABLEHIDDENANIMATIONS_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D3B7030)
#define MB3_DISABLEHIDDENANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x1D3B6E20)
#define MB3_DISABLEHIDDENANIMATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B73B0)

inline static constexpr unsigned int MB3_DisableHiddenAnimations_TypeDefinitionIndex = 90538;

class MB3_DisableHiddenAnimations : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* animationsToCull; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_DISABLEHIDDENANIMATIONS__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_DISABLEHIDDENANIMATIONS_START_OFFSET))(this);
	}

	::System::Void OnBecameVisible()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_DISABLEHIDDENANIMATIONS_ONBECAMEVISIBLE_OFFSET))(this);
	}

	::System::Void OnBecameInvisible()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_DISABLEHIDDENANIMATIONS_ONBECAMEINVISIBLE_OFFSET))(this);
	}
};
