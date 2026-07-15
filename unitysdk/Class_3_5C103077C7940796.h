#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FD62058F140D4A36.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_5C103077C7940796_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x15E5A760)
#define CLASS_3_5C103077C7940796_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x15E5A670)
#define CLASS_3_5C103077C7940796_METHOD_3_B8936AC3B5DA1867_OFFSET UNITYSDK_OFFSET(0x15E5A600)
#define CLASS_3_5C103077C7940796__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5A7B0)

inline static constexpr unsigned int Class_3_5C103077C7940796_TypeDefinitionIndex = 73101;

class Class_3_5C103077C7940796 : public ::Class_2_FD62058F140D4A36
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C103077C7940796__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B8936AC3B5DA1867(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5C103077C7940796_METHOD_3_B8936AC3B5DA1867_OFFSET))(this, a1);
	}

	::System::Void Method_3_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5C103077C7940796_METHOD_3_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C103077C7940796_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
