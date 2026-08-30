#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingAIState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_147;
class Class_0_16E4307DCC419505_148;

#define CLASS_1_60AD743CA5DFE723__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE0760)

inline static constexpr unsigned int Class_1_60AD743CA5DFE723_TypeDefinitionIndex = 42082;

class Class_1_60AD743CA5DFE723 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_148* FKIBGPJNCIJ; // 0x10
	::Class_0_16E4307DCC419505_147* LAEFPCAIHEJ; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingAIState MEPFOEEGBEA; // 0x20
	::System::Int32 IKCBJEIEJGC; // 0x24
	::System::Single NAJMCEJEHDC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60AD743CA5DFE723__CTOR_OFFSET))(this);
	}
};
