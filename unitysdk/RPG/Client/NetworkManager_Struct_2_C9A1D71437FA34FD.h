#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_NETWORKMANAGER_STRUCT_2_C9A1D71437FA34FD__CTOR_OFFSET UNITYSDK_OFFSET(0x6B7260)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager_Struct_2_C9A1D71437FA34FD_TypeDefinitionIndex = 69333;

	struct alignas(4) NetworkManager_Struct_2_C9A1D71437FA34FD
	{
		::System::UInt32 DLAIECHBNPP; // 0x10
		::System::UInt16 NFPODPOMKEN; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER_STRUCT_2_C9A1D71437FA34FD__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
