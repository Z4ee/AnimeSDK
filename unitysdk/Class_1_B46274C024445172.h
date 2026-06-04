#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class Class_1_13264FE803E7E6C1;
class Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890;
class Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4;
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

#define CLASS_1_B46274C024445172_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF662A0)
#define CLASS_1_B46274C024445172_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xAF67940)
#define CLASS_1_B46274C024445172_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xAF67900)
#define CLASS_1_B46274C024445172_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAF678E0)
#define CLASS_1_B46274C024445172_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xAF678C0)
#define CLASS_1_B46274C024445172_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xAF66040)
#define CLASS_1_B46274C024445172_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAF67920)
#define CLASS_1_B46274C024445172_METHOD_1_09CD9BF84DD32DF8_OFFSET UNITYSDK_OFFSET(0xAF67380)
#define CLASS_1_B46274C024445172_METHOD_1_226056C85C03F11E_OFFSET UNITYSDK_OFFSET(0xAF667E0)
#define CLASS_1_B46274C024445172_METHOD_1_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0xAF669B0)
#define CLASS_1_B46274C024445172_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0xAF66D80)
#define CLASS_1_B46274C024445172_METHOD_1_3DFACF146C0F4294_OFFSET UNITYSDK_OFFSET(0xAF668E0)
#define CLASS_1_B46274C024445172_METHOD_1_41EF2357FD2FEE64_OFFSET UNITYSDK_OFFSET(0xAF67530)
#define CLASS_1_B46274C024445172_METHOD_1_66A26E3317E26881_OFFSET UNITYSDK_OFFSET(0xAF67110)
#define CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_1_OFFSET UNITYSDK_OFFSET(0xAF66F80)
#define CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_OFFSET UNITYSDK_OFFSET(0xAF66DF0)
#define CLASS_1_B46274C024445172_METHOD_1_82835BF5084804CE_OFFSET UNITYSDK_OFFSET(0xAF66900)
#define CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xAF66AA0)
#define CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xAF66AF0)
#define CLASS_1_B46274C024445172_METHOD_1_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0xAF66460)
#define CLASS_1_B46274C024445172_METHOD_1_BD8B32CA7F231547_OFFSET UNITYSDK_OFFSET(0xAF66060)
#define CLASS_1_B46274C024445172_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0xAF67310)
#define CLASS_1_B46274C024445172_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0xAF66D30)
#define CLASS_1_B46274C024445172_METHOD_1_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0xAF66C20)
#define CLASS_1_B46274C024445172_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0xAF66B60)
#define CLASS_1_B46274C024445172_METHOD_1_E1D051694DA43BE2_OFFSET UNITYSDK_OFFSET(0xAF666C0)
#define CLASS_1_B46274C024445172_METHOD_1_F7F80C1DB6B12DA7_OFFSET UNITYSDK_OFFSET(0xAF67830)
#define CLASS_1_B46274C024445172_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xAF66640)
#define CLASS_1_B46274C024445172_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xAF67950)
#define CLASS_1_B46274C024445172_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xAF67910)
#define CLASS_1_B46274C024445172_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAF678F0)
#define CLASS_1_B46274C024445172_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xAF678D0)
#define CLASS_1_B46274C024445172_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xAF66050)
#define CLASS_1_B46274C024445172_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAF67930)
#define CLASS_1_B46274C024445172__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF67AF0)
#define CLASS_1_B46274C024445172__CTOR_OFFSET UNITYSDK_OFFSET(0xAF67960)

inline static constexpr unsigned int Class_1_B46274C024445172_TypeDefinitionIndex = 64780;

class Class_1_B46274C024445172 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46274C024445172_TypeDefinitionIndex)->GetStaticField(0xBCE0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46274C024445172_TypeDefinitionIndex)->GetStaticField(0xBCE4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46274C024445172_TypeDefinitionIndex)->GetStaticField(0xBCE8);
	}
	::System::Action* _Callback_k__BackingField; // 0x10
	::Class_1_13264FE803E7E6C1* Field_1_4; // 0x18
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x20
	::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4* Field_1_6; // 0x28
	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* _Config_k__BackingField; // 0x30
	::Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890* Field_1_8; // 0x38
	::Class_1_D27BF54F25500E5F* Field_1_9; // 0x40
	::UnityEngine::MaterialPropertyBlock* Field_1_10; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_11; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_12; // 0x58
	::System::String* _PrefabPath_k__BackingField; // 0x60
	::UnityEngine::Rendering::BatchAnimationInstance* _BatchAnimation_k__BackingField; // 0x68
	::System::Boolean Field_1_15; // 0x70
	::System::Int32 Field_1_16; // 0x74
	::System::Nullable_1<::System::Int32> Field_1_17; // 0x78
	::System::Single _Radius_k__BackingField; // 0x80
	::System::Nullable_1<::System::Int32> Field_1_19; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172__CCTOR_OFFSET))();
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_RADIUS_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD8B32CA7F231547(::System::String* a1, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_BD8B32CA7F231547_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1D051694DA43BE2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_E1D051694DA43BE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_226056C85C03F11E(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_226056C85C03F11E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82835BF5084804CE(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_82835BF5084804CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_D631E6EFCE1547F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_35A1BA48D9ACC587_OFFSET))(this, a1);
	}

	::System::Void Method_1_678A641D7D5163B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_OFFSET))(this);
	}

	::System::Void Method_1_678A641D7D5163B2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_1_OFFSET))(this);
	}

	::System::Void Method_1_66A26E3317E26881(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_66A26E3317E26881_OFFSET))(this, a1);
	}

	::System::Void Method_1_B560799CAB48EE76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_B560799CAB48EE76_OFFSET))(this, a1);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_13264FE803E7E6C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13264FE803E7E6C1*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_09CD9BF84DD32DF8(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_09CD9BF84DD32DF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7F80C1DB6B12DA7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_F7F80C1DB6B12DA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_41EF2357FD2FEE64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_41EF2357FD2FEE64_OFFSET))(this);
	}

	::System::Void Method_1_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_PREFABPATH_OFFSET))(this, a1);
	}

	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* get_Config()
	{
		return ((::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_CALLBACK_OFFSET))(this);
	}

	::System::Void set_Callback(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_CALLBACK_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_TRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_BATCHANIMATION_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* Method_1_3DFACF146C0F4294()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_3DFACF146C0F4294_OFFSET))(this);
	}
};
