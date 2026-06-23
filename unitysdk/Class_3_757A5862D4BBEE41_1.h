#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_250FDB97D78391EE.h"
#include "unitysdk/Enum_3_9D224E54E82C0658.h"
#include "unitysdk/Enum_3_9E57FDCD22022C4B.h"
#include "unitysdk/Enum_3_C3F47346D3138590.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_3_757A5862D4BBEE41_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14312FF0)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x143133E0)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14313460)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_C5202CB8ADA78E8E_OFFSET UNITYSDK_OFFSET(0x14313450)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14313350)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14313360)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_E82D36C72DB4DD0D_OFFSET UNITYSDK_OFFSET(0x14312B30)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_EB54B2EBBD1FC3DE_OFFSET UNITYSDK_OFFSET(0x14312D20)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14313340)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14313330)
#define CLASS_3_757A5862D4BBEE41_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14312620)
#define CLASS_3_757A5862D4BBEE41_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14313040)
#define CLASS_3_757A5862D4BBEE41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143130C0)

inline static constexpr unsigned int Class_3_757A5862D4BBEE41_1_TypeDefinitionIndex = 78519;

class Class_3_757A5862D4BBEE41_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_53 = 0x47; // 0x0
	::MoleMole::GameplayTag Field_3_50; // 0x48
	::MoleMole::EntityHandle Field_3_11; // 0x58
	::UnityEngine::Rigidbody* Field_3_14; // 0x68
	::MoleMole::EntityHandle Field_3_51; // 0x70
	::UnityEngine::Transform* Field_3_1; // 0x80
	::UnityEngine::Collider* Field_3_15; // 0x88
	::MoleMole::EntityHandle Field_3_12; // 0x90
	::System::Single Field_3_45; // 0xA0
	::System::Boolean Field_3_52; // 0xA4
	::System::Boolean Field_3_40; // 0xA5
	::System::Boolean Field_3_30; // 0xA6
	::System::Boolean Field_3_7; // 0xA7
	::System::Single Field_3_23; // 0xA8
	::System::Single spherecastRadius; // 0xAC
	::UnityEngine::Vector3 Field_3_10; // 0xB0
	::System::Single airborneThreshold; // 0xBC
	::UnityEngine::RaycastHit Field_3_25; // 0xC0
	::Enum_3_9D224E54E82C0658 Field_3_3; // 0xF4
	::UnityEngine::Vector3 Field_3_37; // 0xF8
	::System::Single Field_3_44; // 0x104
	::System::Single Field_3_20; // 0x108
	::UnityEngine::Vector3 Field_3_46; // 0x10C
	::Enum_3_9E57FDCD22022C4B Field_3_4; // 0x118
	::System::Single Field_3_41; // 0x11C
	::System::Single Field_3_22; // 0x120
	::Enum_3_250FDB97D78391EE Field_3_5; // 0x124
	::Enum_3_C3F47346D3138590 Field_3_6; // 0x128
	::System::Single Field_3_39; // 0x12C
	::System::Single Field_3_32; // 0x130
	::UnityEngine::Ray Field_3_24; // 0x134
	::System::Single Field_3_27; // 0x14C
	::System::Single Field_3_21; // 0x150
	::System::Single Field_3_33; // 0x154
	::System::Single Field_3_42; // 0x158
	::UnityEngine::Vector3 Field_3_35; // 0x15C
	::UnityEngine::Vector3 Field_3_26; // 0x168
	::UnityEngine::LayerMask groundLayers; // 0x174
	::System::Single Field_3_34; // 0x178
	::UnityEngine::Vector3 Field_3_2; // 0x17C
	::System::Single Field_3_47; // 0x188
	::System::Single gravityMultiplier; // 0x18C
	::System::Single Field_3_38; // 0x190
	::System::Boolean Field_3_13; // 0x194
	::System::Boolean Field_3_36; // 0x195
	::System::Boolean Field_3_31; // 0x196
	::System::Boolean Field_3_8; // 0x197
	::System::Single Field_3_49; // 0x198
	::System::Single Field_3_9; // 0x19C
	::System::Single Field_3_29; // 0x1A0
	::System::Single Field_3_43; // 0x1A4
	::System::Single Field_3_28; // 0x1A8
	::System::Single Field_3_48; // 0x1AC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_EB54B2EBBD1FC3DE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_EB54B2EBBD1FC3DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	static ::Class_3_757A5862D4BBEE41_1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_757A5862D4BBEE41_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_3_E82D36C72DB4DD0D(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_E82D36C72DB4DD0D_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* Method_3_C5202CB8ADA78E8E()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_C5202CB8ADA78E8E_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
