#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MB3_DISABLEHIDDENANIMATIONS_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AF8D640)
#define MB3_DISABLEHIDDENANIMATIONS_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AF8D480)
#define MB3_DISABLEHIDDENANIMATIONS_START_OFFSET UNITYSDK_OFFSET(0x1AF8D270)
#define MB3_DISABLEHIDDENANIMATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8D800)

inline static constexpr unsigned int MB3_DisableHiddenAnimations_TypeDefinitionIndex = 84964;

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
