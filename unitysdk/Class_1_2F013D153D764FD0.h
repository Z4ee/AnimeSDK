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

#define CLASS_1_2F013D153D764FD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA53FAB0)
#define CLASS_1_2F013D153D764FD0_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA542240)
#define CLASS_1_2F013D153D764FD0_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0xA542230)
#define CLASS_1_2F013D153D764FD0_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0xA5421F0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_0A45674940E5A274_OFFSET UNITYSDK_OFFSET(0xA53FF80)
#define CLASS_1_2F013D153D764FD0_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xA5402E0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_357A4E16C13972FD_OFFSET UNITYSDK_OFFSET(0xA53FBB0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xA541B60)
#define CLASS_1_2F013D153D764FD0_METHOD_1_576F7DA4771CFFCA_OFFSET UNITYSDK_OFFSET(0xA5404E0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_59BE0F334617EDC2_OFFSET UNITYSDK_OFFSET(0xA5406F0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xA540830)
#define CLASS_1_2F013D153D764FD0_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA540690)
#define CLASS_1_2F013D153D764FD0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA53FEF0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0xA5422A0)
#define CLASS_1_2F013D153D764FD0_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA542250)
#define CLASS_1_2F013D153D764FD0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA540290)
#define CLASS_1_2F013D153D764FD0_METHOD_1_D90B0567A2E3A269_OFFSET UNITYSDK_OFFSET(0xA540350)
#define CLASS_1_2F013D153D764FD0_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA542220)
#define CLASS_1_2F013D153D764FD0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA542210)
#define CLASS_1_2F013D153D764FD0_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0xA542200)
#define CLASS_1_2F013D153D764FD0__CTOR_OFFSET UNITYSDK_OFFSET(0xA53F9D0)

inline static constexpr unsigned int Class_1_2F013D153D764FD0_TypeDefinitionIndex = 46150;

class Class_1_2F013D153D764FD0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_1_2; // 0x20
	::Class_2_E08C4A9CFB467C17* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x32
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x34
	::UnityEngine::Vector3 Field_1_8; // 0x38
	::UnityEngine::Vector3 Field_1_9; // 0x44
	::System::Single _AgentRadius_k__BackingField; // 0x50
	::RPGTools::Octree::Agent::AgentNavigationParams Field_1_11; // 0x54
	::System::Int32 Field_1_12; // 0x58

	::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::Class_1_C84A84118567060F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_357A4E16C13972FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_357A4E16C13972FD_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_A143022D1701BC76 Method_1_0A45674940E5A274(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_A143022D1701BC76(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_0A45674940E5A274_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_D90B0567A2E3A269(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_D90B0567A2E3A269_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_576F7DA4771CFFCA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_576F7DA4771CFFCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_59BE0F334617EDC2(::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_59BE0F334617EDC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPostSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_GET_ISPOSTSMOOTH_OFFSET))(this);
	}

	::System::Void set_IsPostSmooth(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_SET_ISPOSTSMOOTH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single get_AgentRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_GET_AGENTRADIUS_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_AgentLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_GET_AGENTLAYERMASK_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F013D153D764FD0_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}
};
