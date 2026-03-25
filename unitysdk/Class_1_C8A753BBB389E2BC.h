#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client { class ElfOrderInfo; }
namespace RPG::Client { class ElfRestaurantDrinkRecipeData; }
namespace RPG::Client { class ElfRestaurantManageGameplayModel; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8A753BBB389E2BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11608AC0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_00CBB4EE6BF011A6_OFFSET UNITYSDK_OFFSET(0x11609B70)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x11609DF0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x116089F0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x1160A910)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1D804E8CA2BBAD76_OFFSET UNITYSDK_OFFSET(0x1160B5E0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1F7C061BBD6A6514_OFFSET UNITYSDK_OFFSET(0x1160B6C0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1FC78E831B3E774E_OFFSET UNITYSDK_OFFSET(0x1160B060)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_2317EB5C9D2FB78B_OFFSET UNITYSDK_OFFSET(0x1160C0F0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_266F6B031D716710_OFFSET UNITYSDK_OFFSET(0x11608F70)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_2FE633E9B912AB2B_OFFSET UNITYSDK_OFFSET(0x11609D90)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_311AA04C08152CC6_OFFSET UNITYSDK_OFFSET(0x1160B990)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_39B84B96783D6F4C_OFFSET UNITYSDK_OFFSET(0x1160A6A0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_41EC2CDB680DDA35_OFFSET UNITYSDK_OFFSET(0x116097B0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_4726614375F6E056_OFFSET UNITYSDK_OFFSET(0x1160BBE0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_4943333D131692A3_OFFSET UNITYSDK_OFFSET(0x1160A9C0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_49EE4C85E90DB1F8_OFFSET UNITYSDK_OFFSET(0x1160B340)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_6B2E3B9BB56DDF1D_OFFSET UNITYSDK_OFFSET(0x11609490)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_80110E81EC2C3070_OFFSET UNITYSDK_OFFSET(0x1160C9A0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_8231AFE9C45B461F_1_OFFSET UNITYSDK_OFFSET(0x11609A80)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_8231AFE9C45B461F_OFFSET UNITYSDK_OFFSET(0x116096C0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_825CC99DD653DEE0_1_OFFSET UNITYSDK_OFFSET(0x11609E40)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x11608BA0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x1160C4A0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_9F2E6C28EBE466FC_1_OFFSET UNITYSDK_OFFSET(0x1160A400)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_9F2E6C28EBE466FC_OFFSET UNITYSDK_OFFSET(0x11608E80)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x1160C370)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_B30A4B8CD48297E8_OFFSET UNITYSDK_OFFSET(0x1160A120)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_B3F5B9C1ABFC2E61_OFFSET UNITYSDK_OFFSET(0x1160A4F0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_C3563E17A15DFA23_OFFSET UNITYSDK_OFFSET(0x1160ADD0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_D4CD3E88264018B2_OFFSET UNITYSDK_OFFSET(0x116090A0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_DB3638D19445A8C6_OFFSET UNITYSDK_OFFSET(0x1160AB60)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_E701AD3BA963B40A_OFFSET UNITYSDK_OFFSET(0x1160C6A0)
#define CLASS_1_C8A753BBB389E2BC__CTOR_OFFSET UNITYSDK_OFFSET(0x11608930)

inline static constexpr unsigned int Class_1_C8A753BBB389E2BC_TypeDefinitionIndex = 62917;

class Class_1_C8A753BBB389E2BC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_0; // 0x18
	::Class_2_43D1AA62A6D00FFF* Field_1_3; // 0x20
	::RPG::Client::ElfRestaurantModule* Field_1_2; // 0x28
	::Class_3_F4528A5C0F861AF2* Field_1_4; // 0x30

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_43D1AA62A6D00FFF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Boolean Method_1_9F2E6C28EBE466FC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_9F2E6C28EBE466FC_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_1_266F6B031D716710(::System::UInt32 a1)
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_266F6B031D716710_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_1_D4CD3E88264018B2()
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_D4CD3E88264018B2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Method_1_6B2E3B9BB56DDF1D()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_6B2E3B9BB56DDF1D_OFFSET))(this);
	}

	::System::Void Method_1_8231AFE9C45B461F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_8231AFE9C45B461F_OFFSET))(this, a1);
	}

	::System::Void Method_1_41EC2CDB680DDA35(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_41EC2CDB680DDA35_OFFSET))(this, a1);
	}

	::System::Void Method_1_8231AFE9C45B461F_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_8231AFE9C45B461F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_00CBB4EE6BF011A6(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_00CBB4EE6BF011A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FE633E9B912AB2B(::RPG::Client::ElfRestaurantRecipeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_2FE633E9B912AB2B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_825CC99DD653DEE0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_825CC99DD653DEE0_1_OFFSET))(this);
	}

	::System::Void Method_1_B30A4B8CD48297E8(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_B30A4B8CD48297E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9F2E6C28EBE466FC_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_9F2E6C28EBE466FC_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B3F5B9C1ABFC2E61(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_B3F5B9C1ABFC2E61_OFFSET))(this, a1);
	}

	::System::Void Method_1_4943333D131692A3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_4943333D131692A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB3638D19445A8C6(::RPG::Client::ElfRestaurantRecipeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_DB3638D19445A8C6_OFFSET))(this, a1);
	}

	::RPG::Client::ElfOrderInfo* Method_1_C3563E17A15DFA23()
	{
		return ((::RPG::Client::ElfOrderInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_C3563E17A15DFA23_OFFSET))(this);
	}

	::System::Void Method_1_1FC78E831B3E774E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1FC78E831B3E774E_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_1_49EE4C85E90DB1F8(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_49EE4C85E90DB1F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_39B84B96783D6F4C(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_39B84B96783D6F4C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_1_1D804E8CA2BBAD76(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1D804E8CA2BBAD76_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_1_1F7C061BBD6A6514(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1F7C061BBD6A6514_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_1_311AA04C08152CC6()
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_311AA04C08152CC6_OFFSET))(this);
	}

	::System::Void Method_1_4726614375F6E056(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_4726614375F6E056_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2317EB5C9D2FB78B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_2317EB5C9D2FB78B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_A871253BFD471C99_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Boolean Method_1_E701AD3BA963B40A(::RPG::Client::ElfRestaurantDrinkRecipeData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantDrinkRecipeData*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_E701AD3BA963B40A_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantManageGameplayModel* Method_1_80110E81EC2C3070()
	{
		return ((::RPG::Client::ElfRestaurantManageGameplayModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_80110E81EC2C3070_OFFSET))(this);
	}
};
