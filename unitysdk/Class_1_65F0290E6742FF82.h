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

#define CLASS_1_65F0290E6742FF82_METHOD_1_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x1A748830)
#define CLASS_1_65F0290E6742FF82_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x1A749540)
#define CLASS_1_65F0290E6742FF82_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1A7494E0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x1A748890)
#define CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_2_OFFSET UNITYSDK_OFFSET(0x1A749240)
#define CLASS_1_65F0290E6742FF82_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1A7487D0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_72F3E2F8EE494D6B_OFFSET UNITYSDK_OFFSET(0x1A748C90)
#define CLASS_1_65F0290E6742FF82_METHOD_1_9659848D814235CE_OFFSET UNITYSDK_OFFSET(0x1A748A70)
#define CLASS_1_65F0290E6742FF82_METHOD_1_9A678BAB767C394E_1_OFFSET UNITYSDK_OFFSET(0x1A749350)
#define CLASS_1_65F0290E6742FF82_METHOD_1_9A678BAB767C394E_OFFSET UNITYSDK_OFFSET(0x1A7491B0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A749290)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1A7492D0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1A749310)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x1A749460)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x1A7494A0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A749200)
#define CLASS_1_65F0290E6742FF82_METHOD_1_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x1A749400)
#define CLASS_1_65F0290E6742FF82_METHOD_1_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x1A7493A0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_E454FC4AC07270FC_OFFSET UNITYSDK_OFFSET(0x1A7488F0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_EFC292CED4901459_OFFSET UNITYSDK_OFFSET(0x1A748B10)
#define CLASS_1_65F0290E6742FF82_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A7488E0)
#define CLASS_1_65F0290E6742FF82_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A748820)
#define CLASS_1_65F0290E6742FF82__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7495B0)
#define CLASS_1_65F0290E6742FF82__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7495A0)

inline static constexpr unsigned int Class_1_65F0290E6742FF82_TypeDefinitionIndex = 49994;

class Class_1_65F0290E6742FF82 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_NMNPEILBNHG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65F0290E6742FF82_TypeDefinitionIndex)->GetStaticField(0xEED0);
	}
	static ::System::Boolean* StaticGet_HOAEJJBJLLN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65F0290E6742FF82_TypeDefinitionIndex)->GetStaticField(0xEED1);
	}
	static ::System::Boolean* StaticGet_LCDCHEKNEFK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65F0290E6742FF82_TypeDefinitionIndex)->GetStaticField(0xEED2);
	}
	::System::String* DJNKMHHLKHM; // 0x10
	::Class_1_D27BF54F25500E5F* KJAHGCMAKNA; // 0x18
	::Class_1_303D5A33D1401D59* CPPILCGEAKC; // 0x20
	::System::String* FFHJENBPOAI; // 0x28
	::System::String* DAHENCMPLOD; // 0x30
	::System::String* DIEGNJFBPHN; // 0x38
	::System::Int32 IJNDNFMBNGC; // 0x40
	::EnviromentSystem::BlockEnvDataStmState KOEKPKHCLCM; // 0x44
	::System::Boolean ELMDIMHMCKA; // 0x48
	::System::Boolean FEEFLJBILJN; // 0x49
	::System::Boolean FIEJAHOMJHM; // 0x4A
	::RPG::Client::OpenWorld::StreamingBlockType CFGEJHAOKED; // 0x4C
	::System::Int32 CGDPPGNJFGC; // 0x50
	::System::Single EJNNCAFADFL; // 0x54
	::System::Single IAJFEFLCEDB; // 0x58

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
