#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_70FF0A172150B476.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_114;
class Class_1_F50A7367BDE7BD82;
class Class_2_167BB37617B940E3;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_248DACE3BB3053DD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17F82AD0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x17F83CF0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17F83C40)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x17F83860)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17F83D60)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F83CB0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x17F83D80)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x17F83C10)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x17F837A0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x17F83C30)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x17F83D90)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x17F83E80)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET UNITYSDK_OFFSET(0x17F83100)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET UNITYSDK_OFFSET(0x17F83320)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x17F83460)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17F83D70)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F83CE0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8EC1F26B8B8123B9_OFFSET UNITYSDK_OFFSET(0x17F837C0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17F83710)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x17F838C0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CD433F816D14DADA_OFFSET UNITYSDK_OFFSET(0x17F82F20)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET UNITYSDK_OFFSET(0x17F83240)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x17F83CC0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x17F83DA0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x17F83E40)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x17F83E60)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x17F82F00)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D9A39F12262295B1_OFFSET UNITYSDK_OFFSET(0x17F83940)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET UNITYSDK_OFFSET(0x17F83DC0)
#define CLASS_3_248DACE3BB3053DD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17F825D0)
#define CLASS_3_248DACE3BB3053DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F82B20)
#define CLASS_3_248DACE3BB3053DD__CTOR_OFFSET UNITYSDK_OFFSET(0x17F82BA0)

inline static constexpr unsigned int Class_3_248DACE3BB3053DD_TypeDefinitionIndex = 75124;

class Class_3_248DACE3BB3053DD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_46 = 0x4F; // 0x0
	::MoleMole::Battle::Entity* Field_3_39; // 0x48
	::MoleMole::Config::ConfigMovement* Field_3_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_22; // 0x58
	::Class_1_F50A7367BDE7BD82* Field_3_44; // 0x60
	::MoleMole::Config::ConfigRotation* Field_3_5; // 0x68
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* Field_3_40; // 0x70
	::MoleMole::EntityHandle Field_3_30; // 0x78
	::UnityEngine::Collider* Field_3_0; // 0x88
	::MoleMole::Battle::Entity* Field_3_38; // 0x90
	::MoleMole::Battle::Entity* Field_3_1; // 0x98
	::MoleMole::EntityHandle Field_3_31; // 0xA0
	::Class_1_43BD383C98B4C0C5_114* Field_3_45; // 0xB0
	::System::Action_2<::Class_3_248DACE3BB3053DD*, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D>* Field_3_41; // 0xB8
	::Struct_2_FA5F50563E60AFBA Field_3_27; // 0xC0
	::UnityEngine::Rigidbody* Field_3_6; // 0xD8
	::Class_2_167BB37617B940E3* Field_3_37; // 0xE0
	::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF Field_3_3; // 0xE8
	::UnityEngine::Vector3 Field_3_21; // 0xEC
	::System::UInt32 Field_3_28; // 0xF8
	::UnityEngine::Vector3 Field_3_32; // 0xFC
	::UnityEngine::Vector3 Field_3_16; // 0x108
	::UnityEngine::Vector3 Field_3_26; // 0x114
	::UnityEngine::Vector3 Field_3_35; // 0x120
	::UnityEngine::Vector3 Field_3_34; // 0x12C
	::UnityEngine::Vector3 Field_3_25; // 0x138
	::System::Single Field_3_13; // 0x144
	::System::Single Field_3_12; // 0x148
	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Field_3_2; // 0x14C
	::System::Single Field_3_8; // 0x150
	::UnityEngine::Quaternion Field_3_23; // 0x154
	::UnityEngine::Vector3 Field_3_18; // 0x164
	::System::Single Field_3_11; // 0x170
	::System::Single Field_3_14; // 0x174
	::System::Single Field_3_7; // 0x178
	::UnityEngine::Vector3 Field_3_24; // 0x17C
	::UnityEngine::Vector3 Field_3_9; // 0x188
	::System::Int32 Field_3_43; // 0x194
	::UnityEngine::Vector3 Field_3_17; // 0x198
	::System::Single Field_3_10; // 0x1A4
	::UnityEngine::LayerMask Field_3_15; // 0x1A8
	::System::UInt32 Field_3_29; // 0x1AC
	::System::Int32 Field_3_42; // 0x1B0
	::UnityEngine::Vector3 Field_3_33; // 0x1B4
	::Struct_2_70FF0A172150B476 Field_3_20; // 0x1C0
	::Struct_2_FC595D1A561D8C6F Field_3_36; // 0x1D0
	::UnityEngine::Vector3 Field_3_19; // 0x1EC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_CD433F816D14DADA(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CD433F816D14DADA_OFFSET))(this, a1);
	}

	::System::Void Method_3_6BAC7E95E775143F(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8070B88FBB3BD314(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_D015A8BDCC3405F7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_8EC1F26B8B8123B9(::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8EC1F26B8B8123B9_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}

	static ::Class_3_248DACE3BB3053DD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_248DACE3BB3053DD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Vector3 Method_3_D9A39F12262295B1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D9A39F12262295B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_43BD383C98B4C0C5_114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_114*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::Class_1_F50A7367BDE7BD82* Method_3_24748FC20F375725()
	{
		return ((::Class_1_F50A7367BDE7BD82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E_1(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_114* Method_3_24748FC20F375725_1()
	{
		return ((::Class_1_43BD383C98B4C0C5_114*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE_1(::Class_1_43BD383C98B4C0C5_114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_114*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_3_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::System::Void Method_3_E2CD5451E4D4A7F0(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::System::Void Method_3_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET))(this, a1);
	}
};
