#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_70FF0A172150B476.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_101;
class Class_1_F50A7367BDE7BD82;
class Class_2_14986121AA61AD99;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_248DACE3BB3053DD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15578060)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x15578F50)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15578D10)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_0D92CA6439B41058_OFFSET UNITYSDK_OFFSET(0x15578500)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x15578490)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x15578C20)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x15578AD0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x15578B80)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x155793D0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x15578880)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x155784F0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x155793C0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x15578FC0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET UNITYSDK_OFFSET(0x15579290)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET UNITYSDK_OFFSET(0x155788A0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x155793F0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x15578C10)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x155787C0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x155787D0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15578C50)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CD433F816D14DADA_OFFSET UNITYSDK_OFFSET(0x15578D80)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET UNITYSDK_OFFSET(0x155789D0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x15578AB0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x15578C30)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x15578CD0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x15578CF0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x15578860)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_E26C031DFCE60CF0_OFFSET UNITYSDK_OFFSET(0x15578AE0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET UNITYSDK_OFFSET(0x15578B90)
#define CLASS_3_248DACE3BB3053DD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15577B60)
#define CLASS_3_248DACE3BB3053DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x155780B0)
#define CLASS_3_248DACE3BB3053DD__CTOR_OFFSET UNITYSDK_OFFSET(0x15578130)

inline static constexpr unsigned int Class_3_248DACE3BB3053DD_TypeDefinitionIndex = 55280;

class Class_3_248DACE3BB3053DD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_44 = 0x52; // 0x0
	::UnityEngine::Rigidbody* Field_3_4; // 0x48
	::MoleMole::Config::ConfigRotation* Field_3_5; // 0x50
	::MoleMole::Config::ConfigMovement* Field_3_6; // 0x58
	::MoleMole::EntityHandle Field_3_28; // 0x60
	::MoleMole::EntityHandle Field_3_35; // 0x70
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* Field_3_42; // 0x80
	::MoleMole::Battle::Entity* Field_3_43; // 0x88
	::MoleMole::Battle::Entity* Field_3_36; // 0x90
	::UnityEngine::Collider* Field_3_2; // 0x98
	::Class_2_14986121AA61AD99* Field_3_37; // 0xA0
	::Struct_2_FA5F50563E60AFBA Field_3_31; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_20; // 0xC0
	::System::Action_2<::Class_3_248DACE3BB3053DD*, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D>* Field_3_41; // 0xC8
	::Class_1_43BD383C98B4C0C5_101* Field_3_45; // 0xD0
	::MoleMole::Battle::Entity* Field_3_1; // 0xD8
	::Class_1_F50A7367BDE7BD82* Field_3_46; // 0xE0
	::UnityEngine::Vector3 Field_3_24; // 0xE8
	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Field_3_0; // 0xF4
	::UnityEngine::Vector3 Field_3_16; // 0xF8
	::UnityEngine::Vector3 Field_3_21; // 0x104
	::System::Single Field_3_15; // 0x110
	::UnityEngine::Vector3 Field_3_32; // 0x114
	::System::Int32 Field_3_40; // 0x120
	::UnityEngine::Quaternion Field_3_27; // 0x124
	::UnityEngine::LayerMask Field_3_19; // 0x134
	::UnityEngine::Vector3 Field_3_33; // 0x138
	::System::UInt32 Field_3_30; // 0x144
	::Struct_2_70FF0A172150B476 Field_3_22; // 0x148
	::System::UInt32 Field_3_29; // 0x158
	::System::Single Field_3_14; // 0x15C
	::System::Single Field_3_12; // 0x160
	::System::Single Field_3_11; // 0x164
	::UnityEngine::Vector3 Field_3_26; // 0x168
	::System::Single Field_3_8; // 0x174
	::System::Int32 Field_3_47; // 0x178
	::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF Field_3_7; // 0x17C
	::UnityEngine::Vector3 Field_3_18; // 0x180
	::UnityEngine::Vector3 Field_3_17; // 0x18C
	::UnityEngine::Vector3 Field_3_23; // 0x198
	::UnityEngine::Vector3 Field_3_34; // 0x1A4
	::Struct_2_FC595D1A561D8C6F_1 Field_3_38; // 0x1B0
	::UnityEngine::Vector3 Field_3_39; // 0x1CC
	::UnityEngine::Vector3 Field_3_25; // 0x1D8
	::UnityEngine::Vector3 Field_3_9; // 0x1E4
	::System::Single Field_3_10; // 0x1F0
	::System::Single Field_3_13; // 0x1F4

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

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}

	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_0D92CA6439B41058(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_0D92CA6439B41058_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_8070B88FBB3BD314(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_101* Method_3_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_101*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_3_E26C031DFCE60CF0(::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_E26C031DFCE60CF0_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_3_E2CD5451E4D4A7F0(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8C8625211DA811AE_1(::Class_1_43BD383C98B4C0C5_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_101*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_F50A7367BDE7BD82* Method_3_24748FC20F375725_1()
	{
		return ((::Class_1_F50A7367BDE7BD82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	static ::Class_3_248DACE3BB3053DD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_248DACE3BB3053DD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_43BD383C98B4C0C5_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_101*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CD433F816D14DADA(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CD433F816D14DADA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D015A8BDCC3405F7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E_1(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_6BAC7E95E775143F(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET))(this, a1);
	}
};
