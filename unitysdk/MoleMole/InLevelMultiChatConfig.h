#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_INLEVELMULTICHATCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BC68E0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelMultiChatConfig_TypeDefinitionIndex = 51080;

	struct alignas(4) InLevelMultiChatConfig
	{
		static ::MoleMole::InLevelMultiChatConfig* StaticGet_Fallback()
		{
			return (::MoleMole::InLevelMultiChatConfig*)Il2CppClass::FromTypeDefinitionIndex(InLevelMultiChatConfig_TypeDefinitionIndex)->GetStaticField(0xF340);
		}
		::System::Single pitch; // 0x10
		::System::Single heightOffset; // 0x14
		::System::Single heightRatio; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMULTICHATCONFIG__CCTOR_OFFSET))();
		}
	};
}
