#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_834;
class Class_0_16E4307DCC419505_891;
class Class_0_16E4307DCC419505_892;
class Class_2_FD4CAB81BEFA440B;
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_CA217ABF4E3B4F3F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x109E41E0)
#define CLASS_1_CA217ABF4E3B4F3F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x109E4220)
#define CLASS_1_CA217ABF4E3B4F3F_GET_MUTEHANDLER_OFFSET UNITYSDK_OFFSET(0x109E4430)
#define CLASS_1_CA217ABF4E3B4F3F_GET__ROOT_OFFSET UNITYSDK_OFFSET(0x109E4440)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x109E3140)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_06150765F7C4861F_OFFSET UNITYSDK_OFFSET(0x109E2B40)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_0E58B5D5C16BE67A_OFFSET UNITYSDK_OFFSET(0x109E3700)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x109E2920)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x109E3990)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x109E2C50)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x109E2100)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x109E2040)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_2B37B2A806525764_OFFSET UNITYSDK_OFFSET(0x109E3520)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3098E4A5843C835B_OFFSET UNITYSDK_OFFSET(0x109E37F0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x109E29B0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_39076DB8B566935B_OFFSET UNITYSDK_OFFSET(0x109E30E0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x109E22D0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x109E3F10)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3E7178C5ECF017DB_2_OFFSET UNITYSDK_OFFSET(0x109E3F60)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x109E3EC0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_42E61940F29D91C2_OFFSET UNITYSDK_OFFSET(0x109E3B80)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x109E32B0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4C409DF5E54C7553_OFFSET UNITYSDK_OFFSET(0x109E2880)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4C81839CB015BA71_OFFSET UNITYSDK_OFFSET(0x109E2EF0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4D6D325C865EE52D_OFFSET UNITYSDK_OFFSET(0x109E3310)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_5440DFB8C03469CC_OFFSET UNITYSDK_OFFSET(0x109E2310)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x109E4040)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_68706885838E5B9D_1_OFFSET UNITYSDK_OFFSET(0x109E3860)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_68706885838E5B9D_OFFSET UNITYSDK_OFFSET(0x109E3780)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_74E2789F4C5CBA05_OFFSET UNITYSDK_OFFSET(0x109E2690)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x109E2B90)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x109E4110)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_7A1B2141074766D3_OFFSET UNITYSDK_OFFSET(0x109E2470)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_85134B7B20E1588A_1_OFFSET UNITYSDK_OFFSET(0x109E1DF0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_85134B7B20E1588A_OFFSET UNITYSDK_OFFSET(0x109E1C30)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x109E2D10)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8CE0803574BB66D7_1_OFFSET UNITYSDK_OFFSET(0x109E3D10)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x109E1C80)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x109E2430)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_967E8C8AA60ED030_OFFSET UNITYSDK_OFFSET(0x109E34C0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_9D9CF8F6C2342EE5_1_OFFSET UNITYSDK_OFFSET(0x109E2E40)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x109E2210)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_A25E227C56B537C3_OFFSET UNITYSDK_OFFSET(0x109E1E90)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_A677FAB20724C65B_OFFSET UNITYSDK_OFFSET(0x109E2560)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_B3133298950D768C_OFFSET UNITYSDK_OFFSET(0x109E27B0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_B7582C58DFD4A32A_OFFSET UNITYSDK_OFFSET(0x109E3670)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x109E3DA0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x109E3DE0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x109E4000)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109E3CD0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D147751464BA5EBE_1_OFFSET UNITYSDK_OFFSET(0x109E3B10)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D147751464BA5EBE_OFFSET UNITYSDK_OFFSET(0x109E3AA0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x109E40B0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D5261017CF4F10F1_OFFSET UNITYSDK_OFFSET(0x109E38D0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D5DFCEDE0C7AB86D_OFFSET UNITYSDK_OFFSET(0x109E3410)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D829035DEFE99EBC_OFFSET UNITYSDK_OFFSET(0x109E2FA0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x109E1E40)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x109E3010)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_ECA72114536D14FE_OFFSET UNITYSDK_OFFSET(0x109E2360)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EE4559E3A2F0A78B_1_OFFSET UNITYSDK_OFFSET(0x109E3C60)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EE4559E3A2F0A78B_OFFSET UNITYSDK_OFFSET(0x109E3BF0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EF63DC3FFA3153D2_OFFSET UNITYSDK_OFFSET(0x109E3380)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_F8EBAFE4624A6F9F_OFFSET UNITYSDK_OFFSET(0x109E3FB0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_F9AA2CA9B2F50D22_OFFSET UNITYSDK_OFFSET(0x109E1CF0)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_FADC1F8DDBE056CA_OFFSET UNITYSDK_OFFSET(0x109E3180)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_FB990163A2E62A47_OFFSET UNITYSDK_OFFSET(0x109E3A30)
#define CLASS_1_CA217ABF4E3B4F3F_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x109E2160)
#define CLASS_1_CA217ABF4E3B4F3F_SET__ROOT_OFFSET UNITYSDK_OFFSET(0x109E4450)
#define CLASS_1_CA217ABF4E3B4F3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x109E4460)
#define CLASS_1_CA217ABF4E3B4F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x109E1B70)
#define CLASS_1_CA217ABF4E3B4F3F__ONBIND_OFFSET UNITYSDK_OFFSET(0x109E3D60)
#define CLASS_1_CA217ABF4E3B4F3F__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x109E3E20)
#define CLASS_1_CA217ABF4E3B4F3F__ONTICK_OFFSET UNITYSDK_OFFSET(0x109E3E60)

inline static constexpr unsigned int Class_1_CA217ABF4E3B4F3F_TypeDefinitionIndex = 59849;

class Class_1_CA217ABF4E3B4F3F : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_12()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA217ABF4E3B4F3F_TypeDefinitionIndex)->GetStaticField(0x442A0);
	}
	::UnityEngine::Transform* __Root_k__BackingField; // 0x10
	::RPG::Client::Promises::Promise* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_891*>* Field_1_8; // 0x20
	::RPG::Client::UIController* Field_1_0; // 0x28
	::RPG::Client::UIPrefabLoader* Field_1_6; // 0x30
	::Class_1_CA217ABF4E3B4F3F* Field_1_1; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_892*>* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::Class_2_FD4CAB81BEFA440B*>* Field_1_10; // 0x48
	::System::Collections::Generic::List_1<::Class_1_CA217ABF4E3B4F3F*>* Field_1_3; // 0x50
	::System::Boolean Field_1_11; // 0x58
	::System::Boolean Field_1_4; // 0x59
	::System::Boolean Field_1_5; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_85134B7B20E1588A(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_85134B7B20E1588A_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9AA2CA9B2F50D22(::RPG::Client::UIController* a1, ::Class_1_CA217ABF4E3B4F3F* a2, ::Struct_2_96F8F0A04B900A9E a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::Class_1_CA217ABF4E3B4F3F*, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_F9AA2CA9B2F50D22_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A25E227C56B537C3(::Class_0_16E4307DCC419505_834* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_834*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_A25E227C56B537C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_5440DFB8C03469CC(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_5440DFB8C03469CC_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_7A1B2141074766D3(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_7A1B2141074766D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4C409DF5E54C7553()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4C409DF5E54C7553_OFFSET))(this);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_9D9CF8F6C2342EE5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C81839CB015BA71(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4C81839CB015BA71_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_39076DB8B566935B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_39076DB8B566935B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_FADC1F8DDBE056CA(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_FADC1F8DDBE056CA_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_4D6D325C865EE52D(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4D6D325C865EE52D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_74E2789F4C5CBA05(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_74E2789F4C5CBA05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EF63DC3FFA3153D2(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EF63DC3FFA3153D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A677FAB20724C65B(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_A677FAB20724C65B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D5DFCEDE0C7AB86D(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D5DFCEDE0C7AB86D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_967E8C8AA60ED030(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_967E8C8AA60ED030_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B37B2A806525764(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_2B37B2A806525764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7582C58DFD4A32A(::System::UInt16 a1, ::RPG::Client::RspHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_B7582C58DFD4A32A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E58B5D5C16BE67A(::UnityEngine::UI::Button* a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_0E58B5D5C16BE67A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_68706885838E5B9D(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_68706885838E5B9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3098E4A5843C835B(::InControl::InputControlType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3098E4A5843C835B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_68706885838E5B9D_1(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_68706885838E5B9D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5261017CF4F10F1(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D5261017CF4F10F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_FB990163A2E62A47(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_FB990163A2E62A47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D147751464BA5EBE(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D147751464BA5EBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D147751464BA5EBE_1(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D147751464BA5EBE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_42E61940F29D91C2(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_42E61940F29D91C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE4559E3A2F0A78B(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EE4559E3A2F0A78B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE4559E3A2F0A78B_1(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_EE4559E3A2F0A78B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8CE0803574BB66D7_1(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8CE0803574BB66D7_1_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_3E7178C5ECF017DB_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8EBAFE4624A6F9F(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_F8EBAFE4624A6F9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_85134B7B20E1588A_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_85134B7B20E1588A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_06150765F7C4861F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_06150765F7C4861F_OFFSET))(this);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D829035DEFE99EBC(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D829035DEFE99EBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3133298950D768C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_B3133298950D768C_OFFSET))(this, a1);
	}

	::System::Void Method_1_ECA72114536D14FE(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_ECA72114536D14FE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean get_MuteHandler()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_GET_MUTEHANDLER_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_METHOD_1_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get__Root()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_GET__ROOT_OFFSET))(this);
	}

	::System::Void set__Root(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F_SET__ROOT_OFFSET))(this, value);
	}
};
