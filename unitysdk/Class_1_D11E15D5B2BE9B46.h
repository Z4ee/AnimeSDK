#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_761;

#define CLASS_1_D11E15D5B2BE9B46_METHOD_1_36F0D38B33C83D46_OFFSET UNITYSDK_OFFSET(0x1851DF30)
#define CLASS_1_D11E15D5B2BE9B46_METHOD_1_A37BFD7048166D6F_OFFSET UNITYSDK_OFFSET(0x1851E290)
#define CLASS_1_D11E15D5B2BE9B46__CTOR_OFFSET UNITYSDK_OFFSET(0x1851DF20)

inline static constexpr unsigned int Class_1_D11E15D5B2BE9B46_TypeDefinitionIndex = 62607;

class Class_1_D11E15D5B2BE9B46 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* KGLOIHNOFCM; // 0x10
	::RPG::GameCore::AvatarPropertyType KALLAOMAHEB; // 0x18

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_D11E15D5B2BE9B46__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_36F0D38B33C83D46(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_761* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_D11E15D5B2BE9B46_METHOD_1_36F0D38B33C83D46_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_A37BFD7048166D6F(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_761* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_D11E15D5B2BE9B46_METHOD_1_A37BFD7048166D6F_OFFSET))(this, a1, a2);
	}
};
