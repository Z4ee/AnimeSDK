#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/RPG/Client/PedestrianV2State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_68DDCD4A4411AB4A;
class Class_1_7D9075FD1A3992DE;
class Class_1_DE5041E302ADB1E0;
class Class_1_F7445212B44E5397;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9AAC3BB4FD7CE6FE_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1003CD00)
#define CLASS_1_9AAC3BB4FD7CE6FE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1003BD60)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1003D820)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x1003D930)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1003D7C0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1003CCA0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0x1003D850)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1003CBA0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4066FC4822AB2F7E_OFFSET UNITYSDK_OFFSET(0x1003BE60)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1003CB30)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1003CAC0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_48D844B20A8C3D3D_1_OFFSET UNITYSDK_OFFSET(0x1003CC50)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_48D844B20A8C3D3D_OFFSET UNITYSDK_OFFSET(0x1003CC00)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x1003C590)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x1003C0D0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_9B477FAA89F19EA1_OFFSET UNITYSDK_OFFSET(0x1003D8D0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_A93CA8A3372168B2_OFFSET UNITYSDK_OFFSET(0x1003C3F0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x1003D740)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x1003CE70)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x1003CDC0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1003D7B0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1003D830)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1003D840)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1003D7A0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_FB642453C6267705_OFFSET UNITYSDK_OFFSET(0x1003C800)
#define CLASS_1_9AAC3BB4FD7CE6FE_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1003CD60)
#define CLASS_1_9AAC3BB4FD7CE6FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1003D9F0)
#define CLASS_1_9AAC3BB4FD7CE6FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1003D9C0)

inline static constexpr unsigned int Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex = 63853;

class Class_1_9AAC3BB4FD7CE6FE : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_26()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x4510);
	}
	static ::System::Single* StaticGet_Field_1_28()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x4514);
	}
	static ::System::Single* StaticGet_Field_1_27()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x4518);
	}
	static ::System::Single* StaticGet_Field_1_25()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x451C);
	}
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_29; // 0x0
	// static const ::System::Single Field_1_30; // 0x0
	// static const ::System::Single Field_1_31; // 0x0
	// static const ::System::Single Field_1_32; // 0x0
	::UnityEngine::Transform* Field_1_5; // 0x10
	::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>* OnDisposeCallback; // 0x18
	::System::String* Field_1_7; // 0x20
	::Class_1_DE5041E302ADB1E0* Field_1_3; // 0x28
	::System::String* Field_1_8; // 0x30
	::Class_1_F7445212B44E5397* Field_1_11; // 0x38
	::System::Single Field_1_23; // 0x40
	::UnityEngine::Vector3 Field_1_21; // 0x44
	::System::Single Field_1_22; // 0x50
	::System::Single Field_1_19; // 0x54
	::System::Single Field_1_17; // 0x58
	::System::Single Field_1_18; // 0x5C
	::UnityEngine::Vector3 Field_1_20; // 0x60
	::RPG::Client::PedestrianV2State Field_1_4; // 0x6C
	::System::UInt32 Field_1_6; // 0x70
	::System::Int32 Field_1_10; // 0x74
	::System::Int32 Field_1_16; // 0x78
	::System::Single Field_1_24; // 0x7C
	::System::Boolean Field_1_12; // 0x80
	::System::Boolean Field_1_14; // 0x81
	::System::Boolean Field_1_15; // 0x82
	::System::Boolean Field_1_13; // 0x83
	::RPG::Client::EPedestrianV2MotionState Field_1_9; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4066FC4822AB2F7E(::Class_1_DE5041E302ADB1E0* a1, ::System::UInt32 a2, ::Class_1_7D9075FD1A3992DE* a3, ::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE5041E302ADB1E0*, ::System::UInt32, ::Class_1_7D9075FD1A3992DE*, ::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4066FC4822AB2F7E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_48D844B20A8C3D3D(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_48D844B20A8C3D3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48D844B20A8C3D3D_1(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_48D844B20A8C3D3D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void add_OnDisposeCallback(::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>*))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_ADD_ONDISPOSECALLBACK_OFFSET))(this, value);
	}

	::System::Void remove_OnDisposeCallback(::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>*))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_REMOVE_ONDISPOSECALLBACK_OFFSET))(this, value);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_FB642453C6267705()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_FB642453C6267705_OFFSET))(this);
	}

	::System::Single Method_1_A93CA8A3372168B2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_A93CA8A3372168B2_OFFSET))(this);
	}

	::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_B7BFE5D35A542E8B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_B7BFE5D35A542E8B_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2DA5E14835AEFAD5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_2DA5E14835AEFAD5_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_9B477FAA89F19EA1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_9B477FAA89F19EA1_OFFSET))(this);
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}
};
