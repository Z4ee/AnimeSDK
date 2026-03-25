#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5C7F69784A5C81DE_2_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x8C23C90)
#define CLASS_1_5C7F69784A5C81DE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8C23D00)

inline static constexpr unsigned int Class_1_5C7F69784A5C81DE_2_TypeDefinitionIndex = 44922;

class Class_1_5C7F69784A5C81DE_2 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_3; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::RPG::GameCore::FixPoint Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE_2__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE_2_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
