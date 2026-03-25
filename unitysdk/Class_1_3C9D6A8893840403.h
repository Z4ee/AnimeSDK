#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentNavigationParams.h"
#include "unitysdk/Struct_2_7250B7BB9413AA62.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D2DA7CD2E59DEF1;
class Class_1_C84A84118567060F;
class Class_2_E08C4A9CFB467C17;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3C9D6A8893840403_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8805080)
#define CLASS_1_3C9D6A8893840403_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x8807400)
#define CLASS_1_3C9D6A8893840403_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x88073F0)
#define CLASS_1_3C9D6A8893840403_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x88073B0)
#define CLASS_1_3C9D6A8893840403_METHOD_1_0A45674940E5A274_OFFSET UNITYSDK_OFFSET(0x8805530)
#define CLASS_1_3C9D6A8893840403_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8805890)
#define CLASS_1_3C9D6A8893840403_METHOD_1_288F74D11BE167E0_OFFSET UNITYSDK_OFFSET(0x8805AD0)
#define CLASS_1_3C9D6A8893840403_METHOD_1_357A4E16C13972FD_OFFSET UNITYSDK_OFFSET(0x8805140)
#define CLASS_1_3C9D6A8893840403_METHOD_1_36D8543FC20E22FB_OFFSET UNITYSDK_OFFSET(0x8805910)
#define CLASS_1_3C9D6A8893840403_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x8806D70)
#define CLASS_1_3C9D6A8893840403_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x8805E00)
#define CLASS_1_3C9D6A8893840403_METHOD_1_79FB724065DC1EF9_OFFSET UNITYSDK_OFFSET(0x8805CC0)
#define CLASS_1_3C9D6A8893840403_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8805C60)
#define CLASS_1_3C9D6A8893840403_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x8807460)
#define CLASS_1_3C9D6A8893840403_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x8807410)
#define CLASS_1_3C9D6A8893840403_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8805480)
#define CLASS_1_3C9D6A8893840403_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8805840)
#define CLASS_1_3C9D6A8893840403_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x88073E0)
#define CLASS_1_3C9D6A8893840403_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x88073D0)
#define CLASS_1_3C9D6A8893840403_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x88073C0)
#define CLASS_1_3C9D6A8893840403__CTOR_OFFSET UNITYSDK_OFFSET(0x8804FA0)

inline static constexpr unsigned int Class_1_3C9D6A8893840403_TypeDefinitionIndex = 39658;

class Class_1_3C9D6A8893840403 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_1_8; // 0x10
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_12; // 0x20
	::Class_2_E08C4A9CFB467C17* Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x30
	::System::Int32 Field_1_11; // 0x3C
	::UnityEngine::Vector3 Field_1_6; // 0x40
	::RPGTools::Octree::Agent::AgentNavigationParams Field_1_9; // 0x4C
	::System::Single _AgentRadius_k__BackingField; // 0x50
	::System::Boolean Field_1_7; // 0x54
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x55
	::System::Boolean Field_1_10; // 0x56
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x58

	::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::Class_1_C84A84118567060F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_357A4E16C13972FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_357A4E16C13972FD_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_7250B7BB9413AA62 Method_1_0A45674940E5A274(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_7250B7BB9413AA62(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_0A45674940E5A274_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_36D8543FC20E22FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_36D8543FC20E22FB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_288F74D11BE167E0(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_288F74D11BE167E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_79FB724065DC1EF9(::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_79FB724065DC1EF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPostSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_GET_ISPOSTSMOOTH_OFFSET))(this);
	}

	::System::Void set_IsPostSmooth(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_SET_ISPOSTSMOOTH_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single get_AgentRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_GET_AGENTRADIUS_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_AgentLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_GET_AGENTLAYERMASK_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9D6A8893840403_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}
};
