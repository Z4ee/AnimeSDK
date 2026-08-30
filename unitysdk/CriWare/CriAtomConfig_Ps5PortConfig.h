#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_PS5PORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x164A6D30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_Ps5PortConfig_TypeDefinitionIndex = 38866;

	class CriAtomConfig_Ps5PortConfig : public ::System::Object
	{
	public:
		::System::Int32 maxChannelPorts; // 0x10
		::System::Int32 maxObjectPorts; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_PS5PORTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
