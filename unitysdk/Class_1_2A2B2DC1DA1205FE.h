#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_23;
class Class_1_87EAC1A8F0E1AE21;
class Class_1_A2668DA02E674CE7;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2A2B2DC1DA1205FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF8E810)
#define CLASS_1_2A2B2DC1DA1205FE_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBF90D30)
#define CLASS_1_2A2B2DC1DA1205FE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBF90D50)
#define CLASS_1_2A2B2DC1DA1205FE_GET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0xBF90D70)
#define CLASS_1_2A2B2DC1DA1205FE_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xBF90D90)
#define CLASS_1_2A2B2DC1DA1205FE_GET_TIPINFO_OFFSET UNITYSDK_OFFSET(0xBF90DB0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xBF90C70)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0F042FA16AD97604_OFFSET UNITYSDK_OFFSET(0xBF90BC0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_16A480699CF19D3C_OFFSET UNITYSDK_OFFSET(0xBF90340)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_1DC576E0DF32614D_OFFSET UNITYSDK_OFFSET(0xBF8E9D0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0xBF90010)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_28B3F1D743EDFE09_OFFSET UNITYSDK_OFFSET(0xBF8F6F0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_31D4ADC07CF85E06_OFFSET UNITYSDK_OFFSET(0xBF8FA40)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_44B3721001554563_OFFSET UNITYSDK_OFFSET(0xBF8FB20)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_4501DCD6794A7670_OFFSET UNITYSDK_OFFSET(0xBF8F3D0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_53CD2F853EB3DF2A_OFFSET UNITYSDK_OFFSET(0xBF8FB90)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_58B6D5F1983642B0_OFFSET UNITYSDK_OFFSET(0xBF90240)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_705EEFA3B1C1E8E6_OFFSET UNITYSDK_OFFSET(0xBF8F180)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_73151A20E22784BA_OFFSET UNITYSDK_OFFSET(0xBF90640)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_7CC1C3897F3F770B_1_OFFSET UNITYSDK_OFFSET(0xBF8F540)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_7CC1C3897F3F770B_OFFSET UNITYSDK_OFFSET(0xBF90490)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_86AADAE0845E9987_OFFSET UNITYSDK_OFFSET(0xBF8F1F0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xBF8F130)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_A47700A8A64F7C9A_OFFSET UNITYSDK_OFFSET(0xBF8F860)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_A830C8BA701D6B6A_OFFSET UNITYSDK_OFFSET(0xBF906C0)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_C8334045F249DF96_OFFSET UNITYSDK_OFFSET(0xBF90160)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_DC24E4B1D7A78C82_OFFSET UNITYSDK_OFFSET(0xBF8EB60)
#define CLASS_1_2A2B2DC1DA1205FE_METHOD_1_E14B785767F5DB0B_OFFSET UNITYSDK_OFFSET(0xBF8F2E0)
#define CLASS_1_2A2B2DC1DA1205FE_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBF90D40)
#define CLASS_1_2A2B2DC1DA1205FE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBF90D60)
#define CLASS_1_2A2B2DC1DA1205FE_SET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0xBF90D80)
#define CLASS_1_2A2B2DC1DA1205FE_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xBF90DA0)
#define CLASS_1_2A2B2DC1DA1205FE_SET_TIPINFO_OFFSET UNITYSDK_OFFSET(0xBF90DC0)
#define CLASS_1_2A2B2DC1DA1205FE__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8E760)

inline static constexpr unsigned int Class_1_2A2B2DC1DA1205FE_TypeDefinitionIndex = 66315;

class Class_1_2A2B2DC1DA1205FE : public ::System::Object
{
public:
	::Class_1_A2668DA02E674CE7* Field_1_0; // 0x10
	::Class_1_87EAC1A8F0E1AE21* _TipInfo_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A2668DA02E674CE7*>* Field_1_2; // 0x20
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x28
	::Class_1_83665B095F1535B5_23* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Boolean _PhotoGraphConditionComplete_k__BackingField; // 0x3C
	::System::Boolean Field_1_7; // 0x3D
	::System::Boolean Field_1_8; // 0x3E
	::System::Int32 Field_1_9; // 0x40
	::System::Int32 Field_1_10; // 0x44
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x48
	::RPG::GameCore::StringHash _FlagName_k__BackingField; // 0x4C

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

	::System::Boolean Method_1_705EEFA3B1C1E8E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_705EEFA3B1C1E8E6_OFFSET))(this);
	}

	::System::Boolean Method_1_86AADAE0845E9987()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_86AADAE0845E9987_OFFSET))(this);
	}

	::System::Boolean Method_1_E14B785767F5DB0B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_E14B785767F5DB0B_OFFSET))(this);
	}

	::System::Boolean Method_1_28B3F1D743EDFE09(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_28B3F1D743EDFE09_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_31D4ADC07CF85E06()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_31D4ADC07CF85E06_OFFSET))(this);
	}

	::System::Int32 Method_1_44B3721001554563()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_44B3721001554563_OFFSET))(this);
	}

	::Class_1_87EAC1A8F0E1AE21* Method_1_53CD2F853EB3DF2A(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_53CD2F853EB3DF2A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_16A480699CF19D3C(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_16A480699CF19D3C_OFFSET))(this, a1, a2);
	}

	::Class_1_A2668DA02E674CE7* Method_1_DC24E4B1D7A78C82(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_A2668DA02E674CE7* a3)
	{
		return ((::Class_1_A2668DA02E674CE7*(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_A2668DA02E674CE7*))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_DC24E4B1D7A78C82_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_26C5221AC22B6534()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_26C5221AC22B6534_OFFSET))(this);
	}

	::System::Void Method_1_C8334045F249DF96(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_C8334045F249DF96_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_58B6D5F1983642B0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_58B6D5F1983642B0_OFFSET))(this);
	}

	::System::Boolean Method_1_73151A20E22784BA(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_73151A20E22784BA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A830C8BA701D6B6A(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_A830C8BA701D6B6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F042FA16AD97604(::UnityEngine::Transform*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0F042FA16AD97604_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7CC1C3897F3F770B(::Il2CppArray<::Class_1_A2668DA02E674CE7*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_A2668DA02E674CE7*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_7CC1C3897F3F770B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4501DCD6794A7670(::Il2CppArray<::Class_1_A2668DA02E674CE7*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_A2668DA02E674CE7*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_4501DCD6794A7670_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7CC1C3897F3F770B_1(::Il2CppArray<::Class_1_A2668DA02E674CE7*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_A2668DA02E674CE7*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_7CC1C3897F3F770B_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A47700A8A64F7C9A(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::Class_1_A2668DA02E674CE7*>* a3, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::Class_1_A2668DA02E674CE7*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_2A2B2DC1DA1205FE_METHOD_1_A47700A8A64F7C9A_OFFSET))(this, a1, a2, a3, a4);
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
