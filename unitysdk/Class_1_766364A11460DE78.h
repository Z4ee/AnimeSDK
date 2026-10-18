#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_35B5591E4067D7D2;
class Class_1_6869ECCA5B46F302;
class Class_1_6869ECCA5B46F302_1;
class Class_1_A3A2B28DB41BA84A_1;

#define CLASS_1_766364A11460DE78_METHOD_1_238057AF2E9566C8_OFFSET UNITYSDK_OFFSET(0x1591F4D0)
#define CLASS_1_766364A11460DE78_METHOD_1_B2E330E30FC8E333_OFFSET UNITYSDK_OFFSET(0x1591F460)
#define CLASS_1_766364A11460DE78_METHOD_1_FF3F93C70B313006_OFFSET UNITYSDK_OFFSET(0x1591F3F0)
#define CLASS_1_766364A11460DE78__CTOR_OFFSET UNITYSDK_OFFSET(0x1591F3E0)

inline static constexpr unsigned int Class_1_766364A11460DE78_TypeDefinitionIndex = 62687;

class Class_1_766364A11460DE78 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302_1* IHDDOFNEOFM; // 0x10
	::Class_1_6869ECCA5B46F302* NMOFDCOMEOD; // 0x18

	::System::Void _ctor(::Class_1_6869ECCA5B46F302_1* a1, ::Class_1_6869ECCA5B46F302* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_1*, ::Class_1_6869ECCA5B46F302*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_A3A2B28DB41BA84A_1* Method_1_FF3F93C70B313006(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::Class_1_A3A2B28DB41BA84A_1*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_METHOD_1_FF3F93C70B313006_OFFSET))(this, a1);
	}

	::Class_1_35B5591E4067D7D2* Method_1_B2E330E30FC8E333(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::Class_1_35B5591E4067D7D2*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_METHOD_1_B2E330E30FC8E333_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_238057AF2E9566C8(::System::UInt32 a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_METHOD_1_238057AF2E9566C8_OFFSET))(this, a1);
	}
};
