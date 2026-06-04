#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_IMPORT3DTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE7B50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Import3DTexture_TypeDefinitionIndex = 35306;

	class Import3DTexture : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IMPORT3DTEXTURE__CTOR_OFFSET))(this);
		}
	};
}
