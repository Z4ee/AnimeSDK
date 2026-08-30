#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_11064A0D75F7D72B__CTOR_OFFSET UNITYSDK_OFFSET(0x135144E0)

inline static constexpr unsigned int Class_1_11064A0D75F7D72B_TypeDefinitionIndex = 55883;

class Class_1_11064A0D75F7D72B : public ::System::Object
{
public:
	::RPG::GameCore::SilverWolf999UltraPropType GMPGDEINODK; // 0x10
	::System::Int32 GMDBHJKEAEI; // 0x14
	::RPG::GameCore::SilverWolf999UltraPropState MEPFOEEGBEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11064A0D75F7D72B__CTOR_OFFSET))(this);
	}
};
