#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5C7F69784A5C81DE_2_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x191580B0)
#define CLASS_1_5C7F69784A5C81DE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19158130)

inline static constexpr unsigned int Class_1_5C7F69784A5C81DE_2_TypeDefinitionIndex = 56262;

class Class_1_5C7F69784A5C81DE_2 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint KOBHALBKDLJ; // 0x10
	::RPG::GameCore::FixPoint NIADOIEAEIM; // 0x18
	::System::Boolean AHAELEIHCON; // 0x20
	::System::Boolean LCGOLPNDHLJ; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE_2__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE_2_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
