#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_1342B57709FD7AC5;
class Class_1_315842A41C3BE9C8;
class Class_1_83D980B81C9B9AFA;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMultiCRPVCamera; }
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_AEB4FE6DE320B5F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FAC0B0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x16FA9220)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x16FAC210)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_1086B8B33CA0A319_OFFSET UNITYSDK_OFFSET(0x16FABF40)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_11776D8D4AEF8BEE_OFFSET UNITYSDK_OFFSET(0x16FAB5E0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_1B7B5B001FBF0591_OFFSET UNITYSDK_OFFSET(0x16FAA540)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_1BDF6EB16A0CC5FB_OFFSET UNITYSDK_OFFSET(0x16FA97D0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x16FAC390)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16FAC270)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x16FAA730)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x16FAB040)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_36E2D900C7A8E114_OFFSET UNITYSDK_OFFSET(0x16FA7790)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_3E7B642BA6BAFC32_OFFSET UNITYSDK_OFFSET(0x16FA9B90)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x16FA9F70)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_4BE2083AE7C1D379_OFFSET UNITYSDK_OFFSET(0x16FAB3F0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_541B5DE9E658CF03_OFFSET UNITYSDK_OFFSET(0x16FAB840)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_59DB46A82A8D8894_OFFSET UNITYSDK_OFFSET(0x16FA7580)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_5FAAFA9D02942748_OFFSET UNITYSDK_OFFSET(0x16FABFA0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x16FA7380)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16FAC1C0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6B9B85E02D6F6531_OFFSET UNITYSDK_OFFSET(0x16FA8AA0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6E8AB49A28A57BBE_OFFSET UNITYSDK_OFFSET(0x16FABDE0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_70860E3B286CA2A0_OFFSET UNITYSDK_OFFSET(0x16FAB780)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x16FA9180)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x16FAA030)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x16FAC2D0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_8192D6CC287E5158_OFFSET UNITYSDK_OFFSET(0x16FABD40)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x16FAAC90)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16FA8DC0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_9387A73F5A82B13C_OFFSET UNITYSDK_OFFSET(0x16FA8B50)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_93BEF0C7438E4DEF_OFFSET UNITYSDK_OFFSET(0x16FA7F60)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_A941578150D4B0D3_OFFSET UNITYSDK_OFFSET(0x16FABC00)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x16FA76B0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x16FAC040)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_B51E94247E546AB8_OFFSET UNITYSDK_OFFSET(0x16FABA00)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_B5C978F0E3674B32_OFFSET UNITYSDK_OFFSET(0x16FA9B30)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FAC120)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x16FAA2C0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x16FAAB70)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_D59E4F46FDF90B32_OFFSET UNITYSDK_OFFSET(0x16FA9390)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_D755B8CE36940DF5_OFFSET UNITYSDK_OFFSET(0x16FA7740)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_DAACA11DC996023D_OFFSET UNITYSDK_OFFSET(0x16FAA8F0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_E6D819EBB1FA739B_OFFSET UNITYSDK_OFFSET(0x16FA7530)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_EBF99FA116B7F1C8_OFFSET UNITYSDK_OFFSET(0x16FAAAB0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_F5E011FAC512A7AF_OFFSET UNITYSDK_OFFSET(0x16FA8E30)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_FCF697C2DA12210F_OFFSET UNITYSDK_OFFSET(0x16FAAEB0)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0x16FAC160)
#define CLASS_2_AEB4FE6DE320B5F5_METHOD_2_FFA4184638134532_OFFSET UNITYSDK_OFFSET(0x16FA9C60)
#define CLASS_2_AEB4FE6DE320B5F5__CTOR_OFFSET UNITYSDK_OFFSET(0x16FAC3F0)

inline static constexpr unsigned int Class_2_AEB4FE6DE320B5F5_TypeDefinitionIndex = 66749;

class Class_2_AEB4FE6DE320B5F5 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::System::Byte>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Texture*>* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Byte>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_5; // 0x40
	::Il2CppArray<::Class_1_315842A41C3BE9C8*>* Field_2_6; // 0x48
	::UnityEngine::Rect Field_2_7; // 0x50
	::UnityEngine::Rect Field_2_8; // 0x60
	::System::Single Field_2_9; // 0x70
	::System::Boolean Field_2_10; // 0x74
	::System::Boolean Field_2_11; // 0x75
	::System::Boolean Field_2_12; // 0x76
	::System::Boolean Field_2_13; // 0x77

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_D755B8CE36940DF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_D755B8CE36940DF5_OFFSET))(this);
	}

	::System::Void Method_2_36E2D900C7A8E114()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_36E2D900C7A8E114_OFFSET))(this);
	}

	::System::Void Method_2_93BEF0C7438E4DEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_93BEF0C7438E4DEF_OFFSET))(this);
	}

	::System::Boolean Method_2_6B9B85E02D6F6531(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6B9B85E02D6F6531_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9387A73F5A82B13C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_9387A73F5A82B13C_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_F5E011FAC512A7AF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_F5E011FAC512A7AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_D59E4F46FDF90B32(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_D59E4F46FDF90B32_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BDF6EB16A0CC5FB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_1BDF6EB16A0CC5FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* Method_2_3E7B642BA6BAFC32(::Class_1_83D980B81C9B9AFA* a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>*(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_3E7B642BA6BAFC32_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_B5C978F0E3674B32(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_B5C978F0E3674B32_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFA4184638134532(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_FFA4184638134532_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_78037B64B814568E_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_1B7B5B001FBF0591(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_1B7B5B001FBF0591_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_59DB46A82A8D8894(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_59DB46A82A8D8894_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_FCF697C2DA12210F(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_FCF697C2DA12210F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BE2083AE7C1D379(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_4BE2083AE7C1D379_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_11776D8D4AEF8BEE(::Il2CppArray<::System::String*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_11776D8D4AEF8BEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAACA11DC996023D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_DAACA11DC996023D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBF99FA116B7F1C8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_EBF99FA116B7F1C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_541B5DE9E658CF03(::RPG::Client::MonoEffect* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_541B5DE9E658CF03_OFFSET))(this, a1, a2);
	}

	::System::Byte Method_2_A941578150D4B0D3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_A941578150D4B0D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_70860E3B286CA2A0(::UnityEngine::GameObject* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_70860E3B286CA2A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8192D6CC287E5158(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_8192D6CC287E5158_OFFSET))(this, a1);
	}

	::System::Void Method_2_B51E94247E546AB8(::Class_1_1342B57709FD7AC5* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_B51E94247E546AB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E8AB49A28A57BBE(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6E8AB49A28A57BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086B8B33CA0A319(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_1086B8B33CA0A319_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FAAFA9D02942748(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_5FAAFA9D02942748_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_0D8DB2DC8B47A973_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_AA041EC2967F998A_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMultiCRPVCamera* Method_2_E6D819EBB1FA739B()
	{
		return ((::RPG::Client::MonoEffectPluginMultiCRPVCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEB4FE6DE320B5F5_METHOD_2_E6D819EBB1FA739B_OFFSET))(this);
	}
};
