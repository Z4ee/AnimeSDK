#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class Class_1_142F37181E3E9CC1;
class Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890;
class Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4;
class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class PedestrianMemberExternalConfig_BatchAnimation; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_B88794584299DCB3_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A04010)
#define CLASS_1_B88794584299DCB3_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x9A05620)
#define CLASS_1_B88794584299DCB3_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9A055E0)
#define CLASS_1_B88794584299DCB3_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9A055C0)
#define CLASS_1_B88794584299DCB3_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A055A0)
#define CLASS_1_B88794584299DCB3_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9A03DB0)
#define CLASS_1_B88794584299DCB3_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A05600)
#define CLASS_1_B88794584299DCB3_METHOD_1_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x9A041C0)
#define CLASS_1_B88794584299DCB3_METHOD_1_09CD9BF84DD32DF8_OFFSET UNITYSDK_OFFSET(0x9A050C0)
#define CLASS_1_B88794584299DCB3_METHOD_1_0E8E4459B26B6D1C_OFFSET UNITYSDK_OFFSET(0x9A054F0)
#define CLASS_1_B88794584299DCB3_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x9A05250)
#define CLASS_1_B88794584299DCB3_METHOD_1_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x9A046F0)
#define CLASS_1_B88794584299DCB3_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0x9A04AD0)
#define CLASS_1_B88794584299DCB3_METHOD_1_3CDB5DB8BD0AC758_OFFSET UNITYSDK_OFFSET(0x9A04E50)
#define CLASS_1_B88794584299DCB3_METHOD_1_3DFACF146C0F4294_OFFSET UNITYSDK_OFFSET(0x9A04620)
#define CLASS_1_B88794584299DCB3_METHOD_1_5EA79CD11E1E5CB8_OFFSET UNITYSDK_OFFSET(0x9A05050)
#define CLASS_1_B88794584299DCB3_METHOD_1_678A641D7D5163B2_1_OFFSET UNITYSDK_OFFSET(0x9A04CD0)
#define CLASS_1_B88794584299DCB3_METHOD_1_678A641D7D5163B2_OFFSET UNITYSDK_OFFSET(0x9A04B40)
#define CLASS_1_B88794584299DCB3_METHOD_1_82835BF5084804CE_OFFSET UNITYSDK_OFFSET(0x9A04640)
#define CLASS_1_B88794584299DCB3_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x9A047E0)
#define CLASS_1_B88794584299DCB3_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9A04830)
#define CLASS_1_B88794584299DCB3_METHOD_1_9F8BD2019ACB1327_OFFSET UNITYSDK_OFFSET(0x9A04550)
#define CLASS_1_B88794584299DCB3_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x9A04A80)
#define CLASS_1_B88794584299DCB3_METHOD_1_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0x9A04960)
#define CLASS_1_B88794584299DCB3_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x9A048A0)
#define CLASS_1_B88794584299DCB3_METHOD_1_E1D051694DA43BE2_OFFSET UNITYSDK_OFFSET(0x9A04420)
#define CLASS_1_B88794584299DCB3_METHOD_1_F59E251BC8671D49_OFFSET UNITYSDK_OFFSET(0x9A03DD0)
#define CLASS_1_B88794584299DCB3_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x9A043A0)
#define CLASS_1_B88794584299DCB3_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x9A05630)
#define CLASS_1_B88794584299DCB3_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9A055F0)
#define CLASS_1_B88794584299DCB3_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9A055D0)
#define CLASS_1_B88794584299DCB3_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A055B0)
#define CLASS_1_B88794584299DCB3_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9A03DC0)
#define CLASS_1_B88794584299DCB3_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A05610)
#define CLASS_1_B88794584299DCB3__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A057B0)
#define CLASS_1_B88794584299DCB3__CTOR_OFFSET UNITYSDK_OFFSET(0x9A05640)

inline static constexpr unsigned int Class_1_B88794584299DCB3_TypeDefinitionIndex = 63859;

class Class_1_B88794584299DCB3 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_17()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B88794584299DCB3_TypeDefinitionIndex)->GetStaticField(0x5F30);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B88794584299DCB3_TypeDefinitionIndex)->GetStaticField(0x5F34);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B88794584299DCB3_TypeDefinitionIndex)->GetStaticField(0x5F38);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_13; // 0x10
	::UnityEngine::MaterialPropertyBlock* Field_1_15; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_12; // 0x20
	::Class_1_142F37181E3E9CC1* Field_1_8; // 0x28
	::System::String* _PrefabPath_k__BackingField; // 0x30
	::UnityEngine::Rendering::BatchAnimationInstance* _BatchAnimation_k__BackingField; // 0x38
	::Class_1_D27BF54F25500E5F* Field_1_16; // 0x40
	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* _Config_k__BackingField; // 0x48
	::Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4* Field_1_10; // 0x50
	::Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890* Field_1_11; // 0x58
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x60
	::System::Action* _Callback_k__BackingField; // 0x68
	::System::Boolean Field_1_14; // 0x70
	::System::Single _Radius_k__BackingField; // 0x74
	::System::Nullable_1<::System::Int32> Field_1_6; // 0x78
	::System::Int32 Field_1_9; // 0x80
	::System::Nullable_1<::System::Int32> Field_1_7; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3__CCTOR_OFFSET))();
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_SET_RADIUS_OFFSET))(this, value);
	}

	::System::Void Method_1_F59E251BC8671D49(::System::String* a1, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_F59E251BC8671D49_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1D051694DA43BE2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_E1D051694DA43BE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F8BD2019ACB1327(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_9F8BD2019ACB1327_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82835BF5084804CE(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_82835BF5084804CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_D631E6EFCE1547F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_35A1BA48D9ACC587_OFFSET))(this, a1);
	}

	::System::Void Method_1_678A641D7D5163B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_678A641D7D5163B2_OFFSET))(this);
	}

	::System::Void Method_1_678A641D7D5163B2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_678A641D7D5163B2_1_OFFSET))(this);
	}

	::System::Void Method_1_3CDB5DB8BD0AC758(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_3CDB5DB8BD0AC758_OFFSET))(this, a1);
	}

	::System::Void Method_1_05891E8E87C14559(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_05891E8E87C14559_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EA79CD11E1E5CB8(::Class_1_142F37181E3E9CC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_142F37181E3E9CC1*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_5EA79CD11E1E5CB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_09CD9BF84DD32DF8(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_09CD9BF84DD32DF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E8E4459B26B6D1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_0E8E4459B26B6D1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	::System::Void Method_1_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_SET_PREFABPATH_OFFSET))(this, value);
	}

	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* get_Config()
	{
		return ((::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_GET_CALLBACK_OFFSET))(this);
	}

	::System::Void set_Callback(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_SET_CALLBACK_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_SET_TRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimationInstance* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_SET_BATCHANIMATION_OFFSET))(this, value);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* Method_1_3DFACF146C0F4294()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B88794584299DCB3_METHOD_1_3DFACF146C0F4294_OFFSET))(this);
	}
};
