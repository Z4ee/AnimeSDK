#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentNavigationParams.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D2DA7CD2E59DEF1;
class Class_1_C84A84118567060F;
class Class_2_E08C4A9CFB467C17;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2C76384347B880B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB83B140)
#define CLASS_1_E2C76384347B880B_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xB83E050)
#define CLASS_1_E2C76384347B880B_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0xB83E040)
#define CLASS_1_E2C76384347B880B_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0xB83E000)
#define CLASS_1_E2C76384347B880B_METHOD_1_051D4FD5F66B038B_OFFSET UNITYSDK_OFFSET(0xB83C7D0)
#define CLASS_1_E2C76384347B880B_METHOD_1_0A45674940E5A274_OFFSET UNITYSDK_OFFSET(0xB83B650)
#define CLASS_1_E2C76384347B880B_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xB83C3C0)
#define CLASS_1_E2C76384347B880B_METHOD_1_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0xB83C910)
#define CLASS_1_E2C76384347B880B_METHOD_1_576F7DA4771CFFCA_OFFSET UNITYSDK_OFFSET(0xB83C5C0)
#define CLASS_1_E2C76384347B880B_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xB83C770)
#define CLASS_1_E2C76384347B880B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB83C330)
#define CLASS_1_E2C76384347B880B_METHOD_1_9C68D73444D54154_OFFSET UNITYSDK_OFFSET(0xB83B240)
#define CLASS_1_E2C76384347B880B_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0xB83E0B0)
#define CLASS_1_E2C76384347B880B_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB83E060)
#define CLASS_1_E2C76384347B880B_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xB83DCD0)
#define CLASS_1_E2C76384347B880B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB83DFB0)
#define CLASS_1_E2C76384347B880B_METHOD_1_D90B0567A2E3A269_OFFSET UNITYSDK_OFFSET(0xB83C430)
#define CLASS_1_E2C76384347B880B_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB83E030)
#define CLASS_1_E2C76384347B880B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB83E020)
#define CLASS_1_E2C76384347B880B_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0xB83E010)
#define CLASS_1_E2C76384347B880B__CTOR_OFFSET UNITYSDK_OFFSET(0xB83B060)

inline static constexpr unsigned int Class_1_E2C76384347B880B_TypeDefinitionIndex = 49352;

class Class_1_E2C76384347B880B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IMDMBCFBKKE; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* OINCGJJMAEF; // 0x18
	::Il2CppArray<::Class_1_C84A84118567060F*>* IOFHPGIJANO; // 0x20
	::Class_2_E08C4A9CFB467C17* DHOBMFLDLAN; // 0x28
	::System::Single _AgentRadius_k__BackingField; // 0x30
	::RPGTools::Octree::Agent::AgentNavigationParams IJIHPGHKLIF; // 0x34
	::System::Boolean HHBGOBMFMML; // 0x38
	::System::Boolean AFLJILDNMHA; // 0x39
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x3A
	::UnityEngine::Vector3 GLDEBFOKEMJ; // 0x3C
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x48
	::System::Int32 ECMGHKJIKNL; // 0x4C
	::UnityEngine::Vector3 DEIMGIGLHLK; // 0x50

	::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::Class_1_C84A84118567060F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_9C68D73444D54154(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_9C68D73444D54154_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_A143022D1701BC76 Method_1_0A45674940E5A274(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_A143022D1701BC76(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_0A45674940E5A274_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_D90B0567A2E3A269(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_D90B0567A2E3A269_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_576F7DA4771CFFCA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_576F7DA4771CFFCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_051D4FD5F66B038B(::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_051D4FD5F66B038B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPostSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_GET_ISPOSTSMOOTH_OFFSET))(this);
	}

	::System::Void set_IsPostSmooth(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_SET_ISPOSTSMOOTH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single get_AgentRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_GET_AGENTRADIUS_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_AgentLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_GET_AGENTLAYERMASK_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C76384347B880B_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}
};
