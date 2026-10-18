#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_1342B57709FD7AC5;
class Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A;
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

#define CLASS_2_4F4C9943CC7597CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EDC440)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x15EDF120)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_11776D8D4AEF8BEE_OFFSET UNITYSDK_OFFSET(0x15EDE6F0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_1AAAE29F4DB571CA_OFFSET UNITYSDK_OFFSET(0x15EDCA90)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_1FC888342BFEBB7D_OFFSET UNITYSDK_OFFSET(0x15EDF8B0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15EDD220)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_2E49561549997F9D_OFFSET UNITYSDK_OFFSET(0x15EDF230)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x15EDC540)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_3F8F8461974D0048_OFFSET UNITYSDK_OFFSET(0x15EDFFB0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_4697FE608C1EC6FA_OFFSET UNITYSDK_OFFSET(0x15EDF390)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x15EDC850)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_5FAAFA9D02942748_OFFSET UNITYSDK_OFFSET(0x15EDF080)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x15EDCD20)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_6E8AB49A28A57BBE_OFFSET UNITYSDK_OFFSET(0x15EDEEC0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_70860E3B286CA2A0_OFFSET UNITYSDK_OFFSET(0x15EDE890)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_72773EA81E0DE137_OFFSET UNITYSDK_OFFSET(0x15EDDFF0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x15EDD280)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_8192D6CC287E5158_OFFSET UNITYSDK_OFFSET(0x15EDEE20)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x15EDD850)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_927AE89A90508125_OFFSET UNITYSDK_OFFSET(0x15EDE580)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_A40FA560F023DE98_OFFSET UNITYSDK_OFFSET(0x15EDC8A0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_AA17D0C06E9031F7_OFFSET UNITYSDK_OFFSET(0x15EDD3A0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x15EDCF10)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x15EDC3D0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_B51E94247E546AB8_OFFSET UNITYSDK_OFFSET(0x15EDEB40)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_B9626989E9983DE1_OFFSET UNITYSDK_OFFSET(0x15EDFC20)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_BB881F05E41D3A04_1_OFFSET UNITYSDK_OFFSET(0x15EDC800)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x15EDC4F0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_C7AE2F0F3E560328_OFFSET UNITYSDK_OFFSET(0x15EDF020)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15EDC4B0)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_CF647D1494EB3180_OFFSET UNITYSDK_OFFSET(0x15EDE950)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x15EDD730)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_D254E1404B6E78CF_OFFSET UNITYSDK_OFFSET(0x15EDCE80)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x15EDCC70)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_E20282B4D9F8B0D8_OFFSET UNITYSDK_OFFSET(0x15EDED40)
#define CLASS_2_4F4C9943CC7597CA_METHOD_2_F0933177EC1D0664_OFFSET UNITYSDK_OFFSET(0x15EDD330)
#define CLASS_2_4F4C9943CC7597CA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE00F0)

inline static constexpr unsigned int Class_2_4F4C9943CC7597CA_TypeDefinitionIndex = 69900;

class Class_2_4F4C9943CC7597CA : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A*>* LOCEGHGIHBE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Byte>* COLOFAMBLFI; // 0x20
	::UnityEngine::Rect GPMKOAEJMME; // 0x28
	::System::Boolean DFPCFCBIAHN; // 0x38
	::System::Boolean CMAIFHGGFED; // 0x39
	::System::Int32 FJPBDIMDKLE; // 0x3C
	::System::Single KKPEIMJKION; // 0x40
	::UnityEngine::Rect MNLNOBNDCGF; // 0x44
	::System::Single AJKJENELNMO; // 0x54
	::System::Boolean IFMIDBLMOEA; // 0x58
	::System::Boolean ANLGCMFHPBE; // 0x59
	::System::Boolean OLIKKFEGMAO; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_BB881F05E41D3A04_1_OFFSET))(this);
	}

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_55157FBA4997D865_OFFSET))(this);
	}

	::System::Void Method_2_1AAAE29F4DB571CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_1AAAE29F4DB571CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_64865938ADBCB300_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSimpleCRPVCamera* Method_2_F0933177EC1D0664()
	{
		return ((::RPG::Client::MonoEffectPluginSimpleCRPVCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_F0933177EC1D0664_OFFSET))(this);
	}

	::System::Void Method_2_A40FA560F023DE98()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_A40FA560F023DE98_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_72773EA81E0DE137(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CRPVirtualCameraConfigList*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CRPVirtualCameraConfigList*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_72773EA81E0DE137_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_927AE89A90508125(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::String*>* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_927AE89A90508125_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_11776D8D4AEF8BEE(::Il2CppArray<::System::String*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_11776D8D4AEF8BEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA17D0C06E9031F7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_AA17D0C06E9031F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF647D1494EB3180(::RPG::Client::MonoEffect* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_CF647D1494EB3180_OFFSET))(this, a1, a2);
	}

	::System::Byte Method_2_E20282B4D9F8B0D8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_E20282B4D9F8B0D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_70860E3B286CA2A0(::UnityEngine::GameObject* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_70860E3B286CA2A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8192D6CC287E5158(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_8192D6CC287E5158_OFFSET))(this, a1);
	}

	::System::Void Method_2_B51E94247E546AB8(::Class_1_1342B57709FD7AC5* a1, ::System::Byte a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_B51E94247E546AB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E8AB49A28A57BBE(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_6E8AB49A28A57BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7AE2F0F3E560328(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_C7AE2F0F3E560328_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FAAFA9D02942748(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_5FAAFA9D02942748_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_2_D254E1404B6E78CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_D254E1404B6E78CF_OFFSET))(this);
	}

	::System::Void Method_2_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_2_1FC888342BFEBB7D(::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_1FC888342BFEBB7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9626989E9983DE1(::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_B9626989E9983DE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4697FE608C1EC6FA(::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4F4C9943CC7597CA_Class_1_122C38ADC1B62B2A*))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_4697FE608C1EC6FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_2_3F8F8461974D0048(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_3F8F8461974D0048_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E49561549997F9D(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F4C9943CC7597CA_METHOD_2_2E49561549997F9D_OFFSET))(this, a1, a2);
	}
};
