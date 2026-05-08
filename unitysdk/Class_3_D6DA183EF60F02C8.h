#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_EffectMaterialControlConfig.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_10EF7FB9B576FF14;
class Class_3_D6DA183EF60F02C8_Class_1_6D78250EABD443CF;
class EtherEyeParticleMesh;
namespace MoleMole { class DynamicBoneParaSwitch; }
namespace MoleMole { class MonoEffect; }
namespace MoleMole { class MonoEffectPluginAttachPoint; }
namespace MoleMole { class MonoEffectPluginAudio; }
namespace MoleMole::Battle { class XWeaponTrailCustom; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_D6DA183EF60F02C8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x140E24F0)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_04F8C9F9FCA37601_OFFSET UNITYSDK_OFFSET(0x140E49E0)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_1B2F2A4935FAA96A_1_OFFSET UNITYSDK_OFFSET(0x140E4050)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_1B2F2A4935FAA96A_2_OFFSET UNITYSDK_OFFSET(0x140E52A0)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_1B2F2A4935FAA96A_OFFSET UNITYSDK_OFFSET(0x140E2840)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x140E5080)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_37508DAB2BAF95D0_OFFSET UNITYSDK_OFFSET(0x140E4460)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_40BEAD28720EA361_OFFSET UNITYSDK_OFFSET(0x140E50E0)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_510AB5D6C441A016_1_OFFSET UNITYSDK_OFFSET(0x140E4250)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_510AB5D6C441A016_OFFSET UNITYSDK_OFFSET(0x140E2A50)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_53392EADBCB6AF59_OFFSET UNITYSDK_OFFSET(0x140E3610)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_5472C19BCC71DEAF_OFFSET UNITYSDK_OFFSET(0x140E4640)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x140E2320)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x140E4E40)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x140E3580)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_AFC4F0A8F621F288_1_OFFSET UNITYSDK_OFFSET(0x140E3290)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_AFC4F0A8F621F288_2_OFFSET UNITYSDK_OFFSET(0x140E2F80)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_AFC4F0A8F621F288_OFFSET UNITYSDK_OFFSET(0x140E2C20)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_B380ADA6509D5935_OFFSET UNITYSDK_OFFSET(0x140E4830)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x140E4040)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x140E27C0)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_DFD1E1DCADE26240_OFFSET UNITYSDK_OFFSET(0x140E3CF0)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x140E4820)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x140E4630)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_F9DAB08EC8926B1B_1_OFFSET UNITYSDK_OFFSET(0x140E4E80)
#define CLASS_3_D6DA183EF60F02C8_METHOD_3_F9DAB08EC8926B1B_OFFSET UNITYSDK_OFFSET(0x140E4C70)
#define CLASS_3_D6DA183EF60F02C8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x140E19D0)
#define CLASS_3_D6DA183EF60F02C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x140E2540)
#define CLASS_3_D6DA183EF60F02C8__CTOR_OFFSET UNITYSDK_OFFSET(0x140E25C0)

inline static constexpr unsigned int Class_3_D6DA183EF60F02C8_TypeDefinitionIndex = 52349;

class Class_3_D6DA183EF60F02C8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_59 = 0x68; // 0x0
	::EtherEyeParticleMesh* Field_3_29; // 0x48
	::Il2CppArray<::UnityEngine::Animation*>* Field_3_14; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_3_37; // 0x58
	::Il2CppArray<::UnityEngine::Light*>* Field_3_6; // 0x60
	::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>* Field_3_8; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_57; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_58; // 0x78
	::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>* Field_3_49; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_3_34; // 0x88
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* Field_3_38; // 0x90
	::Foundation::AssetPath Field_3_0; // 0x98
	::UnityEngine::Animation* Field_3_13; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_33; // 0xB0
	::MoleMole::MonoEffectPluginAttachPoint* Field_3_27; // 0xB8
	::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig Field_3_55; // 0xC0
	::MoleMole::MonoEffectPluginAudio* Field_3_28; // 0xD0
	::System::Collections::Generic::List_1<::Struct_2_984AA94FB23486F9_2>* Field_3_35; // 0xD8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Field_3_52; // 0xE0
	::MoleMole::Battle::XWeaponTrailCustom* Field_3_26; // 0xE8
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_9; // 0xF0
	::MoleMole::EntityHandle Field_3_30; // 0xF8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_3_D6DA183EF60F02C8_Class_1_6D78250EABD443CF*>*>* Field_3_48; // 0x108
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_53; // 0x110
	::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>* Field_3_36; // 0x118
	::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_3_11; // 0x120
	::MoleMole::MonoEffect* Field_3_21; // 0x128
	::Il2CppArray<::System::Boolean>* Field_3_7; // 0x130
	::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* Field_3_10; // 0x138
	::System::Action_1<::UnityEngine::GameObject*>* Field_3_50; // 0x140
	::Class_1_10EF7FB9B576FF14* Field_3_19; // 0x148
	::UnityEngine::GameObject* Field_3_5; // 0x150
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_32; // 0x158
	::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig Field_3_54; // 0x160
	::UnityEngine::Vector3 Field_3_47; // 0x170
	::UnityEngine::Vector3 Field_3_43; // 0x17C
	::System::Boolean Field_3_3; // 0x188
	::System::Boolean Field_3_4; // 0x189
	::System::Boolean Field_3_23; // 0x18A
	::System::Boolean Field_3_31; // 0x18B
	::UnityEngine::Quaternion Field_3_44; // 0x18C
	::UnityEngine::Quaternion Field_3_46; // 0x19C
	::UnityEngine::Vector3 Field_3_16; // 0x1AC
	::UnityEngine::Vector3 Field_3_15; // 0x1B8
	::UnityEngine::Vector3 Field_3_17; // 0x1C4
	::UnityEngine::Vector3 Field_3_45; // 0x1D0
	::UnityEngine::Vector3 Field_3_18; // 0x1DC
	::System::Single Field_3_56; // 0x1E8
	::System::Boolean Field_3_41; // 0x1EC
	::System::Boolean Field_3_24; // 0x1ED
	::System::Boolean Field_3_39; // 0x1EE
	::System::Boolean Field_3_40; // 0x1EF
	::System::Nullable_1<::System::Boolean> Field_3_51; // 0x1F0
	::System::Boolean Field_3_1; // 0x1F2
	::System::Int32 Field_3_25; // 0x1F4
	::System::Boolean Field_3_12; // 0x1F8
	::System::Boolean Field_3_2; // 0x1F9
	::System::Boolean Field_3_22; // 0x1FA
	::System::Boolean Field_3_20; // 0x1FB
	::UnityEngine::Vector3 Field_3_42; // 0x1FC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_D6DA183EF60F02C8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D6DA183EF60F02C8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_1B2F2A4935FAA96A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_1B2F2A4935FAA96A_OFFSET))(this);
	}

	::System::Void Method_3_510AB5D6C441A016(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_510AB5D6C441A016_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_AFC4F0A8F621F288()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_AFC4F0A8F621F288_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_AFC4F0A8F621F288_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_AFC4F0A8F621F288_1_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_53392EADBCB6AF59(::UnityEngine::GameObject* a1, ::Class_1_10EF7FB9B576FF14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_10EF7FB9B576FF14*))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_53392EADBCB6AF59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1B2F2A4935FAA96A_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_1B2F2A4935FAA96A_1_OFFSET))(this);
	}

	::System::Void Method_3_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_3_510AB5D6C441A016_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_510AB5D6C441A016_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_37508DAB2BAF95D0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Foundation::AssetPath a5, ::Class_1_10EF7FB9B576FF14* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath, ::Class_1_10EF7FB9B576FF14*))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_37508DAB2BAF95D0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_DFD1E1DCADE26240(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5, ::Class_1_10EF7FB9B576FF14* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::Class_1_10EF7FB9B576FF14*))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_DFD1E1DCADE26240_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_5472C19BCC71DEAF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_5472C19BCC71DEAF_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_B380ADA6509D5935(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_B380ADA6509D5935_OFFSET))(this, a1);
	}

	::System::Void Method_3_04F8C9F9FCA37601(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_04F8C9F9FCA37601_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_AFC4F0A8F621F288_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_AFC4F0A8F621F288_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_F9DAB08EC8926B1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_F9DAB08EC8926B1B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_F9DAB08EC8926B1B_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_F9DAB08EC8926B1B_1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_40BEAD28720EA361(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_40BEAD28720EA361_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1B2F2A4935FAA96A_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_METHOD_3_1B2F2A4935FAA96A_2_OFFSET))(this);
	}
};
