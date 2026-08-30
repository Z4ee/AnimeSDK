#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_VITAMANAVOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x164A6D00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_VitaManaVoicePoolConfig_TypeDefinitionIndex = 38863;

	class CriAtomConfig_VitaManaVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 numberOfManaDecoders; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_VITAMANAVOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
