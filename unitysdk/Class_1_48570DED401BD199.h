#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

class Class_0_16E4307DCC419505_62;
class Class_0_16E4307DCC419505_72;
class Class_1_CEF5F27F657CD849;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define CLASS_1_48570DED401BD199_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x164CFC30)
#define CLASS_1_48570DED401BD199_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164CA920)
#define CLASS_1_48570DED401BD199_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x164D0E10)
#define CLASS_1_48570DED401BD199_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x164C8EE0)
#define CLASS_1_48570DED401BD199_GETLOADER_OFFSET UNITYSDK_OFFSET(0x164CA860)
#define CLASS_1_48570DED401BD199_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x164C89D0)
#define CLASS_1_48570DED401BD199_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x164C87C0)
#define CLASS_1_48570DED401BD199_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x164C8950)
#define CLASS_1_48570DED401BD199_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x164C89B0)
#define CLASS_1_48570DED401BD199_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x164C8870)
#define CLASS_1_48570DED401BD199_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x164C88D0)
#define CLASS_1_48570DED401BD199_GET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x164C88F0)
#define CLASS_1_48570DED401BD199_GET_DEPENDENCYOFFSET_OFFSET UNITYSDK_OFFSET(0x164C8910)
#define CLASS_1_48570DED401BD199_GET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET UNITYSDK_OFFSET(0x164C8930)
#define CLASS_1_48570DED401BD199_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x164C8990)
#define CLASS_1_48570DED401BD199_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x164C8830)
#define CLASS_1_48570DED401BD199_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x164C8890)
#define CLASS_1_48570DED401BD199_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x164C88B0)
#define CLASS_1_48570DED401BD199_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x164C8970)
#define CLASS_1_48570DED401BD199_ISFAILED_OFFSET UNITYSDK_OFFSET(0x164C9020)
#define CLASS_1_48570DED401BD199_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x164CA8A0)
#define CLASS_1_48570DED401BD199_ISLOADED_OFFSET UNITYSDK_OFFSET(0x164C8F20)
#define CLASS_1_48570DED401BD199_ISLOADING_OFFSET UNITYSDK_OFFSET(0x164C8F70)
#define CLASS_1_48570DED401BD199_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x164C8FD0)
#define CLASS_1_48570DED401BD199_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x164CA580)
#define CLASS_1_48570DED401BD199_METHOD_1_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x164CE090)
#define CLASS_1_48570DED401BD199_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x164CAF30)
#define CLASS_1_48570DED401BD199_METHOD_1_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x164CE900)
#define CLASS_1_48570DED401BD199_METHOD_1_1F60FDA7C2FB5E1C_OFFSET UNITYSDK_OFFSET(0x164D0810)
#define CLASS_1_48570DED401BD199_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x164CC8D0)
#define CLASS_1_48570DED401BD199_METHOD_1_23A56AB8B0540755_OFFSET UNITYSDK_OFFSET(0x164CC380)
#define CLASS_1_48570DED401BD199_METHOD_1_3879DBAFE025A3DA_OFFSET UNITYSDK_OFFSET(0x164C8E30)
#define CLASS_1_48570DED401BD199_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x164C9B40)
#define CLASS_1_48570DED401BD199_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x164D0A40)
#define CLASS_1_48570DED401BD199_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x164C9070)
#define CLASS_1_48570DED401BD199_METHOD_1_39410AAA536323DB_OFFSET UNITYSDK_OFFSET(0x164D09D0)
#define CLASS_1_48570DED401BD199_METHOD_1_3B4621977E148EF2_OFFSET UNITYSDK_OFFSET(0x164CDDB0)
#define CLASS_1_48570DED401BD199_METHOD_1_410AFB0271155FD6_OFFSET UNITYSDK_OFFSET(0x164CFD80)
#define CLASS_1_48570DED401BD199_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x164CFA30)
#define CLASS_1_48570DED401BD199_METHOD_1_4702F35034F861D9_OFFSET UNITYSDK_OFFSET(0x164D0020)
#define CLASS_1_48570DED401BD199_METHOD_1_4D563D0FC637BFE5_OFFSET UNITYSDK_OFFSET(0x164CD310)
#define CLASS_1_48570DED401BD199_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x164CAE10)
#define CLASS_1_48570DED401BD199_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x164C9F00)
#define CLASS_1_48570DED401BD199_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x164C9570)
#define CLASS_1_48570DED401BD199_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x164C87D0)
#define CLASS_1_48570DED401BD199_METHOD_1_94269078D81A21CF_OFFSET UNITYSDK_OFFSET(0x164CBDB0)
#define CLASS_1_48570DED401BD199_METHOD_1_94D70465A48E3543_1_OFFSET UNITYSDK_OFFSET(0x164CF840)
#define CLASS_1_48570DED401BD199_METHOD_1_94D70465A48E3543_OFFSET UNITYSDK_OFFSET(0x164CF7B0)
#define CLASS_1_48570DED401BD199_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164C87E0)
#define CLASS_1_48570DED401BD199_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x164CA810)
#define CLASS_1_48570DED401BD199_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x164C9B90)
#define CLASS_1_48570DED401BD199_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x164CAEA0)
#define CLASS_1_48570DED401BD199_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x164C90C0)
#define CLASS_1_48570DED401BD199_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x164CAFF0)
#define CLASS_1_48570DED401BD199_METHOD_1_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x164C9C30)
#define CLASS_1_48570DED401BD199_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x164CEEB0)
#define CLASS_1_48570DED401BD199_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x164CFBE0)
#define CLASS_1_48570DED401BD199_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x164C9BE0)
#define CLASS_1_48570DED401BD199_METHOD_1_D76259779AD4F010_OFFSET UNITYSDK_OFFSET(0x164CD3A0)
#define CLASS_1_48570DED401BD199_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x164CB720)
#define CLASS_1_48570DED401BD199_METHOD_1_E28D5BC323824F68_OFFSET UNITYSDK_OFFSET(0x164C9110)
#define CLASS_1_48570DED401BD199_METHOD_1_E59B0636DF9608FF_OFFSET UNITYSDK_OFFSET(0x164D01C0)
#define CLASS_1_48570DED401BD199_METHOD_1_EBBC2DBEFDDF619A_OFFSET UNITYSDK_OFFSET(0x164CF6C0)
#define CLASS_1_48570DED401BD199_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x164C87B0)
#define CLASS_1_48570DED401BD199_METHOD_1_F35542B41826E6DE_OFFSET UNITYSDK_OFFSET(0x164CF8B0)
#define CLASS_1_48570DED401BD199_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x164CE750)
#define CLASS_1_48570DED401BD199_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x164CFCF0)
#define CLASS_1_48570DED401BD199_RESETDATA_OFFSET UNITYSDK_OFFSET(0x164CAA90)
#define CLASS_1_48570DED401BD199_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x164C8A20)
#define CLASS_1_48570DED401BD199_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x164C8960)
#define CLASS_1_48570DED401BD199_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x164C89C0)
#define CLASS_1_48570DED401BD199_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x164C8880)
#define CLASS_1_48570DED401BD199_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x164C88E0)
#define CLASS_1_48570DED401BD199_SET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x164C8900)
#define CLASS_1_48570DED401BD199_SET_DEPENDENCYOFFSET_OFFSET UNITYSDK_OFFSET(0x164C8920)
#define CLASS_1_48570DED401BD199_SET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET UNITYSDK_OFFSET(0x164C8940)
#define CLASS_1_48570DED401BD199_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x164C89A0)
#define CLASS_1_48570DED401BD199_SET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x164C88A0)
#define CLASS_1_48570DED401BD199_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x164C88C0)
#define CLASS_1_48570DED401BD199_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x164C8980)
#define CLASS_1_48570DED401BD199_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164D0A80)
#define CLASS_1_48570DED401BD199__CTOR_OFFSET UNITYSDK_OFFSET(0x164C8A70)
#define CLASS_1_48570DED401BD199___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164D0E90)

inline static constexpr unsigned int Class_1_48570DED401BD199_TypeDefinitionIndex = 32132;

class Class_1_48570DED401BD199 : public ::System::Object
{
public:
	::UnityEngine::AssetBundle* Field_1_1; // 0x10
	::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> Field_1_9; // 0x18
	::RPG::Client::OnAssetOperationDelegate* Field_1_10; // 0x88
	::Collections::Pooled::PooledSet_1<::RPG::Client::AssetSystem::AssetLoader*>* Field_1_5; // 0x90
	::System::Object* Field_1_23; // 0x98
	::UnityEngine::AssetBundleCreateRequest* Field_1_2; // 0xA0
	::Collections::Pooled::PooledList_1<::Class_1_48570DED401BD199*>* Field_1_4; // 0xA8
	::Collections::Pooled::PooledSet_1<::System::UInt64>* Field_1_3; // 0xB0
	::Class_0_16E4307DCC419505_72* Field_1_0; // 0xB8
	::Collections::Pooled::PooledSet_1<::Class_1_48570DED401BD199*>* Field_1_6; // 0xC0
	::System::String* Field_1_11; // 0xC8
	::System::Type* _AssetType_k__BackingField; // 0xD0
	::System::Boolean Field_1_7; // 0xD8
	::System::Byte Field_1_8; // 0xD9
	::System::Boolean _IsCircularDependencyBundle_k__BackingField; // 0xDA
	::System::Int32 _DependencyCount_k__BackingField; // 0xDC
	::System::Int32 _AssetOperationIndex_k__BackingField; // 0xE0
	::RPG::Client::OpType _OpType_k__BackingField; // 0xE4
	::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xE8
	::RPG::Client::AssetState Field_1_22; // 0xEC
	::System::Int32 _BlockIndex_k__BackingField; // 0xF0
	::System::Int32 Field_1_25; // 0xF4
	::System::Int32 Field_1_24; // 0xF8
	::System::Int32 _DependencyOffset_k__BackingField; // 0xFC
	::System::UInt32 _Offset_k__BackingField; // 0x100
	::System::UInt64 _NameHash_k__BackingField; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_AssetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_ASSETNAME_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* get_LoaderType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_LOADERTYPE_OFFSET))(this);
	}

	::System::Type* get_AssetType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_ASSETTYPE_OFFSET))(this);
	}

	::System::Void set_AssetType(::System::Type* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_ASSETTYPE_OFFSET))(this, value);
	}

	::System::UInt64 get_NameHash()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_NAMEHASH_OFFSET))(this);
	}

	::System::Void set_NameHash(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_NAMEHASH_OFFSET))(this, value);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_OFFSET_OFFSET))(this, value);
	}

	::System::Int32 get_BlockIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_BLOCKINDEX_OFFSET))(this, value);
	}

	::System::Int32 get_DependencyCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_DEPENDENCYCOUNT_OFFSET))(this);
	}

	::System::Void set_DependencyCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_DEPENDENCYCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_DependencyOffset()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_DEPENDENCYOFFSET_OFFSET))(this);
	}

	::System::Void set_DependencyOffset(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_DEPENDENCYOFFSET_OFFSET))(this, value);
	}

	::System::Boolean get_IsCircularDependencyBundle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET))(this);
	}

	::System::Void set_IsCircularDependencyBundle(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_ISCIRCULARDEPENDENCYBUNDLE_OFFSET))(this, value);
	}

	::System::Int32 get_AssetOperationIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_ASSETOPERATIONINDEX_OFFSET))(this);
	}

	::System::Void set_AssetOperationIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_ASSETOPERATIONINDEX_OFFSET))(this, value);
	}

	::RPG::Client::OpType get_OpType()
	{
		return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_OPTYPE_OFFSET))(this);
	}

	::System::Void set_OpType(::RPG::Client::OpType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_OPTYPE_OFFSET))(this, value);
	}

	::RPG::Client::LoaderState get_LoaderState()
	{
		return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_LOADERSTATE_OFFSET))(this);
	}

	::System::Void set_LoaderState(::RPG::Client::LoaderState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_LOADERSTATE_OFFSET))(this, value);
	}

	::RPG::Client::AssetState get_AssetState()
	{
		return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GET_ASSETSTATE_OFFSET))(this);
	}

	::System::Void set_AssetState(::RPG::Client::AssetState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SET_ASSETSTATE_OFFSET))(this, a1);
	}

	::System::Object* GetUserParam()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GETUSERPARAM_OFFSET))(this);
	}

	::System::Void SetUserParam(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_SETUSERPARAM_OFFSET))(this, a1);
	}

	::System::Void Method_1_3879DBAFE025A3DA(::System::UInt64 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_3879DBAFE025A3DA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Object* GetAssetObject()
	{
		return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GETASSETOBJECT_OFFSET))(this);
	}

	::System::Boolean IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ISLOADED_OFFSET))(this);
	}

	::System::Boolean IsLoading()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ISLOADING_OFFSET))(this);
	}

	::System::Boolean IsSucceed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ISSUCCEED_OFFSET))(this);
	}

	::System::Boolean IsFailed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ISFAILED_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E28D5BC323824F68(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_E28D5BC323824F68_OFFSET))(this, a1);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* GetLoader()
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_GETLOADER_OFFSET))(this);
	}

	::System::Boolean IsHandleCalled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ISHANDLECALLED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_DISPOSE_OFFSET))(this);
	}

	::System::Void ResetData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_RESETDATA_OFFSET))(this);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_D76259779AD4F010(::UnityEngine::AsyncOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_D76259779AD4F010_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_0D8DB2DC8B47A973_OFFSET))(this);
	}

	::System::Void OnDelayComplete()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ONDELAYCOMPLETE_OFFSET))(this);
	}

	::System::Void Method_1_94269078D81A21CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_94269078D81A21CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B4621977E148EF2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_3B4621977E148EF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_94D70465A48E3543(::RPG::Client::AssetSystem::AssetLoader* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_94D70465A48E3543_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_94D70465A48E3543_1(::RPG::Client::AssetSystem::AssetLoader* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_94D70465A48E3543_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F35542B41826E6DE(::RPG::Client::AssetSystem::AssetLoader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_F35542B41826E6DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_ADDLOADEDHANDLE_OFFSET))(this, a1);
	}

	::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_REMOVELOADEDHANDLE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_410AFB0271155FD6(::Class_1_CEF5F27F657CD849* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEF5F27F657CD849*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_410AFB0271155FD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4702F35034F861D9(::Class_1_CEF5F27F657CD849* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEF5F27F657CD849*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_4702F35034F861D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E59B0636DF9608FF(::Class_1_CEF5F27F657CD849* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEF5F27F657CD849*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_E59B0636DF9608FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_EBBC2DBEFDDF619A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_EBBC2DBEFDDF619A_OFFSET))(this);
	}

	::System::Void Method_1_1F60FDA7C2FB5E1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_1F60FDA7C2FB5E1C_OFFSET))(this);
	}

	::System::Void Method_1_39410AAA536323DB(::Class_0_16E4307DCC419505_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_62*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_39410AAA536323DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4D563D0FC637BFE5(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_4D563D0FC637BFE5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_23A56AB8B0540755(::Class_1_48570DED401BD199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_48570DED401BD199*))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_23A56AB8B0540755_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Void Method_1_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_METHOD_1_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_TOSTRING_OFFSET))(this);
	}

	::System::Void ForceSyncLoad()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199_FORCESYNCLOAD_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48570DED401BD199___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
