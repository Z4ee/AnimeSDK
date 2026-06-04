#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_22;
class Class_1_859C8B90384D9B45;
class Class_1_87EAC1A8F0E1AE21;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2A2B2DC1DA1205FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9EB550)
#define CLASS_1_2A2B2DC1DA1205FE_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xB9ED2F0)
#define CLASS_1_2A2B2DC1DA1205FE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB9ED310)
#define CLASS_1_2A2B2DC1DA1205FE_GET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0xB9ED330)
#define CLASS_1_2A2B2DC1DA1205FE_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB9ED350)
#define CLASS_1_2A2B2DC1DA1205FE_GET_TIPINFO_OFFSET UNITYSDK_OFFSET(0xB9ED370)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0xB9EBE60)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xB9ED230)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0F042FA16AD97604_OFFSET UNITYSDK_OFFSET(0xB9ED180)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_1DC576E0DF32614D_OFFSET UNITYSDK_OFFSET(0xB9EB6B0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0xB9EC830)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xB9EC3A0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_5446250EE72EFCF1_OFFSET UNITYSDK_OFFSET(0xB9EC480)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_5F85A4993CA2226B_OFFSET UNITYSDK_OFFSET(0xB9EBDF0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_64497D8887A24FCC_OFFSET UNITYSDK_OFFSET(0xB9EC150)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_73151A20E22784BA_OFFSET UNITYSDK_OFFSET(0xB9ECCD0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_89F02FB60067B7E9_OFFSET UNITYSDK_OFFSET(0xB9EC410)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_8BE07EBEC37D5679_1_OFFSET UNITYSDK_OFFSET(0xB9EC040)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_8BE07EBEC37D5679_OFFSET UNITYSDK_OFFSET(0xB9ECBC0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xB9EBDA0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_9CCD307E6766486B_OFFSET UNITYSDK_OFFSET(0xB9EC240)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_AA94F48ED4139C2A_1_OFFSET UNITYSDK_OFFSET(0xB9ECA60)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_AA94F48ED4139C2A_OFFSET UNITYSDK_OFFSET(0xB9EBEE0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_C409E31FC9F1965D_OFFSET UNITYSDK_OFFSET(0xB9EBF60)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_C8334045F249DF96_OFFSET UNITYSDK_OFFSET(0xB9EC980)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_D43F6E70FE4EF073_OFFSET UNITYSDK_OFFSET(0xB9ECD50)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_DC24E4B1D7A78C82_OFFSET UNITYSDK_OFFSET(0xB9EB840)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_E592BD8E258A34F9_OFFSET UNITYSDK_OFFSET(0xB9ECAF0)
#define CLASS_1_2A2B2DC1DA1205FE_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xB9ED300)
#define CLASS_1_2A2B2DC1DA1205FE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB9ED320)
#define CLASS_1_2A2B2DC1DA1205FE_SET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0xB9ED340)
#define CLASS_1_2A2B2DC1DA1205FE_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB9ED360)
#define CLASS_1_2A2B2DC1DA1205FE_SET_TIPINFO_OFFSET UNITYSDK_OFFSET(0xB9ED380)
#define CLASS_1_2A2B2DC1DA1205FE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9EB4A0)

inline static constexpr unsigned int Class_1_2A2B2DC1DA1205FE_TypeDefinitionIndex = 64913;

class Class_1_2A2B2DC1DA1205FE : public ::System::Object
{
public:
	::Class_1_87EAC1A8F0E1AE21* _TipInfo_k__BackingField; // 0x10
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x18
	::Class_1_859C8B90384D9B45* Field_1_2; // 0x20
	::Class_1_83665B095F1535B5_22* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_859C8B90384D9B45*>* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::RPG::GameCore::StringHash _FlagName_k__BackingField; // 0x3C
	::System::Boolean _PhotoGraphConditionComplete_k__BackingField; // 0x40
	::System::Boolean Field_1_8; // 0x41
	::System::Boolean Field_1_9; // 0x42
	::System::Int32 Field_1_10; // 0x44
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x48
	::System::Int32 Field_1_12; // 0x4C

	::System::Void _ctor(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1DC576E0DF32614D(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_1DC576E0DF32614D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Boolean Method_1_5F85A4993CA2226B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_5F85A4993CA2226B_OFFSET))(this);
	}

	::System::Boolean Method_1_09526F48C04056C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_09526F48C04056C9_OFFSET))(this);
	}

	::System::Boolean Method_1_AA94F48ED4139C2A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_AA94F48ED4139C2A_OFFSET))(this);
	}

	::System::Boolean Method_1_64497D8887A24FCC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_64497D8887A24FCC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_89F02FB60067B7E9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_89F02FB60067B7E9_OFFSET))(this);
	}

	::Class_1_87EAC1A8F0E1AE21* Method_1_5446250EE72EFCF1(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_5446250EE72EFCF1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E592BD8E258A34F9(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_E592BD8E258A34F9_OFFSET))(this, a1, a2);
	}

	::Class_1_859C8B90384D9B45* Method_1_DC24E4B1D7A78C82(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_859C8B90384D9B45* a3)
	{
		return ((::Class_1_859C8B90384D9B45*(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_859C8B90384D9B45*))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_DC24E4B1D7A78C82_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_26C5221AC22B6534()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_26C5221AC22B6534_OFFSET))(this);
	}

	::System::Void Method_1_C8334045F249DF96(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_C8334045F249DF96_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AA94F48ED4139C2A_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_AA94F48ED4139C2A_1_OFFSET))(this);
	}

	::System::Boolean Method_1_73151A20E22784BA(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_73151A20E22784BA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D43F6E70FE4EF073(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_D43F6E70FE4EF073_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F042FA16AD97604(::UnityEngine::Transform*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0F042FA16AD97604_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8BE07EBEC37D5679(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_8BE07EBEC37D5679_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C409E31FC9F1965D(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_C409E31FC9F1965D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8BE07EBEC37D5679_1(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_8BE07EBEC37D5679_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9CCD307E6766486B(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::Class_1_859C8B90384D9B45*>* a3, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_9CCD307E6766486B_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_SET_AIMIDENTIFYTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::StringHash get_FlagName()
	{
		return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_GET_FLAGNAME_OFFSET))(this);
	}

	::System::Void set_FlagName(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_SET_FLAGNAME_OFFSET))(this, a1);
	}

	::System::Boolean get_PhotoGraphConditionComplete()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this);
	}

	::System::Void set_PhotoGraphConditionComplete(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this, a1);
	}

	::Class_1_87EAC1A8F0E1AE21* get_TipInfo()
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_GET_TIPINFO_OFFSET))(this);
	}

	::System::Void set_TipInfo(::Class_1_87EAC1A8F0E1AE21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_SET_TIPINFO_OFFSET))(this, a1);
	}
};
