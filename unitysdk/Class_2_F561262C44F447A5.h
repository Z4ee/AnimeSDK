#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8F1752DCDE35E35.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
class Class_2_523C55AEA55804D8;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define CLASS_2_F561262C44F447A5_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xAB992F0)
#define CLASS_2_F561262C44F447A5_METHOD_2_2EEEE009AB302D2C_OFFSET UNITYSDK_OFFSET(0xAB97FA0)
#define CLASS_2_F561262C44F447A5_METHOD_2_352A7BB2FE3D508A_OFFSET UNITYSDK_OFFSET(0xAB990D0)
#define CLASS_2_F561262C44F447A5_METHOD_2_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0xAB99150)
#define CLASS_2_F561262C44F447A5_METHOD_2_8BCB1D18AC37EBFD_OFFSET UNITYSDK_OFFSET(0xAB97B10)
#define CLASS_2_F561262C44F447A5_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xAB97CC0)
#define CLASS_2_F561262C44F447A5_METHOD_2_97ECC44437478FEC_OFFSET UNITYSDK_OFFSET(0xAB977D0)
#define CLASS_2_F561262C44F447A5_METHOD_2_9EF498B1022669D3_OFFSET UNITYSDK_OFFSET(0xAB99410)
#define CLASS_2_F561262C44F447A5_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0xAB98D40)
#define CLASS_2_F561262C44F447A5_METHOD_2_ABF056BF98833431_OFFSET UNITYSDK_OFFSET(0xAB99430)
#define CLASS_2_F561262C44F447A5_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xAB98AB0)
#define CLASS_2_F561262C44F447A5_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xAB97BF0)
#define CLASS_2_F561262C44F447A5_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xAB99440)
#define CLASS_2_F561262C44F447A5_METHOD_2_D3A3FF13616ADE52_OFFSET UNITYSDK_OFFSET(0xAB99250)
#define CLASS_2_F561262C44F447A5_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xAB99420)
#define CLASS_2_F561262C44F447A5_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xAB98F60)
#define CLASS_2_F561262C44F447A5__CTOR_OFFSET UNITYSDK_OFFSET(0xAB97780)

inline static constexpr unsigned int Class_2_F561262C44F447A5_TypeDefinitionIndex = 49021;

class Class_2_F561262C44F447A5 : public ::Class_1_F8F1752DCDE35E35
{
public:
	::Class_2_523C55AEA55804D8* Field_2_0; // 0x80
	::Class_1_60475C2D4D583319* Field_2_1; // 0x88
	::System::Single Field_2_2; // 0x90
	::System::Single Field_2_3; // 0x94
	::System::Single Field_2_4; // 0x98
	::System::Single Field_2_5; // 0x9C
	::UnityEngine::Vector3 Field_2_6; // 0xA0
	::System::Single Field_2_7; // 0xAC
	::System::Single Field_2_8; // 0xB0
	::System::Single Field_2_9; // 0xB4
	::System::Single Field_2_10; // 0xB8
	::System::Single Field_2_11; // 0xBC
	::System::Single Field_2_12; // 0xC0
	::System::Single Field_2_13; // 0xC4
	::RPG::GameCore::CharacterMotionFlag Field_2_14; // 0xC8
	::System::Boolean Field_2_15; // 0xCC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_97ECC44437478FEC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8, ::System::Single a9, ::System::Single a10, ::System::Boolean a11, ::System::Boolean a12, ::RPG::GameCore::AdvancedFollowType a13, ::System::Single a14, ::System::Single a15, ::Il2CppArray<::System::Int32>* a16, ::System::Boolean a17)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_97ECC44437478FEC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_2_8BCB1D18AC37EBFD(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_8BCB1D18AC37EBFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_2EEEE009AB302D2C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_2EEEE009AB302D2C_OFFSET))(this);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_352A7BB2FE3D508A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_352A7BB2FE3D508A_OFFSET))(this);
	}

	::System::Void Method_2_7B5E3B36CA129EB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_7B5E3B36CA129EB3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3A3FF13616ADE52(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_D3A3FF13616ADE52_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EF498B1022669D3(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_9EF498B1022669D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_ABF056BF98833431(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_ABF056BF98833431_OFFSET))(this, a1);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F561262C44F447A5_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
