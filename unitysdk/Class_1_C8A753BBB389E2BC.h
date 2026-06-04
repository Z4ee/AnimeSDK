#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client { class ElfOrderInfo; }
namespace RPG::Client { class ElfRestaurantDrinkRecipeData; }
namespace RPG::Client { class ElfRestaurantManageGameplayModel; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8A753BBB389E2BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD0C2D0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_00CBB4EE6BF011A6_OFFSET UNITYSDK_OFFSET(0xAD0D3D0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xAD0D6A0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_08BBACE844405300_1_OFFSET UNITYSDK_OFFSET(0xAD0D6F0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xAD0C3D0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0xAD0E120)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0xAD0C1E0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1C08363C60C12B03_OFFSET UNITYSDK_OFFSET(0xAD0C850)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1DDBEA988EF4C0FE_OFFSET UNITYSDK_OFFSET(0xAD0F230)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1FF0B87A9F818945_1_OFFSET UNITYSDK_OFFSET(0xAD0DCD0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0xAD0C690)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_2317EB5C9D2FB78B_OFFSET UNITYSDK_OFFSET(0xAD0FA30)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_2B95DFB8916D8840_OFFSET UNITYSDK_OFFSET(0xAD0C750)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_2FE633E9B912AB2B_1_OFFSET UNITYSDK_OFFSET(0xAD0E340)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_2FE633E9B912AB2B_OFFSET UNITYSDK_OFFSET(0xAD0D640)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_300112F7DF2360CF_OFFSET UNITYSDK_OFFSET(0xAD0EC10)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_4726614375F6E056_OFFSET UNITYSDK_OFFSET(0xAD0F4F0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_4943333D131692A3_OFFSET UNITYSDK_OFFSET(0xAD0E1D0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_60F2F7BA0E9A9311_OFFSET UNITYSDK_OFFSET(0xAD0D9B0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_620CCF43637F9FA3_OFFSET UNITYSDK_OFFSET(0xAD0CF60)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_63C456B77CF6120F_OFFSET UNITYSDK_OFFSET(0xAD0CC00)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_6950DFC9E62DCDC3_1_OFFSET UNITYSDK_OFFSET(0xAD0D2E0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0xAD0CE70)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_6D73178A7125F75F_OFFSET UNITYSDK_OFFSET(0xAD0EEE0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_80110E81EC2C3070_OFFSET UNITYSDK_OFFSET(0xAD0D280)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0xAD10130)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_86DB4D5B9ABD2587_OFFSET UNITYSDK_OFFSET(0xAD0DD90)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_91D737883517099B_OFFSET UNITYSDK_OFFSET(0xAD0DE80)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_938A06BDBC11ECCB_OFFSET UNITYSDK_OFFSET(0xAD0EF90)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xAD10000)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_E2E28B436AE7DD71_OFFSET UNITYSDK_OFFSET(0xAD0E600)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_E701AD3BA963B40A_OFFSET UNITYSDK_OFFSET(0xAD0FCB0)
#define CLASS_1_C8A753BBB389E2BC_METHOD_1_F54B059B4E668D21_OFFSET UNITYSDK_OFFSET(0xAD0E890)
#define CLASS_1_C8A753BBB389E2BC__CTOR_OFFSET UNITYSDK_OFFSET(0xAD0C120)

inline static constexpr unsigned int Class_1_C8A753BBB389E2BC_TypeDefinitionIndex = 71779;

class Class_1_C8A753BBB389E2BC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_0; // 0x10
	::RPG::Client::ElfRestaurantModule* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Field_1_2; // 0x20
	::Class_3_F4528A5C0F861AF2* Field_1_3; // 0x28
	::Class_2_80F8710F847F1248* Field_1_4; // 0x30

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_80F8710F847F1248* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_80F8710F847F1248*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Boolean Method_1_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1FF0B87A9F818945_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_1_2B95DFB8916D8840(::System::UInt32 a1)
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_2B95DFB8916D8840_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_1_1C08363C60C12B03()
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1C08363C60C12B03_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Method_1_63C456B77CF6120F()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_63C456B77CF6120F_OFFSET))(this);
	}

	::System::Void Method_1_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_620CCF43637F9FA3(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_620CCF43637F9FA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6950DFC9E62DCDC3_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_6950DFC9E62DCDC3_1_OFFSET))(this, a1);
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

	::System::Void Method_1_08BBACE844405300_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_08BBACE844405300_1_OFFSET))(this);
	}

	::System::Void Method_1_60F2F7BA0E9A9311(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_60F2F7BA0E9A9311_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1FF0B87A9F818945_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1FF0B87A9F818945_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_86DB4D5B9ABD2587(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_86DB4D5B9ABD2587_OFFSET))(this, a1);
	}

	::System::Void Method_1_4943333D131692A3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_4943333D131692A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FE633E9B912AB2B_1(::RPG::Client::ElfRestaurantRecipeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_2FE633E9B912AB2B_1_OFFSET))(this, a1);
	}

	::RPG::Client::ElfOrderInfo* Method_1_E2E28B436AE7DD71()
	{
		return ((::RPG::Client::ElfOrderInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_E2E28B436AE7DD71_OFFSET))(this);
	}

	::System::Void Method_1_F54B059B4E668D21(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_F54B059B4E668D21_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_1_300112F7DF2360CF(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_300112F7DF2360CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_91D737883517099B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_91D737883517099B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_1_6D73178A7125F75F(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_6D73178A7125F75F_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_1_938A06BDBC11ECCB(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_938A06BDBC11ECCB_OFFSET))(this, a1);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_1_1DDBEA988EF4C0FE()
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8A753BBB389E2BC_METHOD_1_1DDBEA988EF4C0FE_OFFSET))(this);
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
