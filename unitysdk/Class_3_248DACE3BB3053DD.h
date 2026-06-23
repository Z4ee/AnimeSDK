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

class Class_1_43BD383C98B4C0C5_70;
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

#define CLASS_3_248DACE3BB3053DD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16811AC0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x16812DF0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x16812D80)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x16812D00)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x16812F10)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16812540)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x16812480)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x16813070)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x16812460)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x16813090)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x16812550)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x168121A0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET UNITYSDK_OFFSET(0x16812F20)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET UNITYSDK_OFFSET(0x16812630)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x16812A50)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x16812560)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x168124B0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8EC1F26B8B8123B9_OFFSET UNITYSDK_OFFSET(0x168130A0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16812E80)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x168124C0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CD433F816D14DADA_OFFSET UNITYSDK_OFFSET(0x16811EF0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET UNITYSDK_OFFSET(0x168120C0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x168125F0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x16812610)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x16812D60)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x16812E60)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x16812490)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D9A39F12262295B1_OFFSET UNITYSDK_OFFSET(0x16812780)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET UNITYSDK_OFFSET(0x16812570)
#define CLASS_3_248DACE3BB3053DD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x168115C0)
#define CLASS_3_248DACE3BB3053DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16811B10)
#define CLASS_3_248DACE3BB3053DD__CTOR_OFFSET UNITYSDK_OFFSET(0x16811B90)

inline static constexpr unsigned int Class_3_248DACE3BB3053DD_TypeDefinitionIndex = 68530;

class Class_3_248DACE3BB3053DD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_46 = 0x52; // 0x0
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* Field_3_40; // 0x48
	::System::Action_2<::Class_3_248DACE3BB3053DD*, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D>* Field_3_41; // 0x50
	::Class_1_43BD383C98B4C0C5_70* Field_3_45; // 0x58
	::UnityEngine::Rigidbody* Field_3_6; // 0x60
	::MoleMole::Config::ConfigMovement* Field_3_4; // 0x68
	::Struct_2_FA5F50563E60AFBA Field_3_27; // 0x70
	::Class_1_F50A7367BDE7BD82* Field_3_44; // 0x88
	::MoleMole::Battle::Entity* Field_3_39; // 0x90
	::MoleMole::Battle::Entity* Field_3_1; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_22; // 0xA0
	::MoleMole::Config::ConfigRotation* Field_3_5; // 0xA8
	::MoleMole::EntityHandle Field_3_30; // 0xB0
	::UnityEngine::Collider* Field_3_0; // 0xC0
	::MoleMole::Battle::Entity* Field_3_38; // 0xC8
	::MoleMole::EntityHandle Field_3_31; // 0xD0
	::Class_2_167BB37617B940E3* Field_3_37; // 0xE0
	::UnityEngine::Vector3 Field_3_32; // 0xE8
	::System::UInt32 Field_3_29; // 0xF4
	::System::Single Field_3_14; // 0xF8
	::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF Field_3_3; // 0xFC
	::UnityEngine::Vector3 Field_3_26; // 0x100
	::UnityEngine::Vector3 Field_3_35; // 0x10C
	::System::Single Field_3_13; // 0x118
	::Struct_2_70FF0A172150B476 Field_3_20; // 0x11C
	::System::Single Field_3_7; // 0x12C
	::UnityEngine::Vector3 Field_3_9; // 0x130
	::System::UInt32 Field_3_28; // 0x13C
	::UnityEngine::Vector3 Field_3_17; // 0x140
	::UnityEngine::Vector3 Field_3_18; // 0x14C
	::Struct_2_FC595D1A561D8C6F Field_3_36; // 0x158
	::UnityEngine::Vector3 Field_3_25; // 0x174
	::System::Int32 Field_3_43; // 0x180
	::UnityEngine::Vector3 Field_3_16; // 0x184
	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Field_3_2; // 0x190
	::UnityEngine::Vector3 Field_3_34; // 0x194
	::System::Single Field_3_11; // 0x1A0
	::System::Single Field_3_10; // 0x1A4
	::System::Int32 Field_3_42; // 0x1A8
	::System::Single Field_3_12; // 0x1AC
	::UnityEngine::LayerMask Field_3_15; // 0x1B0
	::UnityEngine::Vector3 Field_3_21; // 0x1B4
	::UnityEngine::Vector3 Field_3_19; // 0x1C0
	::UnityEngine::Quaternion Field_3_23; // 0x1CC
	::System::Single Field_3_8; // 0x1DC
	::UnityEngine::Vector3 Field_3_33; // 0x1E0
	::UnityEngine::Vector3 Field_3_24; // 0x1EC

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

	::System::Void Method_3_CD433F816D14DADA(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CD433F816D14DADA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D015A8BDCC3405F7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_43BD383C98B4C0C5_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_70*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	static ::Class_3_248DACE3BB3053DD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_248DACE3BB3053DD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Class_1_43BD383C98B4C0C5_70* Method_3_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_3_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE_1(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_E2CD5451E4D4A7F0(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::System::Void Method_3_8070B88FBB3BD314(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_3_D9A39F12262295B1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D9A39F12262295B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_43BD383C98B4C0C5_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_70*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E_1(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_1_F50A7367BDE7BD82* Method_3_24748FC20F375725_1()
	{
		return ((::Class_1_F50A7367BDE7BD82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_3_6BAC7E95E775143F(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_8EC1F26B8B8123B9(::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8EC1F26B8B8123B9_OFFSET))(this, a1);
	}
};
