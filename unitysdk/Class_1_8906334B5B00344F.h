#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8906334B5B00344F_AutoAbility.h"
#include "unitysdk/System/Object.h"

class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8906334B5B00344F_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD1940D0)
#define CLASS_1_8906334B5B00344F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD193F00)
#define CLASS_1_8906334B5B00344F_METHOD_1_05486BCF5946AD83_OFFSET UNITYSDK_OFFSET(0xD197210)
#define CLASS_1_8906334B5B00344F_METHOD_1_09D9914FBA3C2C09_OFFSET UNITYSDK_OFFSET(0xD1969E0)
#define CLASS_1_8906334B5B00344F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xD193FD0)
#define CLASS_1_8906334B5B00344F_METHOD_1_1D92434C06D27BB9_OFFSET UNITYSDK_OFFSET(0xD195570)
#define CLASS_1_8906334B5B00344F_METHOD_1_3C9E57215DA1A728_OFFSET UNITYSDK_OFFSET(0xD196750)
#define CLASS_1_8906334B5B00344F_METHOD_1_434351DA7926C95F_OFFSET UNITYSDK_OFFSET(0xD1947C0)
#define CLASS_1_8906334B5B00344F_METHOD_1_4481A489F3589C06_OFFSET UNITYSDK_OFFSET(0xD197770)
#define CLASS_1_8906334B5B00344F_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xD194C50)
#define CLASS_1_8906334B5B00344F_METHOD_1_5AC4405D21E0CB77_OFFSET UNITYSDK_OFFSET(0xD195950)
#define CLASS_1_8906334B5B00344F_METHOD_1_80A9C97BC0628707_OFFSET UNITYSDK_OFFSET(0xD196D20)
#define CLASS_1_8906334B5B00344F_METHOD_1_972D2BE391835F50_OFFSET UNITYSDK_OFFSET(0xD196FE0)
#define CLASS_1_8906334B5B00344F_METHOD_1_97E388074CF28F08_OFFSET UNITYSDK_OFFSET(0xD195E70)
#define CLASS_1_8906334B5B00344F_METHOD_1_9DE5F8CBDDB3F937_OFFSET UNITYSDK_OFFSET(0xD196620)
#define CLASS_1_8906334B5B00344F_METHOD_1_A47FE9F975405239_OFFSET UNITYSDK_OFFSET(0xD196090)
#define CLASS_1_8906334B5B00344F_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0xD195290)
#define CLASS_1_8906334B5B00344F_METHOD_1_E1AED71C5974BA40_OFFSET UNITYSDK_OFFSET(0xD196250)
#define CLASS_1_8906334B5B00344F_METHOD_1_EA13D74D301B3FAD_OFFSET UNITYSDK_OFFSET(0xD195BB0)
#define CLASS_1_8906334B5B00344F__CTOR_OFFSET UNITYSDK_OFFSET(0xD193E90)

inline static constexpr unsigned int Class_1_8906334B5B00344F_TypeDefinitionIndex = 71789;

class Class_1_8906334B5B00344F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_0; // 0x10
	::Class_2_80F8710F847F1248* Field_1_1; // 0x18
	::Class_3_F4528A5C0F861AF2* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x30
	::System::Single Field_1_6; // 0x34

	::System::Void _ctor(::Class_2_80F8710F847F1248* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_80F8710F847F1248*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_434351DA7926C95F(::Class_1_8906334B5B00344F_AutoAbility a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8906334B5B00344F_AutoAbility))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_434351DA7926C95F_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D92434C06D27BB9(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_1D92434C06D27BB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}

	::System::Void Method_1_5AC4405D21E0CB77(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_5AC4405D21E0CB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DE5F8CBDDB3F937(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_9DE5F8CBDDB3F937_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EA13D74D301B3FAD(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_EA13D74D301B3FAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A47FE9F975405239(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_A47FE9F975405239_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_97E388074CF28F08(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_97E388074CF28F08_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4481A489F3589C06(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_4481A489F3589C06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E1AED71C5974BA40(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_E1AED71C5974BA40_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_80A9C97BC0628707(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_80A9C97BC0628707_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_972D2BE391835F50(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_972D2BE391835F50_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_05486BCF5946AD83(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_05486BCF5946AD83_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_09D9914FBA3C2C09(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_09D9914FBA3C2C09_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3C9E57215DA1A728(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_3C9E57215DA1A728_OFFSET))(this, a1);
	}
};
