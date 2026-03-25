#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_B36DCD24FCF82F45_METHOD_1_B6625D5E21D5F348_OFFSET UNITYSDK_OFFSET(0x16E19100)
#define CLASS_1_B36DCD24FCF82F45__CTOR_OFFSET UNITYSDK_OFFSET(0x16E19300)

inline static constexpr unsigned int Class_1_B36DCD24FCF82F45_TypeDefinitionIndex = 13681;

class Class_1_B36DCD24FCF82F45 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_1; // 0x10
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::GameCore::RogueTournAreaGroupID Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B36DCD24FCF82F45__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_B6625D5E21D5F348(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B36DCD24FCF82F45*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B36DCD24FCF82F45*&))((::PBYTE)hIl2Cpp + CLASS_1_B36DCD24FCF82F45_METHOD_1_B6625D5E21D5F348_OFFSET))(a1, a2);
	}
};
