#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_4A90D78D94DB1347;
class Class_1_59DD159DBF887CCC;
class Class_1_C15D42F68202F156;
class Class_1_C34EE1C299B5741D;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2E4B5B93182E4634_GET_ISFULLTRAIN_OFFSET UNITYSDK_OFFSET(0xBC9B150)
#define CLASS_2_2E4B5B93182E4634_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xBC9AA60)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_014395E5F373DC05_OFFSET UNITYSDK_OFFSET(0xBC9AD60)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xBC9A370)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_0C2F432937308E88_OFFSET UNITYSDK_OFFSET(0xBC9A440)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0xBC9A7D0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBC99EF0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1E91FFFB37216F67_OFFSET UNITYSDK_OFFSET(0xBC99AE0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1F426C187EC02776_OFFSET UNITYSDK_OFFSET(0xBC9A4B0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1FB03302975E8E7C_OFFSET UNITYSDK_OFFSET(0xBC9A0A0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_231D45158142CAA7_OFFSET UNITYSDK_OFFSET(0xBC9A750)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBC9AA70)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_2E66143FE210D3FA_OFFSET UNITYSDK_OFFSET(0xBC9A6F0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_3EEEF0EB2F919DF5_OFFSET UNITYSDK_OFFSET(0xBC9B040)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBC99DC0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xBC998E0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_709D8097E5FF96FD_OFFSET UNITYSDK_OFFSET(0xBC9A820)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_88F4CE036DF199FA_OFFSET UNITYSDK_OFFSET(0xBC9A580)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_96ECE9A2E1EA2916_OFFSET UNITYSDK_OFFSET(0xBC9A3C0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_A2DE38FD9389EE8B_OFFSET UNITYSDK_OFFSET(0xBC9A5E0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_BB3B5CB275AC3ED1_OFFSET UNITYSDK_OFFSET(0xBC9AEB0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0xBC99F50)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0xBC9A100)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D8721A51091023BA_OFFSET UNITYSDK_OFFSET(0xBC9AA80)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D98A8751C83DD5D1_OFFSET UNITYSDK_OFFSET(0xBC9A210)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xBC9A160)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_DC444195E2842C4A_OFFSET UNITYSDK_OFFSET(0xBC9A690)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xBC9A640)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_F962985A9E6C2F9F_OFFSET UNITYSDK_OFFSET(0xBC9A510)
#define CLASS_2_2E4B5B93182E4634_ONINIT_OFFSET UNITYSDK_OFFSET(0xBC99740)
#define CLASS_2_2E4B5B93182E4634_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBC99BB0)
#define CLASS_2_2E4B5B93182E4634_SET_ISFULLTRAIN_OFFSET UNITYSDK_OFFSET(0xBC9B190)
#define CLASS_2_2E4B5B93182E4634_TICK_OFFSET UNITYSDK_OFFSET(0xBC99E20)
#define CLASS_2_2E4B5B93182E4634__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC9B1D0)
#define CLASS_2_2E4B5B93182E4634__CTOR_OFFSET UNITYSDK_OFFSET(0xBC9B1C0)

inline static constexpr unsigned int Class_2_2E4B5B93182E4634_TypeDefinitionIndex = 60360;

class Class_2_2E4B5B93182E4634 : public ::Class_1_5BBB2050B3F3F683
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_JCPKJHDIKGI()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x177A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_ECEMBONKNEJ()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x177A8);
	}
	static ::System::String** StaticGet_LJMOOOAAMHG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x177B0);
	}
	static ::System::Boolean* StaticGet__IsFullTrain_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x8CF0);
	}
	// static const ::System::String* CPNCIMOJEBH; // 0x0
	// static const ::System::String* KNHFGDMGMCP; // 0x0
	// static const ::System::String* GLFJGKPLIGI; // 0x0
	::System::String* ADOAKOHKGJL; // 0x20
	::System::String* JPFFCGBNOCN; // 0x28
	::Class_1_C34EE1C299B5741D* AECBFNIAEMD; // 0x30
	::Class_1_C15D42F68202F156* FNLFFHBNMLC; // 0x38
	::Class_1_4A90D78D94DB1347* DLALHGJDNNO; // 0x40
	::Class_1_59DD159DBF887CCC* PHFBNIICMBP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_ONUNINIT_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::System::Void Method_2_1FB03302975E8E7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_1FB03302975E8E7C_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_D4550D9E4433D1A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E91FFFB37216F67(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_1E91FFFB37216F67_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_D98A8751C83DD5D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_D98A8751C83DD5D1_OFFSET))(this);
	}

	::System::Void Method_2_96ECE9A2E1EA2916(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_96ECE9A2E1EA2916_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C2F432937308E88(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_0C2F432937308E88_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1F426C187EC02776(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_1F426C187EC02776_OFFSET))(this, a1);
	}

	::System::Void Method_2_F962985A9E6C2F9F(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_F962985A9E6C2F9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_88F4CE036DF199FA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_88F4CE036DF199FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2DE38FD9389EE8B(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_A2DE38FD9389EE8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_DC444195E2842C4A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_DC444195E2842C4A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_2E66143FE210D3FA(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_2E66143FE210D3FA_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_231D45158142CAA7(::System::UInt32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_231D45158142CAA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_709D8097E5FF96FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_709D8097E5FF96FD_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_GET_NEEDTICK_OFFSET))(this);
	}

	::Class_1_C34EE1C299B5741D* Method_2_24748FC20F375725()
	{
		return ((::Class_1_C34EE1C299B5741D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Void Method_2_D8721A51091023BA(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_D8721A51091023BA_OFFSET))(a1);
	}

	static ::System::Void Method_2_014395E5F373DC05(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_014395E5F373DC05_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_BB3B5CB275AC3ED1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_BB3B5CB275AC3ED1_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_3EEEF0EB2F919DF5(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_3EEEF0EB2F919DF5_OFFSET))(a1);
	}

	static ::System::Boolean get_IsFullTrain()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_GET_ISFULLTRAIN_OFFSET))();
	}

	static ::System::Void set_IsFullTrain(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_SET_ISFULLTRAIN_OFFSET))(a1);
	}
};
