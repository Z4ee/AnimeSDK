#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupStateType.h"

class Class_0_16E4307DCC419505_425;
class Class_1_F44524D91BEABB41_2;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_5E5F8EB9A97B62BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165A48A0)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x165A47A0)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_536C2E82540C2DBA_OFFSET UNITYSDK_OFFSET(0x165A4ED0)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x165A5000)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x165A4A50)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_95E3CC00A2E05FB7_OFFSET UNITYSDK_OFFSET(0x165A4C70)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x165A5260)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x165A51F0)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x165A5320)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x165A4E80)
#define CLASS_2_5E5F8EB9A97B62BD_METHOD_2_E70E7CFB1DF7C909_OFFSET UNITYSDK_OFFSET(0x165A5310)
#define CLASS_2_5E5F8EB9A97B62BD_TICK_OFFSET UNITYSDK_OFFSET(0x165A49F0)
#define CLASS_2_5E5F8EB9A97B62BD__CTOR_OFFSET UNITYSDK_OFFSET(0x165A5330)

inline static constexpr unsigned int Class_2_5E5F8EB9A97B62BD_TypeDefinitionIndex = 54524;

class Class_2_5E5F8EB9A97B62BD : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F44524D91BEABB41_2*>* Field_2_1; // 0x20
	::RPG::GameCore::GroupStateType Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_95E3CC00A2E05FB7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_95E3CC00A2E05FB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_536C2E82540C2DBA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_536C2E82540C2DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupStateType Method_2_E70E7CFB1DF7C909()
	{
		return ((::RPG::GameCore::GroupStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_E70E7CFB1DF7C909_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E5F8EB9A97B62BD_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};
