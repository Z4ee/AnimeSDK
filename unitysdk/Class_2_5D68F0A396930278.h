#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseBillBoardSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;

#define CLASS_2_5D68F0A396930278__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF3AA0)
#define CLASS_2_5D68F0A396930278__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x15FF3B70)

inline static constexpr unsigned int Class_2_5D68F0A396930278_TypeDefinitionIndex = 72808;

class Class_2_5D68F0A396930278 : public ::RPG::Client::LittleGame::FiveDim::BaseBillBoardSystem_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Class_3_001D9EA49F6215B6* Field_2_0; // 0x20
	::Class_1_2CDF619C23140440* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_2_5D68F0A396930278__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IsBillBoardNeedShow(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_5D68F0A396930278__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
	}
};
