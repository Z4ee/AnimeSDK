#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_68EB032547196D7A;
class Class_1_91C9195F7AC754D8;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::PixAir { class PixAirGhostManager; }

#define CLASS_1_24AFEDF7C3A21326_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xB618DF0)
#define CLASS_1_24AFEDF7C3A21326_METHOD_1_80E209E9A2CA3703_OFFSET UNITYSDK_OFFSET(0xB618FD0)
#define CLASS_1_24AFEDF7C3A21326_METHOD_1_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0xB618E40)
#define CLASS_1_24AFEDF7C3A21326_START_OFFSET UNITYSDK_OFFSET(0xB618D70)
#define CLASS_1_24AFEDF7C3A21326_STOP_OFFSET UNITYSDK_OFFSET(0xB618DB0)
#define CLASS_1_24AFEDF7C3A21326__CTOR_OFFSET UNITYSDK_OFFSET(0xB619080)

inline static constexpr unsigned int Class_1_24AFEDF7C3A21326_TypeDefinitionIndex = 79219;

class Class_1_24AFEDF7C3A21326 : public ::System::Object
{
public:
	::Class_1_91C9195F7AC754D8* NMLAOCMPPPP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24AFEDF7C3A21326__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24AFEDF7C3A21326_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24AFEDF7C3A21326_STOP_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24AFEDF7C3A21326_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0EF72A03B510AB(::Class_1_68EB032547196D7A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68EB032547196D7A*))((::PBYTE)hIl2Cpp + CLASS_1_24AFEDF7C3A21326_METHOD_1_CF0EF72A03B510AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_80E209E9A2CA3703(::RPG::Client::PixAir::PixAirGhostManager* a1, ::Class_1_D501FC103C8A2714* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGhostManager*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + CLASS_1_24AFEDF7C3A21326_METHOD_1_80E209E9A2CA3703_OFFSET))(this, a1, a2);
	}
};
