#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseBillBoardSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_AF7D3087DB47CB43__CTOR_OFFSET UNITYSDK_OFFSET(0x1594C280)
#define CLASS_2_AF7D3087DB47CB43__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1594C350)

inline static constexpr unsigned int Class_2_AF7D3087DB47CB43_TypeDefinitionIndex = 76436;

class Class_2_AF7D3087DB47CB43 : public ::RPG::Client::LittleGame::FiveDim::BaseBillBoardSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x20
	::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D3087DB47CB43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IsBillBoardNeedShow(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D3087DB47CB43__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
	}
};
