#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/System/Object.h"

class Class_1_5AAB6ECF860BD8D6;
class Class_2_181A7F9409C60DBC;
class Class_3_543326C044264182;

#define CLASS_1_8D4C99F920C1E42C_METHOD_1_F56A003B1183F033_OFFSET UNITYSDK_OFFSET(0x8F88320)
#define CLASS_1_8D4C99F920C1E42C_METHOD_1_F63D60543BB82D5F_OFFSET UNITYSDK_OFFSET(0x8F887D0)
#define CLASS_1_8D4C99F920C1E42C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F88310)

inline static constexpr unsigned int Class_1_8D4C99F920C1E42C_TypeDefinitionIndex = 71348;

class Class_1_8D4C99F920C1E42C : public ::System::Object
{
public:
	::Class_3_543326C044264182* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_543326C044264182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_8D4C99F920C1E42C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F56A003B1183F033(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::Class_1_5AAB6ECF860BD8D6*& a3, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::Class_1_5AAB6ECF860BD8D6*&, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType&))((::PBYTE)hIl2Cpp + CLASS_1_8D4C99F920C1E42C_METHOD_1_F56A003B1183F033_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::LittleGame::ChenLing::CirticalTrackType Method_1_F63D60543BB82D5F(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::RPG::Client::LittleGame::ChenLing::CirticalTrackType(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_8D4C99F920C1E42C_METHOD_1_F63D60543BB82D5F_OFFSET))(this, a1);
	}
};
