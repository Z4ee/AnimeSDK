#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MB_PRESERVELIGHTMAPDATA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BFC7F40)
#define MB_PRESERVELIGHTMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC81A0)

inline static constexpr unsigned int MB_PreserveLightmapData_TypeDefinitionIndex = 84983;

class MB_PreserveLightmapData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 lightmapIndex; // 0x18
	::UnityEngine::Vector4 lightmapScaleOffset; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_PRESERVELIGHTMAPDATA__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_PRESERVELIGHTMAPDATA_AWAKE_OFFSET))(this);
	}
};
