#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CableProcedural; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B92D31ACF788CA3E_CLASS_1_FAD46716BE584497_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18F8A340)
#define CLASS_1_B92D31ACF788CA3E_CLASS_1_FAD46716BE584497_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F8A5C0)
#define CLASS_1_B92D31ACF788CA3E_CLASS_1_FAD46716BE584497__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8A3B0)

inline static constexpr unsigned int Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497_TypeDefinitionIndex = 60593;

class Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
	::RPG::Client::CableProcedural* KAEAHJNDFLM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_CLASS_1_FAD46716BE584497__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_CLASS_1_FAD46716BE584497_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_CLASS_1_FAD46716BE584497_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
