#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_97E659ED8D5D259C_21;
class Class_3_FA020C2C23A72B3F;

#define CLASS_1_4A5349CA33B57F66_METHOD_1_48F3D54B3637A8DF_OFFSET UNITYSDK_OFFSET(0x17A561A0)
#define CLASS_1_4A5349CA33B57F66_METHOD_1_690F168C52539740_OFFSET UNITYSDK_OFFSET(0x17A560B0)
#define CLASS_1_4A5349CA33B57F66_METHOD_1_AFE8A031D1451F03_OFFSET UNITYSDK_OFFSET(0x17A56300)
#define CLASS_1_4A5349CA33B57F66__CTOR_OFFSET UNITYSDK_OFFSET(0x17A560A0)

inline static constexpr unsigned int Class_1_4A5349CA33B57F66_TypeDefinitionIndex = 75930;

class Class_1_4A5349CA33B57F66 : public ::System::Object
{
public:
	::Class_1_97E659ED8D5D259C_21* OADJMMIHCCI; // 0x10

	::System::Void _ctor(::Class_1_97E659ED8D5D259C_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_21*))((::PBYTE)hIl2Cpp + CLASS_1_4A5349CA33B57F66__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_690F168C52539740(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A5349CA33B57F66_METHOD_1_690F168C52539740_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_48F3D54B3637A8DF(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_4A5349CA33B57F66_METHOD_1_48F3D54B3637A8DF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AFE8A031D1451F03()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A5349CA33B57F66_METHOD_1_AFE8A031D1451F03_OFFSET))(this);
	}
};
