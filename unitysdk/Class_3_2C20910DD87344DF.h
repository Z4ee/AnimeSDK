#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A1F98E518DBB516.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

class Class_1_A80764A8DE475761;

#define CLASS_3_2C20910DD87344DF_METHOD_3_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x15AED560)
#define CLASS_3_2C20910DD87344DF_METHOD_3_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x15AED4F0)
#define CLASS_3_2C20910DD87344DF_METHOD_3_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x15AED120)
#define CLASS_3_2C20910DD87344DF_METHOD_3_91A7D0E79106DA94_OFFSET UNITYSDK_OFFSET(0x15AED470)
#define CLASS_3_2C20910DD87344DF_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x15AED0D0)
#define CLASS_3_2C20910DD87344DF_METHOD_3_A6DD9527374C8B46_OFFSET UNITYSDK_OFFSET(0x15AED1F0)
#define CLASS_3_2C20910DD87344DF_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x15AED6C0)
#define CLASS_3_2C20910DD87344DF__CTOR_OFFSET UNITYSDK_OFFSET(0x15AED800)

inline static constexpr unsigned int Class_3_2C20910DD87344DF_TypeDefinitionIndex = 73089;

class Class_3_2C20910DD87344DF : public ::Class_2_6A1F98E518DBB516
{
public:
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_70437D85C11C5222(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_3_A6DD9527374C8B46(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_A6DD9527374C8B46_OFFSET))(this, a1);
	}

	::System::Void Method_3_91A7D0E79106DA94(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_91A7D0E79106DA94_OFFSET))(this, a1);
	}

	::System::Void Method_3_65BB8F0F1E258993(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_65BB8F0F1E258993_OFFSET))(this, a1);
	}

	::System::Void Method_3_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_3_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2C20910DD87344DF_METHOD_3_4867D67F27947ACE_OFFSET))(this, a1);
	}
};
