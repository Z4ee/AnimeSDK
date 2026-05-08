#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_INLEVELCHATCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F93230)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelChatConfig_TypeDefinitionIndex = 38114;

	struct alignas(4) InLevelChatConfig
	{
		static ::MoleMole::InLevelChatConfig* StaticGet_Fallback()
		{
			return (::MoleMole::InLevelChatConfig*)Il2CppClass::FromTypeDefinitionIndex(InLevelChatConfig_TypeDefinitionIndex)->GetStaticField(0xD6F0);
		}
		::UnityEngine::Vector3 ChatEntityOffset; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCHATCONFIG__CCTOR_OFFSET))();
		}
	};
}
