#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_3237A9B2FB9B276F;
class Class_1_59DD159DBF887CCC;
class Class_1_ACD6077BAB92A2F2;
class Class_1_E05E7A6D9DE9138B;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2E4B5B93182E4634_GET_ISFULLTRAIN_OFFSET UNITYSDK_OFFSET(0x111A6DF0)
#define CLASS_2_2E4B5B93182E4634_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x111A6730)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_0C2F432937308E88_OFFSET UNITYSDK_OFFSET(0x111A60F0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x111A6480)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x111A5D50)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_16CF25866628190D_OFFSET UNITYSDK_OFFSET(0x111A61C0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_17BC5B6802FB09F9_OFFSET UNITYSDK_OFFSET(0x111A6290)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1BBB005414AEB64F_OFFSET UNITYSDK_OFFSET(0x111A62F0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x111A5BA0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_1E91FFFB37216F67_OFFSET UNITYSDK_OFFSET(0x111A5820)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_231D45158142CAA7_OFFSET UNITYSDK_OFFSET(0x111A6400)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x111A6740)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_3EEEF0EB2F919DF5_OFFSET UNITYSDK_OFFSET(0x111A6CE0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x111A5A70)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_439A414E9D90CF81_OFFSET UNITYSDK_OFFSET(0x111A69F0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_555C2DB155657ACF_OFFSET UNITYSDK_OFFSET(0x111A6230)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x111A5610)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_709D8097E5FF96FD_OFFSET UNITYSDK_OFFSET(0x111A64D0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_96ECE9A2E1EA2916_OFFSET UNITYSDK_OFFSET(0x111A6070)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_96F429055CEF6085_OFFSET UNITYSDK_OFFSET(0x111A5DB0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_A45ADA7907E38799_OFFSET UNITYSDK_OFFSET(0x111A6750)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_BB3B5CB275AC3ED1_OFFSET UNITYSDK_OFFSET(0x111A6B40)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x111A6020)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_C710CD5E05DACF48_OFFSET UNITYSDK_OFFSET(0x111A6340)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x111A5C00)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_D98A8751C83DD5D1_OFFSET UNITYSDK_OFFSET(0x111A5EC0)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x111A5E10)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_E7B9A580F2D3EE8E_OFFSET UNITYSDK_OFFSET(0x111A6160)
#define CLASS_2_2E4B5B93182E4634_METHOD_2_FF860B6C86D53B90_OFFSET UNITYSDK_OFFSET(0x111A63A0)
#define CLASS_2_2E4B5B93182E4634_ONINIT_OFFSET UNITYSDK_OFFSET(0x111A5480)
#define CLASS_2_2E4B5B93182E4634_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x111A58F0)
#define CLASS_2_2E4B5B93182E4634_SET_ISFULLTRAIN_OFFSET UNITYSDK_OFFSET(0x111A6E30)
#define CLASS_2_2E4B5B93182E4634_TICK_OFFSET UNITYSDK_OFFSET(0x111A5AD0)
#define CLASS_2_2E4B5B93182E4634__CCTOR_OFFSET UNITYSDK_OFFSET(0x111A6E70)
#define CLASS_2_2E4B5B93182E4634__CTOR_OFFSET UNITYSDK_OFFSET(0x111A6E60)
#define CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x111A7000)
#define CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x111A7060)
#define CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x111A70C0)

inline static constexpr unsigned int Class_2_2E4B5B93182E4634_TypeDefinitionIndex = 55553;

class Class_2_2E4B5B93182E4634 : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x18E70);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_12()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x18E78);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_2_4()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x18E80);
	}
	static ::System::Boolean* StaticGet__IsFullTrain_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E4B5B93182E4634_TypeDefinitionIndex)->GetStaticField(0x69F0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::Class_1_ACD6077BAB92A2F2* Field_2_7; // 0x20
	::System::String* Field_2_9; // 0x28
	::System::String* Field_2_8; // 0x30
	::Class_1_E05E7A6D9DE9138B* Field_2_10; // 0x38
	::Class_1_59DD159DBF887CCC* Field_2_5; // 0x40
	::Class_1_3237A9B2FB9B276F* Field_2_6; // 0x48

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

	::System::Void Method_2_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_96F429055CEF6085(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_96F429055CEF6085_OFFSET))(this, a1);
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

	::System::Boolean Method_2_E7B9A580F2D3EE8E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_E7B9A580F2D3EE8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_16CF25866628190D(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_16CF25866628190D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_BD658202BB4C4431_OFFSET))(this);
	}

	::System::Void Method_2_555C2DB155657ACF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_555C2DB155657ACF_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BC5B6802FB09F9(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_17BC5B6802FB09F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BBB005414AEB64F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_1BBB005414AEB64F_OFFSET))(this);
	}

	::System::Void Method_2_C710CD5E05DACF48(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_C710CD5E05DACF48_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_FF860B6C86D53B90(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_FF860B6C86D53B90_OFFSET))(this, a1);
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

	::Class_1_ACD6077BAB92A2F2* Method_2_24748FC20F375725()
	{
		return ((::Class_1_ACD6077BAB92A2F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Void Method_2_A45ADA7907E38799(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_A45ADA7907E38799_OFFSET))(a1);
	}

	static ::System::Void Method_2_439A414E9D90CF81(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_METHOD_2_439A414E9D90CF81_OFFSET))(a1);
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

	static ::System::Void set_IsFullTrain(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634_SET_ISFULLTRAIN_OFFSET))(value);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E4B5B93182E4634___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
