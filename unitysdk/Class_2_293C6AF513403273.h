#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6B160DE28C891EFB.h"
#include "unitysdk/RPG/Client/AssetSystem/Test/AsyncStatus.h"

namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_293C6AF513403273_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16F7DA30)
#define CLASS_2_293C6AF513403273__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7DAC0)

inline static constexpr unsigned int Class_2_293C6AF513403273_TypeDefinitionIndex = 76881;

class Class_2_293C6AF513403273 : public ::Class_1_6B160DE28C891EFB
{
public:
	::RPG::Client::IAssetOperation* Field_2_0; // 0x28
	::RPG::Client::AssetSystem::Test::AsyncStatus Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_293C6AF513403273__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_293C6AF513403273_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
