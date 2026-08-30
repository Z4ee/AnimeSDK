#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagContainer.h"

#define CLASS_3_BFA49A3EFEC5745A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C132430)
#define CLASS_3_BFA49A3EFEC5745A_METHOD_3_991DF666F365930A_OFFSET UNITYSDK_OFFSET(0x1C132480)
#define CLASS_3_BFA49A3EFEC5745A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1325F0)

inline static constexpr unsigned int Class_3_BFA49A3EFEC5745A_TypeDefinitionIndex = 40446;

class Class_3_BFA49A3EFEC5745A : public ::RPG::GameCore::HoyoTagContainer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_3_991DF666F365930A(::RPG::GameCore::HoyoTagContainer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A_METHOD_3_991DF666F365930A_OFFSET))(this, a1);
	}
};
