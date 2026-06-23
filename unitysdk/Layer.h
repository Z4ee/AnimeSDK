#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class LightmapInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E61B0)

inline static constexpr unsigned int Layer_TypeDefinitionIndex = 27038;

class Layer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::LightmapInfo*>* _lightmapInfoList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYER__CTOR_OFFSET))(this);
	}
};
