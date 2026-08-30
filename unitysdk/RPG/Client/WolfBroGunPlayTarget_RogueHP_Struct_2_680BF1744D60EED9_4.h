#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_STRUCT_2_680BF1744D60EED9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueHP_Struct_2_680BF1744D60EED9_4_TypeDefinitionIndex = 68700;

	struct alignas(4) WolfBroGunPlayTarget_RogueHP_Struct_2_680BF1744D60EED9_4
	{
		::System::Int32 EIAKNONOIHA; // 0x10
		::System::Int32 JODLKJEJKIO; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_STRUCT_2_680BF1744D60EED9_4__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
