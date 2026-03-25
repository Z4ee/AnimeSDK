#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_315842A41C3BE9C8;
class Class_1_83D980B81C9B9AFA;
class Class_1_9CBC71DC5240DC00;
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

#define CLASS_2_70D507E43F3FAFF3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88907E0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_05F15A2DAB4BA5AD_OFFSET UNITYSDK_OFFSET(0x888FB10)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x888BD10)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x888DA40)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_1086B8B33CA0A319_OFFSET UNITYSDK_OFFSET(0x8890670)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_11776D8D4AEF8BEE_OFFSET UNITYSDK_OFFSET(0x888FD60)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x888BDA0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x8890AC0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x88909A0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x888EF70)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_38D81F9E362CF35C_OFFSET UNITYSDK_OFFSET(0x888F620)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_39A9E7A6847B8B0F_OFFSET UNITYSDK_OFFSET(0x888ED90)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x888F3F0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x88908F0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_3D89102E85987FAC_1_OFFSET UNITYSDK_OFFSET(0x888E100)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_3D89102E85987FAC_OFFSET UNITYSDK_OFFSET(0x888D5F0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_541B5DE9E658CF03_OFFSET UNITYSDK_OFFSET(0x888FFD0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x888BA10)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_70CB555FD426FDA7_OFFSET UNITYSDK_OFFSET(0x8890530)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_72CC712D81A18439_OFFSET UNITYSDK_OFFSET(0x888E550)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x888D9A0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x8890940)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x8890A00)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_7E0A96D0AB230BD8_OFFSET UNITYSDK_OFFSET(0x888D330)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_81461E2F8725B5EF_OFFSET UNITYSDK_OFFSET(0x88906D0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x888D580)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_907607F05D9A4A91_OFFSET UNITYSDK_OFFSET(0x888DBD0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8890CA0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_99B15DAABB778269_OFFSET UNITYSDK_OFFSET(0x888FF10)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x888C6D0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_AB59E7468355F281_OFFSET UNITYSDK_OFFSET(0x8890490)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x8890770)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_B5C978F0E3674B32_OFFSET UNITYSDK_OFFSET(0x888E3A0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_BAB8431B52287D95_OFFSET UNITYSDK_OFFSET(0x888F140)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_C436324892F7DDA6_OFFSET UNITYSDK_OFFSET(0x888D2A0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x888BDF0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_C62333DF065C5B45_OFFSET UNITYSDK_OFFSET(0x8890190)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0x888F840)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_C9CEF9E94CA34861_OFFSET UNITYSDK_OFFSET(0x8890360)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8890850)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0x888F280)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x888EB10)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_DCD9AD0982D56B4C_OFFSET UNITYSDK_OFFSET(0x888BBE0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_E08102204E165BC0_OFFSET UNITYSDK_OFFSET(0x888BB90)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x888E7E0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x8890890)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x888F2F0)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_EE501EC564B46912_OFFSET UNITYSDK_OFFSET(0x888E400)
#define CLASS_2_70D507E43F3FAFF3_METHOD_2_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x888E880)
#define CLASS_2_70D507E43F3FAFF3__CTOR_OFFSET UNITYSDK_OFFSET(0x8890B20)
#define CLASS_2_70D507E43F3FAFF3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8890D10)

inline static constexpr unsigned int Class_2_70D507E43F3FAFF3_TypeDefinitionIndex = 57166;

class Class_2_70D507E43F3FAFF3 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::System::Byte>* Field_2_12; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Byte>* Field_2_11; // 0x20
	::RPG::GameCore::GameEntity* Field_2_10; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Texture*>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_2_8; // 0x38
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_2_9; // 0x40
	::Il2CppArray<::Class_1_315842A41C3BE9C8*>* Field_2_6; // 0x48
	::UnityEngine::Rect Field_2_4; // 0x50
	::UnityEngine::Rect Field_2_3; // 0x60
	::System::Single Field_2_13; // 0x70
	::System::Boolean Field_2_2; // 0x74
	::System::Boolean Field_2_0; // 0x75
	::System::Boolean Field_2_7; // 0x76
	::System::Boolean Field_2_1; // 0x77

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::Void Method_2_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_A56385E6706FA723_OFFSET))(this);
	}

	::System::Boolean Method_2_C436324892F7DDA6(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_C436324892F7DDA6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7E0A96D0AB230BD8(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_7E0A96D0AB230BD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_3D89102E85987FAC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_3D89102E85987FAC_OFFSET))(this, a1);
	}

	::System::Void Method_2_907607F05D9A4A91(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_907607F05D9A4A91_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D89102E85987FAC_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_3D89102E85987FAC_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* Method_2_EE501EC564B46912(::Class_1_83D980B81C9B9AFA* a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>*(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_EE501EC564B46912_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_B5C978F0E3674B32(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_B5C978F0E3674B32_OFFSET))(this, a1);
	}

	::System::Void Method_2_72CC712D81A18439(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_72CC712D81A18439_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Void Method_2_39A9E7A6847B8B0F(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_39A9E7A6847B8B0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DCD9AD0982D56B4C(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_DCD9AD0982D56B4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_38D81F9E362CF35C(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_38D81F9E362CF35C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_05F15A2DAB4BA5AD(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_05F15A2DAB4BA5AD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_C72B925A491E9859_OFFSET))(this);
	}

	::System::Void Method_2_11776D8D4AEF8BEE(::Il2CppArray<::System::String*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_11776D8D4AEF8BEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BAB8431B52287D95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_BAB8431B52287D95_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_541B5DE9E658CF03(::RPG::Client::MonoEffect* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_541B5DE9E658CF03_OFFSET))(this, a1, a2);
	}

	::System::Byte Method_2_C9CEF9E94CA34861(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_C9CEF9E94CA34861_OFFSET))(this, a1);
	}

	::System::Void Method_2_99B15DAABB778269(::UnityEngine::GameObject* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_99B15DAABB778269_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB59E7468355F281(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_AB59E7468355F281_OFFSET))(this, a1);
	}

	::System::Void Method_2_C62333DF065C5B45(::Class_1_9CBC71DC5240DC00* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_C62333DF065C5B45_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_70CB555FD426FDA7(::Class_1_9CBC71DC5240DC00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_70CB555FD426FDA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086B8B33CA0A319(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_1086B8B33CA0A319_OFFSET))(this, a1);
	}

	::System::Void Method_2_81461E2F8725B5EF(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_81461E2F8725B5EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMultiCRPVCamera* Method_2_E08102204E165BC0()
	{
		return ((::RPG::Client::MonoEffectPluginMultiCRPVCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_E08102204E165BC0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D507E43F3FAFF3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
