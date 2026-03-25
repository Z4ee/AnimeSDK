#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FD62058F140D4A36.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_8FF250B11CA33FA4_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x87EE1F0)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_7BCF3827F9B8DB03_OFFSET UNITYSDK_OFFSET(0x87EE1E0)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x87EE090)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x87EE150)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_C6C5AC2EBC2D3BCA_OFFSET UNITYSDK_OFFSET(0x87EE020)
#define CLASS_3_8FF250B11CA33FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x87EE1A0)

inline static constexpr unsigned int Class_3_8FF250B11CA33FA4_TypeDefinitionIndex = 62736;

class Class_3_8FF250B11CA33FA4 : public ::Class_2_FD62058F140D4A36
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_C6C5AC2EBC2D3BCA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_C6C5AC2EBC2D3BCA_OFFSET))(this, a1);
	}

	::System::Void Method_3_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_7BCF3827F9B8DB03(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_7BCF3827F9B8DB03_OFFSET))(this, P0);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
