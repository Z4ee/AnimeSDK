#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseBillBoardSystem_1.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_AF7D3087DB47CB43__CTOR_OFFSET UNITYSDK_OFFSET(0x123ED750)
#define CLASS_2_AF7D3087DB47CB43__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x123ED820)

inline static constexpr unsigned int Class_2_AF7D3087DB47CB43_TypeDefinitionIndex = 70618;

class Class_2_AF7D3087DB47CB43 : public ::RPG::Client::LittleGame::FiveDim::BaseBillBoardSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_2_F47F7A3F5E97970D* Field_2_0; // 0x20
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D3087DB47CB43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IsBillBoardNeedShow(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D3087DB47CB43__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
	}
};
