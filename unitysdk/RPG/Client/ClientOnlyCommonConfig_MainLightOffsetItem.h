#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_MAINLIGHTOFFSETITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CF590)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientOnlyCommonConfig_MainLightOffsetItem_TypeDefinitionIndex = 56116;

	class ClientOnlyCommonConfig_MainLightOffsetItem : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Vector3 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_MAINLIGHTOFFSETITEM__CTOR_OFFSET))(this);
		}
	};
}
