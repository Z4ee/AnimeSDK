#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_265;
class Class_1_8F713D8ADA87F44A;
class Class_1_AD85912B20ABF9D7;
class Class_1_BE2C11D41E955545;
class Class_1_D0766C2D98736D1C;
class Class_1_DE4C6B309308A230;
class Class_2_7F4574E2AA5F0809;
class Class_2_FC978391A642283C_1;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class VolumeComponentTransition_1; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B60836D7AC28948F_GET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xABF41E0)
#define CLASS_1_B60836D7AC28948F_GET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xABF41C0)
#define CLASS_1_B60836D7AC28948F_GET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0xABF4220)
#define CLASS_1_B60836D7AC28948F_GET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0xABF4200)
#define CLASS_1_B60836D7AC28948F_METHOD_1_14BFEE99BA593FDD_OFFSET UNITYSDK_OFFSET(0xABF07A0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_1AADDEA5F6FD601A_OFFSET UNITYSDK_OFFSET(0xABF5C10)
#define CLASS_1_B60836D7AC28948F_METHOD_1_1ABE634E489C2299_OFFSET UNITYSDK_OFFSET(0xABF5470)
#define CLASS_1_B60836D7AC28948F_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xABF2330)
#define CLASS_1_B60836D7AC28948F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xABF22D0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_2A31EF2B0D260348_OFFSET UNITYSDK_OFFSET(0xABF2210)
#define CLASS_1_B60836D7AC28948F_METHOD_1_323F8D08182C6A68_OFFSET UNITYSDK_OFFSET(0xABF88D0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0xABF4240)
#define CLASS_1_B60836D7AC28948F_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xABF5140)
#define CLASS_1_B60836D7AC28948F_METHOD_1_3AF1FD0911B649AF_OFFSET UNITYSDK_OFFSET(0xABF8720)
#define CLASS_1_B60836D7AC28948F_METHOD_1_3D3A3FC6437445E5_OFFSET UNITYSDK_OFFSET(0xABF33E0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_496D299FBEED85FF_OFFSET UNITYSDK_OFFSET(0xABF5A70)
#define CLASS_1_B60836D7AC28948F_METHOD_1_4F287A3C06D170F4_OFFSET UNITYSDK_OFFSET(0xABF39A0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_592ADBB6BC2C120B_OFFSET UNITYSDK_OFFSET(0xABF5900)
#define CLASS_1_B60836D7AC28948F_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xABF54D0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_65535A3F898FC487_OFFSET UNITYSDK_OFFSET(0xABF64B0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_683F35A5670243E8_OFFSET UNITYSDK_OFFSET(0xABF2A10)
#define CLASS_1_B60836D7AC28948F_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xABF3D50)
#define CLASS_1_B60836D7AC28948F_METHOD_1_75E10C86775D877F_OFFSET UNITYSDK_OFFSET(0xABF1660)
#define CLASS_1_B60836D7AC28948F_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET UNITYSDK_OFFSET(0xABF57D0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0xABF50D0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_80B88FE2B25716FD_OFFSET UNITYSDK_OFFSET(0xABF7230)
#define CLASS_1_B60836D7AC28948F_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xABF8630)
#define CLASS_1_B60836D7AC28948F_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xABF3380)
#define CLASS_1_B60836D7AC28948F_METHOD_1_9BF11B4872BCAAF9_OFFSET UNITYSDK_OFFSET(0xABF80B0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xABF2FE0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xABF2900)
#define CLASS_1_B60836D7AC28948F_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xABF4530)
#define CLASS_1_B60836D7AC28948F_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0xABF7770)
#define CLASS_1_B60836D7AC28948F_METHOD_1_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0xABF2170)
#define CLASS_1_B60836D7AC28948F_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xABF20D0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_C9D6F9890A05C022_OFFSET UNITYSDK_OFFSET(0xABF2520)
#define CLASS_1_B60836D7AC28948F_METHOD_1_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0xABF6330)
#define CLASS_1_B60836D7AC28948F_METHOD_1_CEF2F84573427F6B_OFFSET UNITYSDK_OFFSET(0xABF6420)
#define CLASS_1_B60836D7AC28948F_METHOD_1_DDC1EBEDFC816358_OFFSET UNITYSDK_OFFSET(0xABF1C10)
#define CLASS_1_B60836D7AC28948F_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xABF2D00)
#define CLASS_1_B60836D7AC28948F_METHOD_1_E9A1A9677DDF5CBC_OFFSET UNITYSDK_OFFSET(0xABF5840)
#define CLASS_1_B60836D7AC28948F_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xABF46A0)
#define CLASS_1_B60836D7AC28948F_METHOD_1_EC5AF9232853FA6E_OFFSET UNITYSDK_OFFSET(0xABF2390)
#define CLASS_1_B60836D7AC28948F_SET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xABF41F0)
#define CLASS_1_B60836D7AC28948F_SET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xABF41D0)
#define CLASS_1_B60836D7AC28948F_SET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0xABF4230)
#define CLASS_1_B60836D7AC28948F_SET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0xABF4210)
#define CLASS_1_B60836D7AC28948F__CCTOR_OFFSET UNITYSDK_OFFSET(0xABF8A50)
#define CLASS_1_B60836D7AC28948F__CTOR_OFFSET UNITYSDK_OFFSET(0xABF3A40)

inline static constexpr unsigned int Class_1_B60836D7AC28948F_TypeDefinitionIndex = 69074;

class Class_1_B60836D7AC28948F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_BE2C11D41E955545*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_BE2C11D41E955545*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B60836D7AC28948F_TypeDefinitionIndex)->GetStaticField(0x12030);
	}
	static ::Class_1_B60836D7AC28948F** StaticGet_Field_1_1()
	{
		return (::Class_1_B60836D7AC28948F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B60836D7AC28948F_TypeDefinitionIndex)->GetStaticField(0x12038);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AD85912B20ABF9D7*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_8F713D8ADA87F44A*>* Field_1_4; // 0x20
	::Class_1_AD85912B20ABF9D7* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::Class_1_8F713D8ADA87F44A*>* Field_1_6; // 0x30
	::Class_1_BE2C11D41E955545* __AllSourceStack_k__BackingField; // 0x38
	::System::Collections::Generic::List_1<::Class_1_AD85912B20ABF9D7*>* Field_1_8; // 0x40
	::Class_2_7F4574E2AA5F0809* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x50
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_11; // 0x58
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _BlockComponentTypes_k__BackingField; // 0x60
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_8F713D8ADA87F44A*>*>* Field_1_13; // 0x68
	::System::Collections::Generic::List_1<::Class_1_BE2C11D41E955545*>* Field_1_14; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_15; // 0x78
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GlobalComponentTypes_k__BackingField; // 0x80
	::Class_1_DE4C6B309308A230* Field_1_17; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D0766C2D98736D1C*>* Field_1_18; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_19; // 0x98
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_20; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_D0766C2D98736D1C*>* Field_1_21; // 0xA8
	::Class_1_BE2C11D41E955545* __AllSourceProxy_k__BackingField; // 0xB0
	::Class_2_FC978391A642283C_1* Field_1_23; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_8F713D8ADA87F44A*>* Field_1_24; // 0xC0
	::System::Boolean Field_1_25; // 0xC8
	::System::Boolean Field_1_26; // 0xC9
	::System::Boolean Field_1_27; // 0xCA
	::System::Boolean Field_1_28; // 0xCB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_14BFEE99BA593FDD(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_14BFEE99BA593FDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_75E10C86775D877F(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_75E10C86775D877F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDC1EBEDFC816358(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_DDC1EBEDFC816358_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_C561FF611C07A44C_1_OFFSET))(this);
	}

	::System::Void Method_1_2A31EF2B0D260348(::System::Int32 a1, ::Struct_2_74D97E08BFF70A55& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_74D97E08BFF70A55&))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_2A31EF2B0D260348_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_EC5AF9232853FA6E(::Class_0_16E4307DCC419505_265* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_EC5AF9232853FA6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9D6F9890A05C022(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_C9D6F9890A05C022_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_3D3A3FC6437445E5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_3D3A3FC6437445E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F287A3C06D170F4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_4F287A3C06D170F4_OFFSET))(this, a1);
	}

	static ::Class_1_B60836D7AC28948F* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_B60836D7AC28948F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_GlobalComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_GET_GLOBALCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_GlobalComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_SET_GLOBALCOMPONENTTYPES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_BlockComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_GET_BLOCKCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_BlockComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_SET_BLOCKCOMPONENTTYPES_OFFSET))(this, a1);
	}

	::Class_1_BE2C11D41E955545* get__AllSourceStack()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_GET__ALLSOURCESTACK_OFFSET))(this);
	}

	::System::Void set__AllSourceStack(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_SET__ALLSOURCESTACK_OFFSET))(this, a1);
	}

	::Class_1_BE2C11D41E955545* get__AllSourceProxy()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_GET__ALLSOURCEPROXY_OFFSET))(this);
	}

	::System::Void set__AllSourceProxy(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_SET__ALLSOURCEPROXY_OFFSET))(this, a1);
	}

	::Class_1_BE2C11D41E955545* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::Class_1_BE2C11D41E955545* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::Class_1_BE2C11D41E955545* Method_1_7E9AC3FFDA4606D5_1()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET))(this);
	}

	::Class_1_8F713D8ADA87F44A* Method_1_E9A1A9677DDF5CBC(::System::Type* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
	{
		return ((::Class_1_8F713D8ADA87F44A*(*)(::PVOID, ::System::Type*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_E9A1A9677DDF5CBC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1ABE634E489C2299(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_1ABE634E489C2299_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_592ADBB6BC2C120B(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_592ADBB6BC2C120B_OFFSET))(this, a1);
	}

	::System::Void Method_1_496D299FBEED85FF(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_496D299FBEED85FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AADDEA5F6FD601A(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_1AADDEA5F6FD601A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Int32 Method_1_CEF2F84573427F6B(::RPG::Client::OpenWorld::Volume* a1, ::RPG::Client::OpenWorld::Volume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_CEF2F84573427F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_683F35A5670243E8(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_683F35A5670243E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_65535A3F898FC487(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_65535A3F898FC487_OFFSET))(this, a1, a2);
	}

	::Class_1_BE2C11D41E955545* Method_1_80B88FE2B25716FD(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_80B88FE2B25716FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_9BF11B4872BCAAF9(::Class_1_DE4C6B309308A230* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_9BF11B4872BCAAF9_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_3AF1FD0911B649AF(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_3AF1FD0911B649AF_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_323F8D08182C6A68(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F_METHOD_1_323F8D08182C6A68_OFFSET))(this, a1);
	}
};
