#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_099113BEAFEE7B9D_Enum_3_91C9E0EC0FEFC1F9.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_25797252421662EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1BD43ABDBFFA2E1E;
class Class_1_F081267A1EDA8B0F;
class Class_2_0206DD479BB5C906;
class Class_2_D1970C03380B1430;
class Class_2_E7B5A02ED2B31407;
class NapRenderEntity;
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class NapCBWrapper; }

#define CLASS_3_FFD0045B4597F294_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1907BE70)
#define CLASS_3_FFD0045B4597F294_METHOD_3_1255FC446B3047E0_OFFSET UNITYSDK_OFFSET(0x14E425A0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x14E433A0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14E42A80)
#define CLASS_3_FFD0045B4597F294_METHOD_3_35D0A57EE17CF6B0_OFFSET UNITYSDK_OFFSET(0x14E43470)
#define CLASS_3_FFD0045B4597F294_METHOD_3_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x14E43500)
#define CLASS_3_FFD0045B4597F294_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x14E43480)
#define CLASS_3_FFD0045B4597F294_METHOD_3_395CBEE9E73BB1F1_OFFSET UNITYSDK_OFFSET(0x14E42980)
#define CLASS_3_FFD0045B4597F294_METHOD_3_413472096512A213_OFFSET UNITYSDK_OFFSET(0x14E43010)
#define CLASS_3_FFD0045B4597F294_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14E43020)
#define CLASS_3_FFD0045B4597F294_METHOD_3_76068FD3D504270D_OFFSET UNITYSDK_OFFSET(0x14E430C0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0x14E42AE0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_8A76897D6A693475_1_OFFSET UNITYSDK_OFFSET(0x14E42DF0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x14E42F00)
#define CLASS_3_FFD0045B4597F294_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14E43030)
#define CLASS_3_FFD0045B4597F294_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x14E424F0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14E429F0)
#define CLASS_3_FFD0045B4597F294_METHOD_3_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x14E42810)
#define CLASS_3_FFD0045B4597F294_METHOD_3_DAC1D36C75AE20E3_OFFSET UNITYSDK_OFFSET(0x14E43170)
#define CLASS_3_FFD0045B4597F294_METHOD_3_DEE12CBAADD56669_OFFSET UNITYSDK_OFFSET(0x14E42870)
#define CLASS_3_FFD0045B4597F294_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x14E42A70)
#define CLASS_3_FFD0045B4597F294_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14E42970)
#define CLASS_3_FFD0045B4597F294_METHOD_3_FE2E5A71E98F7A12_OFFSET UNITYSDK_OFFSET(0x14E42990)
#define CLASS_3_FFD0045B4597F294_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14E42910)
#define CLASS_3_FFD0045B4597F294_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1907B3D0)
#define CLASS_3_FFD0045B4597F294__CCTOR_OFFSET UNITYSDK_OFFSET(0x1907BEC0)
#define CLASS_3_FFD0045B4597F294__CTOR_OFFSET UNITYSDK_OFFSET(0x1907BF70)

inline static constexpr unsigned int Class_3_FFD0045B4597F294_TypeDefinitionIndex = 57414;

class Class_3_FFD0045B4597F294 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FFD0045B4597F294_TypeDefinitionIndex)->GetStaticField(0xA810);
	}
	static ::System::Single* StaticGet_Field_3_53()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FFD0045B4597F294_TypeDefinitionIndex)->GetStaticField(0xA814);
	}
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FFD0045B4597F294_TypeDefinitionIndex)->GetStaticField(0xA818);
	}
	// static const ::System::Single Field_3_14; // 0x0
	// static const ::System::String* Field_3_13; // 0x0
	// static const ::System::String* Field_3_55; // 0x0
	// static const ::System::String* Field_3_54; // 0x0
	// static const ::System::String* Field_3_52; // 0x0
	// static const ::System::Int32 Field_3_79 = 0x1E; // 0x0
	::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>* Field_3_10; // 0x48
	::Class_2_0206DD479BB5C906* Field_3_35; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0206DD479BB5C906*>* Field_3_62; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_66; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_36; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_3_71; // 0x70
	::MoleMole::MonoRenderHandlerForAvatar* Field_3_51; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_64; // 0x80
	::MoleMole::DitherConfig* Field_3_15; // 0x88
	::MoleMole::CharacterCameraDitheringData Field_3_30; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0206DD479BB5C906*>* Field_3_63; // 0xD8
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_0; // 0xE0
	::Class_2_0206DD479BB5C906* Field_3_38; // 0xE8
	::Class_1_1BD43ABDBFFA2E1E* Field_3_8; // 0xF0
	::System::Collections::Generic::List_1<::Struct_2_25797252421662EF>* Field_3_48; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_D1970C03380B1430*>* Field_3_61; // 0x100
	::System::String* Field_3_47; // 0x108
	::Class_2_0206DD479BB5C906* Field_3_57; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_65; // 0x118
	::Class_2_0206DD479BB5C906* Field_3_58; // 0x120
	::Class_2_E7B5A02ED2B31407* Field_3_45; // 0x128
	::Class_1_F081267A1EDA8B0F* Field_3_50; // 0x130
	::Il2CppArray<::UnityEngine::Material*>* Field_3_4; // 0x138
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_56; // 0x140
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_60; // 0x148
	::UnityEngine::Transform* Field_3_46; // 0x150
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_75; // 0x158
	::MoleMole::EntityHandle Field_3_72; // 0x160
	::System::Collections::Generic::HashSet_1<::System::Type*>* Field_3_49; // 0x170
	::NapRenderEntity* Field_3_7; // 0x178
	::System::Boolean Field_3_31; // 0x180
	::System::Boolean Field_3_6; // 0x181
	::System::Boolean Field_3_37; // 0x182
	::System::Boolean Field_3_11; // 0x183
	::Class_3_099113BEAFEE7B9D_Enum_3_91C9E0EC0FEFC1F9 Field_3_5; // 0x184
	::System::Boolean Field_3_69; // 0x188
	::System::Boolean Field_3_32; // 0x189
	::System::Boolean Field_3_24; // 0x18A
	::System::Boolean Field_3_34; // 0x18B
	::System::Int32 Field_3_43; // 0x18C
	::System::Boolean Field_3_68; // 0x190
	::System::Boolean Field_3_74; // 0x191
	::System::Boolean Field_3_9; // 0x192
	::System::Boolean Field_3_19; // 0x193
	::System::Int32 Field_3_21; // 0x194
	::UnityEngine::Vector2 Field_3_41; // 0x198
	::UnityEngine::Vector2 Field_3_29; // 0x1A0
	::System::Boolean Field_3_70; // 0x1A8
	::System::Boolean Field_3_44; // 0x1A9
	::System::Boolean Field_3_25; // 0x1AA
	::System::Boolean Field_3_42; // 0x1AB
	::System::Int32 Field_3_22; // 0x1AC
	::System::Int32 Field_3_16; // 0x1B0
	::System::Boolean Field_3_39; // 0x1B4
	::System::Boolean Field_3_33; // 0x1B5
	::System::Boolean Field_3_67; // 0x1B6
	::System::Boolean Field_3_73; // 0x1B7
	::System::Int32 Field_3_17; // 0x1B8
	::System::Int32 Field_3_23; // 0x1BC
	::System::Int32 Field_3_18; // 0x1C0
	::UnityEngine::Vector2 Field_3_28; // 0x1C4
	::System::Single Field_3_26; // 0x1CC
	::System::Single Field_3_27; // 0x1D0
	::System::Single Field_3_20; // 0x1D4
	::System::Single Field_3_40; // 0x1D8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_1255FC446B3047E0(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_1255FC446B3047E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Void Method_3_DEE12CBAADD56669(::MoleMole::DitherConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfig*))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_DEE12CBAADD56669_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* Method_3_395CBEE9E73BB1F1()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_395CBEE9E73BB1F1_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::NapCBWrapper* Method_3_FE2E5A71E98F7A12()
	{
		return ((::UnityEngine::Rendering::Universal::NapCBWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_FE2E5A71E98F7A12_OFFSET))(this);
	}

	static ::Class_3_FFD0045B4597F294* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_FFD0045B4597F294*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_3_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_7A9EE6E4B8F1006C_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_413472096512A213_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_8A76897D6A693475_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_3_76068FD3D504270D()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_76068FD3D504270D_OFFSET))(this);
	}

	::System::Boolean Method_3_DAC1D36C75AE20E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_DAC1D36C75AE20E3_OFFSET))(this);
	}

	::System::String* Method_3_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_1798FAFF45053267_OFFSET))(this);
	}

	::System::Void Method_3_35D0A57EE17CF6B0(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_35D0A57EE17CF6B0_OFFSET))(this, a1);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_3_8A76897D6A693475_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_8A76897D6A693475_1_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0045B4597F294_METHOD_3_35EA095E1AFDD9C8_1_OFFSET))(this);
	}
};
