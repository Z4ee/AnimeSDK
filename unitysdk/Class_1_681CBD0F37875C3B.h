#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class Class_1_13264FE803E7E6C1;
class Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890;
class Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4;
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

#define CLASS_1_681CBD0F37875C3B_CLEAR_OFFSET UNITYSDK_OFFSET(0x16493C70)
#define CLASS_1_681CBD0F37875C3B_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x164953F0)
#define CLASS_1_681CBD0F37875C3B_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x164953B0)
#define CLASS_1_681CBD0F37875C3B_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16495390)
#define CLASS_1_681CBD0F37875C3B_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x16495370)
#define CLASS_1_681CBD0F37875C3B_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x164939F0)
#define CLASS_1_681CBD0F37875C3B_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x164953D0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_0553429A79B3385F_OFFSET UNITYSDK_OFFSET(0x16493E20)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_126C73E7072C8AE8_OFFSET UNITYSDK_OFFSET(0x16494DE0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_226056C85C03F11E_OFFSET UNITYSDK_OFFSET(0x164941D0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x164943A0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0x16494770)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_3DFACF146C0F4294_OFFSET UNITYSDK_OFFSET(0x164942D0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_6693DBA1521BFC5B_OFFSET UNITYSDK_OFFSET(0x16494FC0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_82835BF5084804CE_OFFSET UNITYSDK_OFFSET(0x164942F0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0x16494D70)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x16494490)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164944E0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_C80B40700033F380_OFFSET UNITYSDK_OFFSET(0x16493A10)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x16494720)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0x16494610)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x16494550)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_E1D051694DA43BE2_OFFSET UNITYSDK_OFFSET(0x164940B0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_F3BF7103107A47CD_1_OFFSET UNITYSDK_OFFSET(0x16494990)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_F3BF7103107A47CD_OFFSET UNITYSDK_OFFSET(0x164947E0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_F7E674C1303ACB5B_OFFSET UNITYSDK_OFFSET(0x16494B40)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_F7F80C1DB6B12DA7_OFFSET UNITYSDK_OFFSET(0x164952E0)
#define CLASS_1_681CBD0F37875C3B_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x16494030)
#define CLASS_1_681CBD0F37875C3B_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x16495400)
#define CLASS_1_681CBD0F37875C3B_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x164953C0)
#define CLASS_1_681CBD0F37875C3B_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x164953A0)
#define CLASS_1_681CBD0F37875C3B_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x16495380)
#define CLASS_1_681CBD0F37875C3B_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x16493A00)
#define CLASS_1_681CBD0F37875C3B_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x164953E0)
#define CLASS_1_681CBD0F37875C3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16495590)
#define CLASS_1_681CBD0F37875C3B__CTOR_OFFSET UNITYSDK_OFFSET(0x16495410)

inline static constexpr unsigned int Class_1_681CBD0F37875C3B_TypeDefinitionIndex = 66181;

class Class_1_681CBD0F37875C3B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_681CBD0F37875C3B_TypeDefinitionIndex)->GetStaticField(0x7EA0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_681CBD0F37875C3B_TypeDefinitionIndex)->GetStaticField(0x7EA4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_681CBD0F37875C3B_TypeDefinitionIndex)->GetStaticField(0x7EA8);
	}
	::Class_1_13264FE803E7E6C1* Field_1_3; // 0x10
	::System::Action* _Callback_k__BackingField; // 0x18
	::Class_1_D27BF54F25500E5F* Field_1_5; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x28
	::UnityEngine::Rendering::BatchAnimationInstance* _BatchAnimation_k__BackingField; // 0x30
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x38
	::Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890* Field_1_9; // 0x40
	::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4* Field_1_10; // 0x48
	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* _Config_k__BackingField; // 0x50
	::System::String* _PrefabPath_k__BackingField; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_13; // 0x60
	::UnityEngine::MaterialPropertyBlock* Field_1_14; // 0x68
	::System::Nullable_1<::System::Int32> Field_1_15; // 0x70
	::System::Nullable_1<::System::Int32> Field_1_16; // 0x78
	::System::Int32 Field_1_17; // 0x80
	::System::Single _Radius_k__BackingField; // 0x84
	::System::Boolean Field_1_19; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B__CCTOR_OFFSET))();
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_SET_RADIUS_OFFSET))(this, a1);
	}

	::System::Void Method_1_C80B40700033F380(::System::String* a1, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_C80B40700033F380_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1D051694DA43BE2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_E1D051694DA43BE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_226056C85C03F11E(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_226056C85C03F11E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82835BF5084804CE(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_82835BF5084804CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_D631E6EFCE1547F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_35A1BA48D9ACC587_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3BF7103107A47CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_F3BF7103107A47CD_OFFSET))(this);
	}

	::System::Void Method_1_F3BF7103107A47CD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_F3BF7103107A47CD_1_OFFSET))(this);
	}

	::System::Void Method_1_F7E674C1303ACB5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_F7E674C1303ACB5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0553429A79B3385F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_0553429A79B3385F_OFFSET))(this, a1);
	}

	::System::Void Method_1_841D90BDB3E94FF6(::Class_1_13264FE803E7E6C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13264FE803E7E6C1*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_126C73E7072C8AE8(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_126C73E7072C8AE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7F80C1DB6B12DA7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_F7F80C1DB6B12DA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6693DBA1521BFC5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_6693DBA1521BFC5B_OFFSET))(this);
	}

	::System::Void Method_1_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_SET_PREFABPATH_OFFSET))(this, a1);
	}

	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* get_Config()
	{
		return ((::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_GET_CALLBACK_OFFSET))(this);
	}

	::System::Void set_Callback(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_SET_CALLBACK_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_SET_TRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_SET_BATCHANIMATION_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* Method_1_3DFACF146C0F4294()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681CBD0F37875C3B_METHOD_1_3DFACF146C0F4294_OFFSET))(this);
	}
};
