#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_48D5573CEBA360F7.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_429084AD8F563D3D_METHOD_3_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0x16851100)
#define CLASS_3_429084AD8F563D3D_METHOD_3_1ECD3CC7B43E20F8_OFFSET UNITYSDK_OFFSET(0x16850E20)
#define CLASS_3_429084AD8F563D3D_METHOD_3_314529EC8BCA8BB3_OFFSET UNITYSDK_OFFSET(0x16851090)
#define CLASS_3_429084AD8F563D3D_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x16851810)
#define CLASS_3_429084AD8F563D3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16851860)

inline static constexpr unsigned int Class_3_429084AD8F563D3D_TypeDefinitionIndex = 73079;

class Class_3_429084AD8F563D3D : public ::Class_2_48D5573CEBA360F7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429084AD8F563D3D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1ECD3CC7B43E20F8(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_429084AD8F563D3D_METHOD_3_1ECD3CC7B43E20F8_OFFSET))(this, a1);
	}

	::System::Void Method_3_314529EC8BCA8BB3(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_429084AD8F563D3D_METHOD_3_314529EC8BCA8BB3_OFFSET))(this, a1);
	}

	::System::Void Method_3_070E78F7BE10761C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_429084AD8F563D3D_METHOD_3_070E78F7BE10761C_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429084AD8F563D3D_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
