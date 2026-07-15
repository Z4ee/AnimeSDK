#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_D27BF54F25500E5F;
class Class_2_409B0D1663D08CF3;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace System { class String; }
namespace UnityEngine { class Light; }

#define CLASS_1_65F0290E6742FF82_METHOD_1_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x17063D00)
#define CLASS_1_65F0290E6742FF82_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x17064A10)
#define CLASS_1_65F0290E6742FF82_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x170649B0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x17063D60)
#define CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_2_OFFSET UNITYSDK_OFFSET(0x17064710)
#define CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17063CA0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_72F3E2F8EE494D6B_OFFSET UNITYSDK_OFFSET(0x17064160)
#define CLASS_1_65F0290E6742FF82_METHOD_1_9659848D814235CE_OFFSET UNITYSDK_OFFSET(0x17063F40)
#define CLASS_1_65F0290E6742FF82_METHOD_1_9A678BAB767C394E_1_OFFSET UNITYSDK_OFFSET(0x17064820)
#define CLASS_1_65F0290E6742FF82_METHOD_1_9A678BAB767C394E_OFFSET UNITYSDK_OFFSET(0x17064680)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17064760)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x170647A0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x170647E0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x17064930)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x17064970)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170646D0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x170648D0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x17064870)
#define CLASS_1_65F0290E6742FF82_METHOD_1_E454FC4AC07270FC_OFFSET UNITYSDK_OFFSET(0x17063DC0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_EFC292CED4901459_OFFSET UNITYSDK_OFFSET(0x17063FE0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17063DB0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17063CF0)
#define CLASS_1_65F0290E6742FF82__CCTOR_OFFSET UNITYSDK_OFFSET(0x17064A80)
#define CLASS_1_65F0290E6742FF82__CTOR_OFFSET UNITYSDK_OFFSET(0x17064A70)

inline static constexpr unsigned int Class_1_65F0290E6742FF82_TypeDefinitionIndex = 47713;

class Class_1_65F0290E6742FF82 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65F0290E6742FF82_TypeDefinitionIndex)->GetStaticField(0x9C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65F0290E6742FF82_TypeDefinitionIndex)->GetStaticField(0x9C1);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65F0290E6742FF82_TypeDefinitionIndex)->GetStaticField(0x9C2);
	}
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_4; // 0x18
	::Class_1_D27BF54F25500E5F* Field_1_5; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::String* Field_1_7; // 0x30
	::Class_1_303D5A33D1401D59* Field_1_8; // 0x38
	::System::Int32 Field_1_9; // 0x40
	::System::Int32 Field_1_10; // 0x44
	::System::Single Field_1_11; // 0x48
	::System::Single Field_1_12; // 0x4C
	::System::Boolean Field_1_13; // 0x50
	::System::Boolean Field_1_14; // 0x51
	::System::Boolean Field_1_15; // 0x52
	::EnviromentSystem::BlockEnvDataStmState Field_1_16; // 0x54
	::RPG::Client::OpenWorld::StreamingBlockType Field_1_17; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Void Method_1_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_1DA89DF9585853CF_OFFSET))(a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_E454FC4AC07270FC(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_E454FC4AC07270FC_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_9659848D814235CE(::System::Boolean a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::StreamingLightEnum a3, ::System::Boolean& a4, ::RPG::Client::OpenWorld::StreamingLightEnum& a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingLightEnum, ::System::Boolean&, ::RPG::Client::OpenWorld::StreamingLightEnum&))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_9659848D814235CE_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EFC292CED4901459(::Class_2_409B0D1663D08CF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_409B0D1663D08CF3*))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_EFC292CED4901459_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_72F3E2F8EE494D6B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_72F3E2F8EE494D6B_OFFSET))(a1);
	}

	::System::Void Method_1_9A678BAB767C394E(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_9A678BAB767C394E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_9A678BAB767C394E_1(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_9A678BAB767C394E_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_1_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_1_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65F0290E6742FF82_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}
};
