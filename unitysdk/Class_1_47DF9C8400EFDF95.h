#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OnHitAnimType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_47DF9C8400EFDF95_METHOD_1_491E0EC8A9D6380A_1_OFFSET UNITYSDK_OFFSET(0x15798EC0)
#define CLASS_1_47DF9C8400EFDF95_METHOD_1_491E0EC8A9D6380A_2_OFFSET UNITYSDK_OFFSET(0x15798F10)
#define CLASS_1_47DF9C8400EFDF95_METHOD_1_491E0EC8A9D6380A_OFFSET UNITYSDK_OFFSET(0x15798E70)

inline static constexpr unsigned int Class_1_47DF9C8400EFDF95_TypeDefinitionIndex = 56120;

class Class_1_47DF9C8400EFDF95 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_491E0EC8A9D6380A(::RPG::GameCore::OnHitAnimType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + CLASS_1_47DF9C8400EFDF95_METHOD_1_491E0EC8A9D6380A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_491E0EC8A9D6380A_1(::RPG::GameCore::OnHitAnimType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + CLASS_1_47DF9C8400EFDF95_METHOD_1_491E0EC8A9D6380A_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_491E0EC8A9D6380A_2(::RPG::GameCore::OnHitAnimType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + CLASS_1_47DF9C8400EFDF95_METHOD_1_491E0EC8A9D6380A_2_OFFSET))(a1);
	}
};
