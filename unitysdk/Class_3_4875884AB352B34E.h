#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_4875884AB352B34E_Enum_3_11C5849841D27642.h"
#include "unitysdk/Enum_3_1B39CAF32BBB5989.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_37A5C83AFE47FFAE.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8FA987B34A9AFBEA;
class Class_2_620FBFF36868E770;
class Class_2_69EA47680D9A92E8;
class Class_3_1CF0AE513797DBD3;
class Class_3_29AF178C9CE3EC26;
class Class_3_D902FC5F64432838;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F29FF2F0F1D4B205;
class Class_3_FFD0045B4597F294;
namespace MoleMole { class FloatRendererFader; }
namespace MoleMole { class LightFader; }
namespace MoleMole { class MatKeyPropValueFaderByIndex; }
namespace MoleMole { class MatKeyWordFaderByIndex; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_4875884AB352B34E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16B13E20)
#define CLASS_3_4875884AB352B34E_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x16B14510)
#define CLASS_3_4875884AB352B34E_METHOD_3_0777EBFE74BE83BE_OFFSET UNITYSDK_OFFSET(0x16B14620)
#define CLASS_3_4875884AB352B34E_METHOD_3_094B219746F7398E_OFFSET UNITYSDK_OFFSET(0x16B14BD0)
#define CLASS_3_4875884AB352B34E_METHOD_3_3AC572023154FC7C_OFFSET UNITYSDK_OFFSET(0x16B14A30)
#define CLASS_3_4875884AB352B34E_METHOD_3_413472096512A213_OFFSET UNITYSDK_OFFSET(0x16B144F0)
#define CLASS_3_4875884AB352B34E_METHOD_3_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x16B151E0)
#define CLASS_3_4875884AB352B34E_METHOD_3_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x16B151D0)
#define CLASS_3_4875884AB352B34E_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x16B14500)
#define CLASS_3_4875884AB352B34E_METHOD_3_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x16B15400)
#define CLASS_3_4875884AB352B34E_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x16B15380)
#define CLASS_3_4875884AB352B34E_METHOD_3_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x16B151F0)
#define CLASS_3_4875884AB352B34E_METHOD_3_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x16B13C00)
#define CLASS_3_4875884AB352B34E_METHOD_3_93097B60EF70000E_OFFSET UNITYSDK_OFFSET(0x16B14B20)
#define CLASS_3_4875884AB352B34E_METHOD_3_9522E2EA1972A448_OFFSET UNITYSDK_OFFSET(0x16B151B0)
#define CLASS_3_4875884AB352B34E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16B15120)
#define CLASS_3_4875884AB352B34E_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0x16B15410)
#define CLASS_3_4875884AB352B34E_METHOD_3_AF67B652549A697D_OFFSET UNITYSDK_OFFSET(0x16B15390)
#define CLASS_3_4875884AB352B34E_METHOD_3_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x16B152B0)
#define CLASS_3_4875884AB352B34E_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x16B15980)
#define CLASS_3_4875884AB352B34E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x16B152C0)
#define CLASS_3_4875884AB352B34E_METHOD_3_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x16B14600)
#define CLASS_3_4875884AB352B34E_METHOD_3_DFEA80256A97C1C4_OFFSET UNITYSDK_OFFSET(0x16B13F40)
#define CLASS_3_4875884AB352B34E_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16B152A0)
#define CLASS_3_4875884AB352B34E_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16B15970)
#define CLASS_3_4875884AB352B34E_METHOD_3_F080F883C248B627_OFFSET UNITYSDK_OFFSET(0x16B15420)
#define CLASS_3_4875884AB352B34E_METHOD_3_FC1C0807F99BD816_OFFSET UNITYSDK_OFFSET(0x16B14520)
#define CLASS_3_4875884AB352B34E_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16B15240)
#define CLASS_3_4875884AB352B34E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16B13510)
#define CLASS_3_4875884AB352B34E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B13E70)
#define CLASS_3_4875884AB352B34E__CTOR_OFFSET UNITYSDK_OFFSET(0x16B13EF0)

inline static constexpr unsigned int Class_3_4875884AB352B34E_TypeDefinitionIndex = 68973;

class Class_3_4875884AB352B34E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_88 = 0x65; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_73; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* Field_3_43; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_72; // 0x58
	::Il2CppArray<::System::Single>* Field_3_62; // 0x60
	::MoleMole::Battle::Entity* Field_3_8; // 0x68
	::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* Field_3_65; // 0x70
	::UnityEngine::AnimationCurve* Field_3_83; // 0x78
	::Class_3_F29FF2F0F1D4B205* Field_3_12; // 0x80
	::UnityEngine::Transform* Field_3_7; // 0x88
	::Il2CppArray<::MoleMole::LightFader*>* Field_3_58; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_69EA47680D9A92E8*>*>* Field_3_76; // 0x98
	::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* Field_3_5; // 0xA0
	::Class_3_1CF0AE513797DBD3* Field_3_13; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_69EA47680D9A92E8*>* Field_3_55; // 0xB0
	::Il2CppArray<::MoleMole::MatKeyPropValueFaderByIndex*>* Field_3_66; // 0xB8
	::Class_1_8FA987B34A9AFBEA* Field_3_77; // 0xC0
	::System::String* Field_3_4; // 0xC8
	::Class_3_29AF178C9CE3EC26* Field_3_15; // 0xD0
	::MoleMole::EntityHandle Field_3_10; // 0xD8
	::UnityEngine::MaterialPropertyBlock* Field_3_53; // 0xE8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_67; // 0xF0
	::Class_3_FFD0045B4597F294* Field_3_16; // 0xF8
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_47; // 0x100
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_69; // 0x108
	::Il2CppArray<::MoleMole::FloatRendererFader*>* Field_3_61; // 0x110
	::Il2CppArray<::MoleMole::FloatRendererFader*>* Field_3_60; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_69EA47680D9A92E8*>*>* Field_3_74; // 0x120
	::System::Collections::Generic::List_1<::Class_2_69EA47680D9A92E8*>* Field_3_56; // 0x128
	::UnityEngine::Transform* Field_3_25; // 0x130
	::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>* Field_3_54; // 0x138
	::System::Collections::Generic::List_1<::Class_2_620FBFF36868E770*>* Field_3_57; // 0x140
	::MoleMole::EntityHandle Field_3_6; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_71; // 0x158
	::System::String* Field_3_3; // 0x160
	::Il2CppArray<::System::Single>* Field_3_59; // 0x168
	::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>* Field_3_52; // 0x170
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_2_69EA47680D9A92E8*>*>* Field_3_70; // 0x178
	::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* Field_3_64; // 0x180
	::Class_3_DFD5D1FDB9D2A4AC* Field_3_14; // 0x188
	::Il2CppArray<::MoleMole::FloatRendererFader*>* Field_3_63; // 0x190
	::System::String* Field_3_46; // 0x198
	::MoleMole::Config::ConfigPosRot* Field_3_38; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_75; // 0x1A8
	::Foundation::Variable_1<::System::Single> Field_3_30; // 0x1B0
	::System::Collections::Generic::List_1<::MoleMole::LightFader*>* Field_3_78; // 0x1C8
	::Il2CppArray<::Il2CppArray<::System::Single>*>* Field_3_42; // 0x1D0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_48; // 0x1D8
	::Il2CppArray<::Il2CppArray<::System::Single>*>* Field_3_51; // 0x1E0
	::Struct_2_37A5C83AFE47FFAE Field_3_87; // 0x1E8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_68; // 0x200
	::System::Int32 Field_3_2; // 0x208
	::System::Single Field_3_29; // 0x20C
	::UnityEngine::Vector3 Field_3_20; // 0x210
	::System::Single Field_3_27; // 0x21C
	::Enum_3_1B39CAF32BBB5989 Field_3_31; // 0x220
	::System::Single Field_3_36; // 0x224
	::Class_3_4875884AB352B34E_Enum_3_11C5849841D27642 Field_3_18; // 0x228
	::UnityEngine::Vector3 Field_3_19; // 0x22C
	::System::UInt32 Field_3_9; // 0x238
	::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel Field_3_0; // 0x23C
	::System::Boolean Field_3_23; // 0x240
	::System::Boolean Field_3_79; // 0x241
	::System::Boolean Field_3_45; // 0x242
	::System::Boolean Field_3_1; // 0x243
	::System::Boolean Field_3_50; // 0x244
	::System::Boolean Field_3_41; // 0x245
	::System::Boolean Field_3_82; // 0x246
	::System::Boolean Field_3_39; // 0x247
	::System::Single Field_3_28; // 0x248
	::System::Boolean Field_3_35; // 0x24C
	::System::Boolean Field_3_40; // 0x24D
	::System::Boolean Field_3_24; // 0x24E
	::System::Single Field_3_37; // 0x250
	::System::Single Field_3_49; // 0x254
	::System::Single Field_3_84; // 0x258
	::System::Boolean Field_3_21; // 0x25C
	::System::Boolean Field_3_80; // 0x25D
	::System::Boolean Field_3_11; // 0x25E
	::System::Boolean Field_3_33; // 0x25F
	::System::Boolean Field_3_22; // 0x260
	::System::Boolean Field_3_26; // 0x261
	::System::Boolean Field_3_32; // 0x262
	::System::Boolean Field_3_81; // 0x263
	::System::Single Field_3_85; // 0x264
	::System::Boolean Field_3_86; // 0x268
	::System::Boolean Field_3_34; // 0x269
	::System::Boolean Field_3_44; // 0x26A
	::System::Boolean Field_3_17; // 0x26B

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_DFEA80256A97C1C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_DFEA80256A97C1C4_OFFSET))(this, a1);
	}

	::MoleMole::EntityHandle Method_3_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_413472096512A213_OFFSET))(this);
	}

	::Class_3_4875884AB352B34E_Enum_3_11C5849841D27642 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_4875884AB352B34E_Enum_3_11C5849841D27642(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::Class_3_D902FC5F64432838* Method_3_FC1C0807F99BD816()
	{
		return ((::Class_3_D902FC5F64432838*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_FC1C0807F99BD816_OFFSET))(this);
	}

	::System::Single Method_3_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_DA7D5FED1E10712C_OFFSET))(this);
	}

	::System::Void Method_3_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_3_0777EBFE74BE83BE(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_0777EBFE74BE83BE_OFFSET))(this, a1);
	}

	::System::Void Method_3_094B219746F7398E(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigPosRot* a4, ::MoleMole::EntityHandle a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_094B219746F7398E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_3AC572023154FC7C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_3AC572023154FC7C_OFFSET))(this);
	}

	::System::Void Method_3_9522E2EA1972A448(::Foundation::Variable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_9522E2EA1972A448_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_4D71BCFB74C16073_1_OFFSET))(this);
	}

	::System::Void Method_3_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_93097B60EF70000E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_93097B60EF70000E_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_B9D8FD15D18938A0_OFFSET))(this);
	}

	static ::Class_3_4875884AB352B34E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_4875884AB352B34E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* Method_3_AF67B652549A697D()
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_AF67B652549A697D_OFFSET))(this);
	}

	::System::Void Method_3_65585810E2458BA4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_65585810E2458BA4_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_4875884AB352B34E_Enum_3_11C5849841D27642 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E_Enum_3_11C5849841D27642))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::System::Void Method_3_F080F883C248B627(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::Transform* a4, ::System::String* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::MoleMole::EntityHandle a8, ::System::String* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_F080F883C248B627_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_4875884AB352B34E_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}
};
