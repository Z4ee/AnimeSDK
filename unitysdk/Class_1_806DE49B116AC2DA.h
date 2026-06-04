#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_806DE49B116AC2DA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA49E090)
#define CLASS_1_806DE49B116AC2DA_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA49E1E0)
#define CLASS_1_806DE49B116AC2DA_METHOD_1_CD210EEA0CFC3079_OFFSET UNITYSDK_OFFSET(0xA49E0E0)
#define CLASS_1_806DE49B116AC2DA__CTOR_OFFSET UNITYSDK_OFFSET(0xA49E230)

inline static constexpr unsigned int Class_1_806DE49B116AC2DA_TypeDefinitionIndex = 73082;

class Class_1_806DE49B116AC2DA : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_806DE49B116AC2DA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_806DE49B116AC2DA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_CD210EEA0CFC3079()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_806DE49B116AC2DA_METHOD_1_CD210EEA0CFC3079_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_806DE49B116AC2DA_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
