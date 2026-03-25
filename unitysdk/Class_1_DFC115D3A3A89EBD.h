#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_21;
class Class_1_859C8B90384D9B45;
class Class_1_87EAC1A8F0E1AE21;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DFC115D3A3A89EBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8903580)
#define CLASS_1_DFC115D3A3A89EBD_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x8905250)
#define CLASS_1_DFC115D3A3A89EBD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x8905270)
#define CLASS_1_DFC115D3A3A89EBD_GET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0x8905290)
#define CLASS_1_DFC115D3A3A89EBD_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x89052B0)
#define CLASS_1_DFC115D3A3A89EBD_GET_TIPINFO_OFFSET UNITYSDK_OFFSET(0x89052D0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0x8903D40)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_197C612FDFA06864_OFFSET UNITYSDK_OFFSET(0x8904CF0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_1BF7EB7DFA311A5A_OFFSET UNITYSDK_OFFSET(0x8903E40)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_31CECDDE4B6CF372_OFFSET UNITYSDK_OFFSET(0x89050F0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x89042A0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_5F85A4993CA2226B_OFFSET UNITYSDK_OFFSET(0x8903CD0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_64497D8887A24FCC_OFFSET UNITYSDK_OFFSET(0x8904050)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_664B4BD12A9D1EA2_OFFSET UNITYSDK_OFFSET(0x8904C70)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x89046E0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x8905190)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_9CFC554DE0FBCEAA_OFFSET UNITYSDK_OFFSET(0x8904140)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_A5AC089579109586_OFFSET UNITYSDK_OFFSET(0x8904380)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_A5F17A927C92B1B9_OFFSET UNITYSDK_OFFSET(0x89037E0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_AA94F48ED4139C2A_1_OFFSET UNITYSDK_OFFSET(0x89049F0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_AA94F48ED4139C2A_OFFSET UNITYSDK_OFFSET(0x8903DC0)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_AB01D2A3604A75E7_OFFSET UNITYSDK_OFFSET(0x8904310)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_DBE74A8A81384DD2_OFFSET UNITYSDK_OFFSET(0x8903690)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_E05B4BFBD6E0E27E_OFFSET UNITYSDK_OFFSET(0x8904910)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_E592BD8E258A34F9_OFFSET UNITYSDK_OFFSET(0x8904A80)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_F35EC4D1271E0E5C_1_OFFSET UNITYSDK_OFFSET(0x8903F30)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_F35EC4D1271E0E5C_OFFSET UNITYSDK_OFFSET(0x8904B50)
#define CLASS_1_DFC115D3A3A89EBD_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x8903C80)
#define CLASS_1_DFC115D3A3A89EBD_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x8905260)
#define CLASS_1_DFC115D3A3A89EBD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x8905280)
#define CLASS_1_DFC115D3A3A89EBD_SET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0x89052A0)
#define CLASS_1_DFC115D3A3A89EBD_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x89052C0)
#define CLASS_1_DFC115D3A3A89EBD_SET_TIPINFO_OFFSET UNITYSDK_OFFSET(0x89052E0)
#define CLASS_1_DFC115D3A3A89EBD__CTOR_OFFSET UNITYSDK_OFFSET(0x89034F0)

inline static constexpr unsigned int Class_1_DFC115D3A3A89EBD_TypeDefinitionIndex = 56747;

class Class_1_DFC115D3A3A89EBD : public ::System::Object
{
public:
	::Class_1_83665B095F1535B5_21* Field_1_12; // 0x10
	::Class_1_87EAC1A8F0E1AE21* _TipInfo_k__BackingField; // 0x18
	::Class_1_859C8B90384D9B45* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_859C8B90384D9B45*>* Field_1_8; // 0x28
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::StringHash _FlagName_k__BackingField; // 0x38
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x3C
	::System::Int32 Field_1_9; // 0x40
	::System::Boolean Field_1_0; // 0x44
	::System::Boolean _PhotoGraphConditionComplete_k__BackingField; // 0x45
	::System::Boolean Field_1_1; // 0x46
	::System::Int32 Field_1_10; // 0x48
	::System::Int32 Field_1_11; // 0x4C

	::System::Void _ctor(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DBE74A8A81384DD2(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_DBE74A8A81384DD2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Boolean Method_1_5F85A4993CA2226B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_5F85A4993CA2226B_OFFSET))(this);
	}

	::System::Boolean Method_1_09526F48C04056C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_09526F48C04056C9_OFFSET))(this);
	}

	::System::Boolean Method_1_AA94F48ED4139C2A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_AA94F48ED4139C2A_OFFSET))(this);
	}

	::System::Boolean Method_1_64497D8887A24FCC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_64497D8887A24FCC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_AB01D2A3604A75E7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_AB01D2A3604A75E7_OFFSET))(this);
	}

	::Class_1_87EAC1A8F0E1AE21* Method_1_A5AC089579109586(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_A5AC089579109586_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E592BD8E258A34F9(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_E592BD8E258A34F9_OFFSET))(this, a1, a2);
	}

	::Class_1_859C8B90384D9B45* Method_1_A5F17A927C92B1B9(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_859C8B90384D9B45* a3)
	{
		return ((::Class_1_859C8B90384D9B45*(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_859C8B90384D9B45*))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_A5F17A927C92B1B9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_1_E05B4BFBD6E0E27E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_E05B4BFBD6E0E27E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AA94F48ED4139C2A_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_AA94F48ED4139C2A_1_OFFSET))(this);
	}

	::System::Boolean Method_1_664B4BD12A9D1EA2(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_664B4BD12A9D1EA2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_197C612FDFA06864(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_197C612FDFA06864_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31CECDDE4B6CF372(::UnityEngine::Transform*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_31CECDDE4B6CF372_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F35EC4D1271E0E5C(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_F35EC4D1271E0E5C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1BF7EB7DFA311A5A(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_1BF7EB7DFA311A5A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F35EC4D1271E0E5C_1(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_F35EC4D1271E0E5C_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9CFC554DE0FBCEAA(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::Class_1_859C8B90384D9B45*>* a3, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_METHOD_1_9CFC554DE0FBCEAA_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_SET_AIMIDENTIFYTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_SET_CONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::StringHash get_FlagName()
	{
		return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_GET_FLAGNAME_OFFSET))(this);
	}

	::System::Void set_FlagName(::RPG::GameCore::StringHash value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_SET_FLAGNAME_OFFSET))(this, value);
	}

	::System::Boolean get_PhotoGraphConditionComplete()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this);
	}

	::System::Void set_PhotoGraphConditionComplete(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this, value);
	}

	::Class_1_87EAC1A8F0E1AE21* get_TipInfo()
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_GET_TIPINFO_OFFSET))(this);
	}

	::System::Void set_TipInfo(::Class_1_87EAC1A8F0E1AE21* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_DFC115D3A3A89EBD_SET_TIPINFO_OFFSET))(this, value);
	}
};
