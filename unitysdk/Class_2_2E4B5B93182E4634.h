#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_59DD159DBF887CCC;
class Class_1_C15D42F68202F156;
class Class_1_C34EE1C299B5741D;
class Class_1_E05E7A6D9DE9138B;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2E4B5B93182E4634_GET_ISFULLTRAIN_OFFSET UNITYSDK_OFFSET(0xA90DDF0)
#define CLASS_2_2E4B5B93182E4634_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xA90D770)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xA90D080)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_0C2F432937308E88_OFFSET UNITYSDK_OFFSET(0xA90D150)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0xA90D4E0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA90CC00)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1E91FFFB37216F67_OFFSET UNITYSDK_OFFSET(0xA90C890)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1FB03302975E8E7C_OFFSET UNITYSDK_OFFSET(0xA90CDB0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_231D45158142CAA7_OFFSET UNITYSDK_OFFSET(0xA90D460)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA90D780)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_2E66143FE210D3FA_OFFSET UNITYSDK_OFFSET(0xA90D400)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA90CAD0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xA90C690)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_6134FDA1BE359C56_OFFSET UNITYSDK_OFFSET(0xA90D1C0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_709D8097E5FF96FD_OFFSET UNITYSDK_OFFSET(0xA90D530)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xA90CE70)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_87E19CC4B739A03A_OFFSET UNITYSDK_OFFSET(0xA90D350)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_88F4CE036DF199FA_OFFSET UNITYSDK_OFFSET(0xA90D290)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_96ECE9A2E1EA2916_OFFSET UNITYSDK_OFFSET(0xA90D0D0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_A2DE38FD9389EE8B_OFFSET UNITYSDK_OFFSET(0xA90D2F0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_A45ADA7907E38799_OFFSET UNITYSDK_OFFSET(0xA90D790)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_A741114645E428EE_OFFSET UNITYSDK_OFFSET(0xA90DD10)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_BB3B5CB275AC3ED1_OFFSET UNITYSDK_OFFSET(0xA90DB80)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0xA90CC60)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0xA90CE10)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D98A8751C83DD5D1_OFFSET UNITYSDK_OFFSET(0xA90CF20)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_F962985A9E6C2F9F_OFFSET UNITYSDK_OFFSET(0xA90D220)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_F9B28E6C474768EA_OFFSET UNITYSDK_OFFSET(0xA90DA30)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_FFDDD9CC0D2E78CB_OFFSET UNITYSDK_OFFSET(0xA90D3A0)
#define CLASS_2_2E4B5B93182E4634_ONINIT_OFFSET UNITYSDK_OFFSET(0xA90C520)
#define CLASS_2_2E4B5B93182E4634_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xA90C960)
#define CLASS_2_2E4B5B93182E4634_SET_ISFULLTRAIN_OFFSET UNITYSDK_OFFSET(0xA90DE30)
#define CLASS_2_2E4B5B93182E4634_TICK_OFFSET UNITYSDK_OFFSET(0xA90CB30)
#define CLASS_2_2E4B5B93182E4634__CCTOR_OFFSET UNITYSDK_OFFSET(0xA90DE70)
#define CLASS_2_2E4B5B93182E4634__CTOR_OFFSET UNITYSDK_OFFSET(0xA90DE60)
#define CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xA90E0C0)
#define CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xA90E120)
#define CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA90E180)

inline static constexpr unsigned int Class_2_2E4B5B93182E4634_TypeDefinitionIndex = 56304;

class Class_2_2E4B5B93182E4634 : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x33130);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x33138);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x33140);
	}
	static ::System::Boolean* StaticGet__IsFullTrain_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0xA1E0);
	}
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::Class_1_C15D42F68202F156* Field_2_7; // 0x20
	::Class_1_E05E7A6D9DE9138B* Field_2_8; // 0x28
	::Class_1_C34EE1C299B5741D* Field_2_9; // 0x30
	::System::String* Field_2_10; // 0x38
	::System::String* Field_2_11; // 0x40
	::Class_1_59DD159DBF887CCC* Field_2_12; // 0x48

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

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
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

	::System::Boolean Method_2_6134FDA1BE359C56(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_6134FDA1BE359C56_OFFSET))(this, a1);
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

	::System::Void Method_2_87E19CC4B739A03A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_87E19CC4B739A03A_OFFSET))(this);
	}

	::System::Void Method_2_FFDDD9CC0D2E78CB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_FFDDD9CC0D2E78CB_OFFSET))(this, a1);
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

	static ::System::Void Method_2_A45ADA7907E38799(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_A45ADA7907E38799_OFFSET))(a1);
	}

	static ::System::Void Method_2_F9B28E6C474768EA(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_F9B28E6C474768EA_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_BB3B5CB275AC3ED1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_BB3B5CB275AC3ED1_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_A741114645E428EE(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_A741114645E428EE_OFFSET))(a1);
	}

	static ::System::Boolean get_IsFullTrain()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_GET_ISFULLTRAIN_OFFSET))();
	}

	static ::System::Void set_IsFullTrain(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_SET_ISFULLTRAIN_OFFSET))(a1);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
