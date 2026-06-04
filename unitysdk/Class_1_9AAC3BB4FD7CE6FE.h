#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/RPG/Client/PedestrianV2State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3504E309EE87A23B;
class Class_1_483ED67B5E0A21FB;
class Class_1_68DDCD4A4411AB4A;
class Class_1_EFECBF8C912C40AA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9AAC3BB4FD7CE6FE_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xA489C70)
#define CLASS_1_9AAC3BB4FD7CE6FE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA488D10)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xA48A790)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0xA48A8B0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA48A730)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA489C10)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0xA48A7C0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA489B10)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4066FC4822AB2F7E_OFFSET UNITYSDK_OFFSET(0xA488E10)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA489AB0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA489A50)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_48D844B20A8C3D3D_1_OFFSET UNITYSDK_OFFSET(0xA489BC0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_48D844B20A8C3D3D_OFFSET UNITYSDK_OFFSET(0xA489B70)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0xA489530)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xA489070)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_9B477FAA89F19EA1_OFFSET UNITYSDK_OFFSET(0xA48A840)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_A93CA8A3372168B2_OFFSET UNITYSDK_OFFSET(0xA489390)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0xA48A6B0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0xA489DE0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0xA489D30)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA48A720)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xA48A7A0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xA48A7B0)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA48A710)
#define CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_FB642453C6267705_OFFSET UNITYSDK_OFFSET(0xA4897A0)
#define CLASS_1_9AAC3BB4FD7CE6FE_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xA489CD0)
#define CLASS_1_9AAC3BB4FD7CE6FE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA48A970)
#define CLASS_1_9AAC3BB4FD7CE6FE__CTOR_OFFSET UNITYSDK_OFFSET(0xA48A940)

inline static constexpr unsigned int Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex = 64774;

class Class_1_9AAC3BB4FD7CE6FE : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x95C0);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x95C4);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x95C8);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAC3BB4FD7CE6FE_TypeDefinitionIndex)->GetStaticField(0x95CC);
	}
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::Single Field_1_8; // 0x0
	// static const ::System::Single Field_1_9; // 0x0
	::UnityEngine::Transform* Field_1_10; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>* OnDisposeCallback; // 0x20
	::System::String* Field_1_13; // 0x28
	::Class_1_3504E309EE87A23B* Field_1_14; // 0x30
	::Class_1_EFECBF8C912C40AA* Field_1_15; // 0x38
	::System::Single Field_1_16; // 0x40
	::RPG::Client::PedestrianV2State Field_1_17; // 0x44
	::UnityEngine::Vector3 Field_1_18; // 0x48
	::System::Single Field_1_19; // 0x54
	::System::Single Field_1_20; // 0x58
	::System::Boolean Field_1_21; // 0x5C
	::System::Boolean Field_1_22; // 0x5D
	::System::Boolean Field_1_23; // 0x5E
	::System::Boolean Field_1_24; // 0x5F
	::System::Single Field_1_25; // 0x60
	::System::Int32 Field_1_26; // 0x64
	::System::Int32 Field_1_27; // 0x68
	::System::UInt32 Field_1_28; // 0x6C
	::RPG::Client::EPedestrianV2MotionState Field_1_29; // 0x70
	::UnityEngine::Vector3 Field_1_30; // 0x74
	::System::Single Field_1_31; // 0x80
	::System::Single Field_1_32; // 0x84

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

	::System::Void Method_1_4066FC4822AB2F7E(::Class_1_3504E309EE87A23B* a1, ::System::UInt32 a2, ::Class_1_483ED67B5E0A21FB* a3, ::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3504E309EE87A23B*, ::System::UInt32, ::Class_1_483ED67B5E0A21FB*, ::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_METHOD_1_4066FC4822AB2F7E_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void add_OnDisposeCallback(::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>*))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_ADD_ONDISPOSECALLBACK_OFFSET))(this, a1);
	}

	::System::Void remove_OnDisposeCallback(::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9AAC3BB4FD7CE6FE*>*))((::PBYTE)hIl2Cpp + CLASS_1_9AAC3BB4FD7CE6FE_REMOVE_ONDISPOSECALLBACK_OFFSET))(this, a1);
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
