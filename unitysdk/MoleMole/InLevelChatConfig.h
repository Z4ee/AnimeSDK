#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_INLEVELCHATCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x107F9210)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelChatConfig_TypeDefinitionIndex = 75427;

	struct alignas(4) InLevelChatConfig
	{
		static ::MoleMole::InLevelChatConfig* StaticGet_Fallback()
		{
			return (::MoleMole::InLevelChatConfig*)Il2CppClass::FromTypeDefinitionIndex(InLevelChatConfig_TypeDefinitionIndex)->GetStaticField(0x115B0);
		}
		::UnityEngine::Vector3 ChatEntityOffset; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCHATCONFIG__CCTOR_OFFSET))();
		}
	};
}
