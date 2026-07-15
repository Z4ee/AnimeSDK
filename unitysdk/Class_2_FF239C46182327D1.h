#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_FF239C46182327D1_METHOD_2_196090F13B188C5B_OFFSET UNITYSDK_OFFSET(0xE4F81A0)
#define CLASS_2_FF239C46182327D1_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0xE4F8150)
#define CLASS_2_FF239C46182327D1_METHOD_2_D8EC208C9B704270_OFFSET UNITYSDK_OFFSET(0xE4F8310)
#define CLASS_2_FF239C46182327D1__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F8380)

inline static constexpr unsigned int Class_2_FF239C46182327D1_TypeDefinitionIndex = 71445;

class Class_2_FF239C46182327D1 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF239C46182327D1__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF239C46182327D1_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_196090F13B188C5B(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FF239C46182327D1_METHOD_2_196090F13B188C5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8EC208C9B704270(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FF239C46182327D1_METHOD_2_D8EC208C9B704270_OFFSET))(this, a1);
	}
};
