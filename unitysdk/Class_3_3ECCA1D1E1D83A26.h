#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DE1F9F8297133D40.h"

namespace RPG::Client::ParkourGame { class ParkourSkillConfig_SuperStar; }

#define CLASS_3_3ECCA1D1E1D83A26_METHOD_3_5A70481D80B46899_OFFSET UNITYSDK_OFFSET(0x185EBBD0)
#define CLASS_3_3ECCA1D1E1D83A26_METHOD_3_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x185EBA50)
#define CLASS_3_3ECCA1D1E1D83A26__CTOR_OFFSET UNITYSDK_OFFSET(0x185EBC50)

inline static constexpr unsigned int Class_3_3ECCA1D1E1D83A26_TypeDefinitionIndex = 70783;

class Class_3_3ECCA1D1E1D83A26 : public ::Class_2_DE1F9F8297133D40
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3ECCA1D1E1D83A26__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3ECCA1D1E1D83A26_METHOD_3_BD3078E21D74E44F_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* Method_3_5A70481D80B46899()
	{
		return ((::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3ECCA1D1E1D83A26_METHOD_3_5A70481D80B46899_OFFSET))(this);
	}
};
