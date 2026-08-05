#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUIGachaItemParam_ConfigItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIGACHAITEMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2FB90)

inline static constexpr unsigned int MonoUIGachaItemParam_TypeDefinitionIndex = 82220;

class MonoUIGachaItemParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MonoUIGachaItemParam_ConfigItem*>* configItems; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIGACHAITEMPARAM__CTOR_OFFSET))(this);
	}
};
