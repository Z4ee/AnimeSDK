#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_761;

#define CLASS_1_A90F67CF3F5F5D0E_2_METHOD_1_3B3329EAC570B92F_OFFSET UNITYSDK_OFFSET(0x13F1E870)
#define CLASS_1_A90F67CF3F5F5D0E_2_METHOD_1_D0D60FBEF89259B3_OFFSET UNITYSDK_OFFSET(0x13F1EB00)
#define CLASS_1_A90F67CF3F5F5D0E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1E860)

inline static constexpr unsigned int Class_1_A90F67CF3F5F5D0E_2_TypeDefinitionIndex = 62606;

class Class_1_A90F67CF3F5F5D0E_2 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType JCHIBAFOHOB; // 0x10
	::RPG::GameCore::AvatarPropertyType PHEGHDPHALH; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_2__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_3B3329EAC570B92F(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_761* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_2_METHOD_1_3B3329EAC570B92F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_D0D60FBEF89259B3(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_761* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_2_METHOD_1_D0D60FBEF89259B3_OFFSET))(this, a1, a2);
	}
};
