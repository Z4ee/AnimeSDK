#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17365F5FA0311FC9;
class Class_1_5F4D64A4B97E38F9;
class Class_1_68EB032547196D7A;
namespace RPG::Client::PixAir { class PixAirGhostManager; }

#define CLASS_1_A37DB8F90C5A9B88_METHOD_1_04DA404B2194E923_OFFSET UNITYSDK_OFFSET(0xA4B9720)
#define CLASS_1_A37DB8F90C5A9B88_METHOD_1_61CD3163D493FB64_OFFSET UNITYSDK_OFFSET(0xA4B94A0)
#define CLASS_1_A37DB8F90C5A9B88_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xA4B9450)
#define CLASS_1_A37DB8F90C5A9B88_START_OFFSET UNITYSDK_OFFSET(0xA4B93D0)
#define CLASS_1_A37DB8F90C5A9B88_STOP_OFFSET UNITYSDK_OFFSET(0xA4B9410)
#define CLASS_1_A37DB8F90C5A9B88__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B9860)

inline static constexpr unsigned int Class_1_A37DB8F90C5A9B88_TypeDefinitionIndex = 73541;

class Class_1_A37DB8F90C5A9B88 : public ::System::Object
{
public:
	::Class_1_17365F5FA0311FC9* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A37DB8F90C5A9B88__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A37DB8F90C5A9B88_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A37DB8F90C5A9B88_STOP_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A37DB8F90C5A9B88_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_61CD3163D493FB64(::Class_1_68EB032547196D7A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68EB032547196D7A*))((::PBYTE)hIl2Cpp + CLASS_1_A37DB8F90C5A9B88_METHOD_1_61CD3163D493FB64_OFFSET))(this, a1);
	}

	::System::Void Method_1_04DA404B2194E923(::RPG::Client::PixAir::PixAirGhostManager* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGhostManager*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_A37DB8F90C5A9B88_METHOD_1_04DA404B2194E923_OFFSET))(this, a1, a2);
	}
};
