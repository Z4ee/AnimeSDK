#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseBillBoardSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;

#define CLASS_2_6B909C181F8A6656__CTOR_OFFSET UNITYSDK_OFFSET(0x1558E040)
#define CLASS_2_6B909C181F8A6656__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1558E130)

inline static constexpr unsigned int Class_2_6B909C181F8A6656_TypeDefinitionIndex = 76269;

class Class_2_6B909C181F8A6656 : public ::RPG::Client::LittleGame::FiveDim::BaseBillBoardSystem_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	::Class_1_2CDF619C23140440* EEFMDEHLLFI; // 0x20
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x28

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_2_6B909C181F8A6656__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IsBillBoardNeedShow(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_6B909C181F8A6656__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
	}
};
