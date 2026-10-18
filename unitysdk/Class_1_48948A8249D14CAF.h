#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/System/Object.h"

class Class_1_803155C069ACF29F;

#define CLASS_1_48948A8249D14CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA21D00)

inline static constexpr unsigned int Class_1_48948A8249D14CAF_TypeDefinitionIndex = 42450;

class Class_1_48948A8249D14CAF : public ::System::Object
{
public:
	::Class_1_803155C069ACF29F* MAIJJNLJJNM; // 0x10
	::System::UInt32 PMMEOJLCPMD; // 0x18
	::RPG::Client::LittleGame::TRFPlayerAnim LICCNAHEIOF; // 0x1C
	::System::Boolean EGMELAHBFNE; // 0x20
	::System::Boolean PEMJNCFJKNA; // 0x21
	::System::Boolean PCCMHHFHKLB; // 0x22
	::RPG::Client::LittleGame::TRFMoveState MEPFOEEGBEA; // 0x24
	::System::Single NGFAGMJHKJO; // 0x28
	::System::Boolean EKGDOELGLFK; // 0x2C
	::System::Boolean DMFIBBAJPJD; // 0x2D
	::System::UInt32 LGIPHLCNMMN; // 0x30
	::RPG::Client::LittleGame::TRFPlayerAnim CNHAONDCHBI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48948A8249D14CAF__CTOR_OFFSET))(this);
	}
};
