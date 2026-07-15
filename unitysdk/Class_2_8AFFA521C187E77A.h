#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_1_1342B57709FD7AC5;
class Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginSimpleCRPVCamera; }
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_8AFFA521C187E77A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14576540)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x186A51E0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x186A59B0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_1086B8B33CA0A319_OFFSET UNITYSDK_OFFSET(0x186A50E0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_10F468E09368C118_OFFSET UNITYSDK_OFFSET(0x14576DD0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_11776D8D4AEF8BEE_OFFSET UNITYSDK_OFFSET(0x14577830)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_1AAAE29F4DB571CA_OFFSET UNITYSDK_OFFSET(0x14576B20)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_1FC888342BFEBB7D_OFFSET UNITYSDK_OFFSET(0x186A6310)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14576CE0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x14576640)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_3EAAB2553A6018C4_OFFSET UNITYSDK_OFFSET(0x14576910)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_541B5DE9E658CF03_OFFSET UNITYSDK_OFFSET(0x14577A90)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_59DB46A82A8D8894_OFFSET UNITYSDK_OFFSET(0x186A5AC0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_5FAAFA9D02942748_OFFSET UNITYSDK_OFFSET(0x186A5140)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_6E8AB49A28A57BBE_OFFSET UNITYSDK_OFFSET(0x186A4D80)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_70860E3B286CA2A0_OFFSET UNITYSDK_OFFSET(0x145779D0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_722BBCF8324B862E_OFFSET UNITYSDK_OFFSET(0x145772D0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_8192D6CC287E5158_OFFSET UNITYSDK_OFFSET(0x186A4B80)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_A40FA560F023DE98_OFFSET UNITYSDK_OFFSET(0x14576960)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x14576D40)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_AA17D0C06E9031F7_OFFSET UNITYSDK_OFFSET(0x14576E20)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x145764D0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_B51E94247E546AB8_OFFSET UNITYSDK_OFFSET(0x186A4EE0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_BB2E7348C77A526F_OFFSET UNITYSDK_OFFSET(0x186A6600)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_BB881F05E41D3A04_1_OFFSET UNITYSDK_OFFSET(0x145768C0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x145765F0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145765B0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x14576C70)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_CFAA6DE4DA2C33FE_OFFSET UNITYSDK_OFFSET(0x145776E0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x145771B0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_D254E1404B6E78CF_OFFSET UNITYSDK_OFFSET(0x186A5CA0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x186A61B0)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_E20282B4D9F8B0D8_OFFSET UNITYSDK_OFFSET(0x14577C50)
#define CLASS_2_8AFFA521C187E77A_METHOD_2_FE52BE021CC0FFD6_OFFSET UNITYSDK_OFFSET(0x186A5D30)
#define CLASS_2_8AFFA521C187E77A__CTOR_OFFSET UNITYSDK_OFFSET(0x186A6A40)

inline static constexpr unsigned int Class_2_8AFFA521C187E77A_TypeDefinitionIndex = 66764;

class Class_2_8AFFA521C187E77A : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Byte>* Field_2_0; // 0x18
	::Il2CppArray<::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7*>* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2C
	::System::Int32 Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_BB881F05E41D3A04_1_OFFSET))(this);
	}

	::System::Void Method_2_3EAAB2553A6018C4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_3EAAB2553A6018C4_OFFSET))(this);
	}

	::System::Void Method_2_1AAAE29F4DB571CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_1AAAE29F4DB571CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_AA041EC2967F998A_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSimpleCRPVCamera* Method_2_10F468E09368C118()
	{
		return ((::RPG::Client::MonoEffectPluginSimpleCRPVCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_10F468E09368C118_OFFSET))(this);
	}

	::System::Void Method_2_A40FA560F023DE98()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_A40FA560F023DE98_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_722BBCF8324B862E(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CRPVirtualCameraConfigList*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CRPVirtualCameraConfigList*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_722BBCF8324B862E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CFAA6DE4DA2C33FE(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_CFAA6DE4DA2C33FE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_11776D8D4AEF8BEE(::Il2CppArray<::System::String*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_11776D8D4AEF8BEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA17D0C06E9031F7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_AA17D0C06E9031F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_541B5DE9E658CF03(::RPG::Client::MonoEffect* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_541B5DE9E658CF03_OFFSET))(this, a1, a2);
	}

	::System::Byte Method_2_E20282B4D9F8B0D8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_E20282B4D9F8B0D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_70860E3B286CA2A0(::UnityEngine::GameObject* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_70860E3B286CA2A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8192D6CC287E5158(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_8192D6CC287E5158_OFFSET))(this, a1);
	}

	::System::Void Method_2_B51E94247E546AB8(::Class_1_1342B57709FD7AC5* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_B51E94247E546AB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E8AB49A28A57BBE(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_6E8AB49A28A57BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086B8B33CA0A319(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_1086B8B33CA0A319_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FAAFA9D02942748(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_5FAAFA9D02942748_OFFSET))(this, a1);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_2_D254E1404B6E78CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_D254E1404B6E78CF_OFFSET))(this);
	}

	::System::Void Method_2_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_2_1FC888342BFEBB7D(::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_1FC888342BFEBB7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB2E7348C77A526F(::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_BB2E7348C77A526F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE52BE021CC0FFD6(::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7*))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_FE52BE021CC0FFD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_59DB46A82A8D8894(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_METHOD_2_59DB46A82A8D8894_OFFSET))(this, a1, a2);
	}
};
