#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_714950B1F77C9FA9.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_8FF250B11CA33FA4_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x12A9C740)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x12A9C610)
#define CLASS_3_8FF250B11CA33FA4_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x12A9C6D0)
#define CLASS_3_8FF250B11CA33FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9C720)

inline static constexpr unsigned int Class_3_8FF250B11CA33FA4_TypeDefinitionIndex = 70748;

class Class_3_8FF250B11CA33FA4 : public ::Class_2_714950B1F77C9FA9
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FF250B11CA33FA4_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
