#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8ED7122CF0F1CE6E;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimLightningConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_EE806624A05EF51D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17675AB0)
#define CLASS_1_EE806624A05EF51D_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17676100)
#define CLASS_1_EE806624A05EF51D_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x17675EA0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_052FF1BCD16BD8DB_OFFSET UNITYSDK_OFFSET(0x17677540)
#define CLASS_1_EE806624A05EF51D_METHOD_1_18ED3561638C3714_OFFSET UNITYSDK_OFFSET(0x17676D70)
#define CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x17676780)
#define CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17676480)
#define CLASS_1_EE806624A05EF51D_METHOD_1_3EABB928A94EBBD2_OFFSET UNITYSDK_OFFSET(0x17678A00)
#define CLASS_1_EE806624A05EF51D_METHOD_1_53B77E956AA9CFD2_OFFSET UNITYSDK_OFFSET(0x176769D0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x176787D0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_6E8BCE0807D23686_OFFSET UNITYSDK_OFFSET(0x17677620)
#define CLASS_1_EE806624A05EF51D_METHOD_1_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0x17675D60)
#define CLASS_1_EE806624A05EF51D_METHOD_1_857B4CDE4DCB18D6_OFFSET UNITYSDK_OFFSET(0x17678570)
#define CLASS_1_EE806624A05EF51D_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x17675EF0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_A11102BDB84BA59F_OFFSET UNITYSDK_OFFSET(0x176761C0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0x17675B00)
#define CLASS_1_EE806624A05EF51D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17678790)
#define CLASS_1_EE806624A05EF51D_METHOD_1_E3173ED7944012D8_OFFSET UNITYSDK_OFFSET(0x176784E0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_E4A9BBF088076337_OFFSET UNITYSDK_OFFSET(0x17676F10)
#define CLASS_1_EE806624A05EF51D_METHOD_1_EB643E7380C07F8B_OFFSET UNITYSDK_OFFSET(0x17677E30)
#define CLASS_1_EE806624A05EF51D_METHOD_1_F15E877F748ED5C9_OFFSET UNITYSDK_OFFSET(0x17676820)
#define CLASS_1_EE806624A05EF51D_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17676520)
#define CLASS_1_EE806624A05EF51D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17678B40)
#define CLASS_1_EE806624A05EF51D__CTOR_OFFSET UNITYSDK_OFFSET(0x176758E0)

inline static constexpr unsigned int Class_1_EE806624A05EF51D_TypeDefinitionIndex = 73181;

class Class_1_EE806624A05EF51D : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE806624A05EF51D_TypeDefinitionIndex)->GetStaticField(0x6BF80);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE806624A05EF51D_TypeDefinitionIndex)->GetStaticField(0x6BF88);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE806624A05EF51D_TypeDefinitionIndex)->GetStaticField(0x14A70);
	}
	// static const ::System::Int32 Field_1_3 = 0x20; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x10; // 0x0
	::Class_1_B4357A1C72BABC6B* Field_1_6; // 0x10
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_7; // 0x18
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_8; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* Field_1_9; // 0x28
	::System::Boolean Field_1_10; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_A11102BDB84BA59F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_A11102BDB84BA59F_OFFSET))(this);
	}

	::System::Void Method_1_F15E877F748ED5C9(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_F15E877F748ED5C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_745F93A8744358B2_OFFSET))(this);
	}

	::System::Boolean Method_1_18ED3561638C3714(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_8ED7122CF0F1CE6E* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_8ED7122CF0F1CE6E*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_18ED3561638C3714_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_E4A9BBF088076337(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimLightningConfig* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_E4A9BBF088076337_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53B77E956AA9CFD2(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_53B77E956AA9CFD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_052FF1BCD16BD8DB(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_052FF1BCD16BD8DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB643E7380C07F8B(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_EB643E7380C07F8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_857B4CDE4DCB18D6(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_857B4CDE4DCB18D6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E3173ED7944012D8(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_E3173ED7944012D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E8BCE0807D23686(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_8ED7122CF0F1CE6E* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_8ED7122CF0F1CE6E*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_6E8BCE0807D23686_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_3EABB928A94EBBD2(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_3EABB928A94EBBD2_OFFSET))(this, a1, a2, a3, a4);
	}
};
