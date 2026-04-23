#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3897C88E8C59E725.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_2_F6CE8810D81FA7B6_METHOD_2_045CB007DDB51050_OFFSET UNITYSDK_OFFSET(0x12486460)
#define CLASS_2_F6CE8810D81FA7B6_METHOD_2_4B0177E3C38C142D_OFFSET UNITYSDK_OFFSET(0x124860F0)
#define CLASS_2_F6CE8810D81FA7B6_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x12485AF0)
#define CLASS_2_F6CE8810D81FA7B6_METHOD_2_BD58BB5B9815571A_OFFSET UNITYSDK_OFFSET(0x12485F90)
#define CLASS_2_F6CE8810D81FA7B6_METHOD_2_FCE637BB03E20D43_OFFSET UNITYSDK_OFFSET(0x12486220)
#define CLASS_2_F6CE8810D81FA7B6__CTOR_OFFSET UNITYSDK_OFFSET(0x12485A40)

inline static constexpr unsigned int Class_2_F6CE8810D81FA7B6_TypeDefinitionIndex = 59965;

class Class_2_F6CE8810D81FA7B6 : public ::Class_1_3897C88E8C59E725
{
public:
	::Class_0_16E4307DCC419505_722* Field_2_1; // 0x20
	::RPG::Client::GridFightRole* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_BD58BB5B9815571A(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6_METHOD_2_BD58BB5B9815571A_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCE637BB03E20D43(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6_METHOD_2_FCE637BB03E20D43_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_045CB007DDB51050(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6_METHOD_2_045CB007DDB51050_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B0177E3C38C142D(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6_METHOD_2_4B0177E3C38C142D_OFFSET))(this, a1, a2, a3);
	}
};
