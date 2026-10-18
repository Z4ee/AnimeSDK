#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingAIState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_257;
class Class_0_16E4307DCC419505_258;

#define CLASS_1_60AD743CA5DFE723__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA22130)

inline static constexpr unsigned int Class_1_60AD743CA5DFE723_TypeDefinitionIndex = 43724;

class Class_1_60AD743CA5DFE723 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_257* LAEFPCAIHEJ; // 0x10
	::Class_0_16E4307DCC419505_258* FKIBGPJNCIJ; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingAIState MEPFOEEGBEA; // 0x20
	::System::Single NAJMCEJEHDC; // 0x24
	::System::Int32 IKCBJEIEJGC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60AD743CA5DFE723__CTOR_OFFSET))(this);
	}
};
