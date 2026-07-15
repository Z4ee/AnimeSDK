#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FD62058F140D4A36.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

class Class_1_A80764A8DE475761;

#define CLASS_3_D06D5996381B1217_METHOD_3_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x1858A680)
#define CLASS_3_D06D5996381B1217_METHOD_3_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x1858A5A0)
#define CLASS_3_D06D5996381B1217_METHOD_3_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1858A7D0)
#define CLASS_3_D06D5996381B1217_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1858A700)
#define CLASS_3_D06D5996381B1217_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x1858A920)
#define CLASS_3_D06D5996381B1217__CTOR_OFFSET UNITYSDK_OFFSET(0x1858A970)

inline static constexpr unsigned int Class_3_D06D5996381B1217_TypeDefinitionIndex = 73104;

class Class_3_D06D5996381B1217 : public ::Class_2_FD62058F140D4A36
{
public:
	::System::Single Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D06D5996381B1217__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_70603E2AE56EBD6B(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_3_D06D5996381B1217_METHOD_3_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_3_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D06D5996381B1217_METHOD_3_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D06D5996381B1217_METHOD_3_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D06D5996381B1217_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D06D5996381B1217_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
