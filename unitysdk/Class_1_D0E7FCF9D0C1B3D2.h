#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/System/Object.h"

class Class_1_2AE1D80996AD66EA_3;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;

#define CLASS_1_D0E7FCF9D0C1B3D2_METHOD_1_A7EF33D24DFA0B61_OFFSET UNITYSDK_OFFSET(0xB5842A0)
#define CLASS_1_D0E7FCF9D0C1B3D2_METHOD_1_B4922AAD59E11CA8_OFFSET UNITYSDK_OFFSET(0xB583E40)
#define CLASS_1_D0E7FCF9D0C1B3D2__CTOR_OFFSET UNITYSDK_OFFSET(0xB583E30)

inline static constexpr unsigned int Class_1_D0E7FCF9D0C1B3D2_TypeDefinitionIndex = 77380;

class Class_1_D0E7FCF9D0C1B3D2 : public ::System::Object
{
public:
	::Class_3_543326C044264182* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_3_543326C044264182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_D0E7FCF9D0C1B3D2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B4922AAD59E11CA8(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::Class_1_2AE1D80996AD66EA_3*& a3, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::Class_1_2AE1D80996AD66EA_3*&, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType&))((::PBYTE)hIl2Cpp + CLASS_1_D0E7FCF9D0C1B3D2_METHOD_1_B4922AAD59E11CA8_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::LittleGame::ChenLing::CirticalTrackType Method_1_A7EF33D24DFA0B61(::Class_2_6B60059019300BAD* a1)
	{
		return ((::RPG::Client::LittleGame::ChenLing::CirticalTrackType(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_D0E7FCF9D0C1B3D2_METHOD_1_A7EF33D24DFA0B61_OFFSET))(this, a1);
	}
};
