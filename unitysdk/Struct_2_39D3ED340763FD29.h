#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_39D3ED340763FD29_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x3B65C00)
#define STRUCT_2_39D3ED340763FD29_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3B65B50)
#define STRUCT_2_39D3ED340763FD29_METHOD_2_34DA542281C267E6_OFFSET UNITYSDK_OFFSET(0x3B65C60)
#define STRUCT_2_39D3ED340763FD29_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3B65BB0)
#define STRUCT_2_39D3ED340763FD29__CTOR_OFFSET UNITYSDK_OFFSET(0x3B65B30)

inline static constexpr unsigned int Struct_2_39D3ED340763FD29_TypeDefinitionIndex = 40987;

struct alignas(4) Struct_2_39D3ED340763FD29
{
	::RPG::Client::LittleGame::Match3::OpponentRole KLBOCCNGGGF; // 0x10
	::RPG::Client::LittleGame::Match3::OpponentRole ADIJMBHBFAG; // 0x14
	::System::UInt32 HCHPPFMICDN; // 0x18
	::System::UInt32 IPJIDOBCFPO; // 0x1C

	::System::Void _ctor(::RPG::Client::LittleGame::Match3::OpponentRole a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_39D3ED340763FD29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_39D3ED340763FD29_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_39D3ED340763FD29_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_39D3ED340763FD29_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_34DA542281C267E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_39D3ED340763FD29_METHOD_2_34DA542281C267E6_OFFSET))(this);
	}
};
