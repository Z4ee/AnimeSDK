#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_FADB1EB203E7136F_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0xC9D4C70)
#define CLASS_2_FADB1EB203E7136F_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xC9D5280)
#define CLASS_2_FADB1EB203E7136F_METHOD_2_FC7D6954D9613E9A_OFFSET UNITYSDK_OFFSET(0xC9D4CC0)
#define CLASS_2_FADB1EB203E7136F__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D5340)

inline static constexpr unsigned int Class_2_FADB1EB203E7136F_TypeDefinitionIndex = 75047;

class Class_2_FADB1EB203E7136F : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADB1EB203E7136F__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADB1EB203E7136F_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_FC7D6954D9613E9A(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FADB1EB203E7136F_METHOD_2_FC7D6954D9613E9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADB1EB203E7136F_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}
};
