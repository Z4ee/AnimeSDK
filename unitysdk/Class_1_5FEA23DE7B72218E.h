#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/PropSteerTarget.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_6;
class Class_3_CD04D3296DF4C842_7;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5FEA23DE7B72218E__CTOR_OFFSET UNITYSDK_OFFSET(0x15E32A00)

inline static constexpr unsigned int Class_1_5FEA23DE7B72218E_TypeDefinitionIndex = 57532;

class Class_1_5FEA23DE7B72218E : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_6* MGJLINFADJK; // 0x10
	::Class_3_CD04D3296DF4C842_7* AIBLKCJHCCC; // 0x18
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x20
	::System::Single BKMEAGIICGI; // 0x28
	::RPG::GameCore::PropSteerMode FCGFFAJIBKA; // 0x2C
	::System::Boolean LGGDBEDMNMB; // 0x30
	::System::Boolean HEEFOCEALFJ; // 0x31
	::System::Single IEHPFADHJFD; // 0x34
	::System::Single HHPCBFFNBIO; // 0x38
	::System::Single GCJMFBKLGHI; // 0x3C
	::System::Single CONJAMJKHBI; // 0x40
	::RPG::GameCore::PropSteerTarget HILNFHCPEAD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEA23DE7B72218E__CTOR_OFFSET))(this);
	}
};
