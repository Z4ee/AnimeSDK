#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_129539E974EC31DA.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/Struct_2_B12E8F52E978C28E.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE_1;
class Class_4_4BA0DF1EA13B94EC;

#define CLASS_1_E0F5B32584909515_METHOD_1_0B8ACF448733F893_OFFSET UNITYSDK_OFFSET(0x1D12AEA0)
#define CLASS_1_E0F5B32584909515_METHOD_1_410F746DDFAB4B91_OFFSET UNITYSDK_OFFSET(0x1D12AE50)

inline static constexpr unsigned int Class_1_E0F5B32584909515_TypeDefinitionIndex = 91605;

class Class_1_E0F5B32584909515 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_410F746DDFAB4B91(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_E0F5B32584909515_METHOD_1_410F746DDFAB4B91_OFFSET))(a1);
	}

	static ::Struct_2_B12E8F52E978C28E Method_1_0B8ACF448733F893(::Class_4_4BA0DF1EA13B94EC* a1, ::Class_3_01B4CC30216C9ABE_1* a2, ::Enum_3_129539E974EC31DA a3)
	{
		return ((::Struct_2_B12E8F52E978C28E(*)(::Class_4_4BA0DF1EA13B94EC*, ::Class_3_01B4CC30216C9ABE_1*, ::Enum_3_129539E974EC31DA))((::PBYTE)hIl2Cpp + CLASS_1_E0F5B32584909515_METHOD_1_0B8ACF448733F893_OFFSET))(a1, a2, a3);
	}
};
