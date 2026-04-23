#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseBillBoardSystem_1.h"

class Class_1_4D11CE62B2BEC69E;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;

#define CLASS_2_FBE1DF30E902EB51__CTOR_OFFSET UNITYSDK_OFFSET(0x123B1830)
#define CLASS_2_FBE1DF30E902EB51__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x123B1960)

inline static constexpr unsigned int Class_2_FBE1DF30E902EB51_TypeDefinitionIndex = 70468;

class Class_2_FBE1DF30E902EB51 : public ::RPG::Client::LittleGame::FiveDim::BaseBillBoardSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_3_D6E9A038FA23103A* Field_2_1; // 0x20
	::Class_1_4D11CE62B2BEC69E* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_2_FBE1DF30E902EB51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IsBillBoardNeedShow(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_FBE1DF30E902EB51__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
	}
};
