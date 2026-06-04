#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_444617B714068188_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0x13A2E020)
#define CLASS_1_444617B714068188_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x13A2DBF0)
#define CLASS_1_444617B714068188__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2DB10)

inline static constexpr unsigned int Class_1_444617B714068188_TypeDefinitionIndex = 61135;

class Class_1_444617B714068188 : public ::System::Object
{
public:
	::RPG::Client::GridFightTraitElationEffect* Field_1_0; // 0x10
	::Class_1_A05AF49AB4C19659* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_444617B714068188__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_444617B714068188_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_684* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_444617B714068188_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
