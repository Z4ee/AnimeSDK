#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_68EB032547196D7A;
class Class_1_91C9195F7AC754D8;
namespace RPG::Client::PixAir { class PixAirGhostManager; }

#define CLASS_1_5E111983DB4FF715_METHOD_1_611D10968D49D1DE_OFFSET UNITYSDK_OFFSET(0x18AFAFA0)
#define CLASS_1_5E111983DB4FF715_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x18AFAD50)
#define CLASS_1_5E111983DB4FF715_METHOD_1_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0x18AFADA0)
#define CLASS_1_5E111983DB4FF715_START_OFFSET UNITYSDK_OFFSET(0x18AFACD0)
#define CLASS_1_5E111983DB4FF715_STOP_OFFSET UNITYSDK_OFFSET(0x18AFAD10)
#define CLASS_1_5E111983DB4FF715__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFB050)

inline static constexpr unsigned int Class_1_5E111983DB4FF715_TypeDefinitionIndex = 75190;

class Class_1_5E111983DB4FF715 : public ::System::Object
{
public:
	::Class_1_91C9195F7AC754D8* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E111983DB4FF715__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E111983DB4FF715_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E111983DB4FF715_STOP_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E111983DB4FF715_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A7B1D406C8D78E8(::Class_1_68EB032547196D7A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68EB032547196D7A*))((::PBYTE)hIl2Cpp + CLASS_1_5E111983DB4FF715_METHOD_1_9A7B1D406C8D78E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_611D10968D49D1DE(::RPG::Client::PixAir::PixAirGhostManager* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGhostManager*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_5E111983DB4FF715_METHOD_1_611D10968D49D1DE_OFFSET))(this, a1, a2);
	}
};
