#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_D27BF54F25500E5F;
class Class_2_A250797A2E6CFBDB;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace System { class String; }
namespace UnityEngine { class Light; }

#define CLASS_1_E0A05564B7F916C1_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xAC8E160)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xAC8ED60)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAC8ED00)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAC8EA60)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_72F3E2F8EE494D6B_OFFSET UNITYSDK_OFFSET(0xAC8E4B0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_9A678BAB767C394E_1_OFFSET UNITYSDK_OFFSET(0xAC8EB70)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_9A678BAB767C394E_OFFSET UNITYSDK_OFFSET(0xAC8E9D0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAC8EAB0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xAC8EAF0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xAC8EB30)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xAC8EC80)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xAC8ECC0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC8EA20)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0xAC8EC20)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0xAC8EBC0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_E454FC4AC07270FC_OFFSET UNITYSDK_OFFSET(0xAC8E1B0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_EFC292CED4901459_OFFSET UNITYSDK_OFFSET(0xAC8E330)
#define CLASS_1_E0A05564B7F916C1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC8EDC0)

inline static constexpr unsigned int Class_1_E0A05564B7F916C1_TypeDefinitionIndex = 46748;

class Class_1_E0A05564B7F916C1 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0A05564B7F916C1_TypeDefinitionIndex)->GetStaticField(0x4ED0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0A05564B7F916C1_TypeDefinitionIndex)->GetStaticField(0x4ED1);
	}
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* Field_1_4; // 0x20
	::Class_1_D27BF54F25500E5F* Field_1_5; // 0x28
	::Class_1_303D5A33D1401D59* Field_1_6; // 0x30
	::System::String* Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x40
	::System::Single Field_1_9; // 0x44
	::EnviromentSystem::BlockEnvDataStmState Field_1_10; // 0x48
	::RPG::Client::OpenWorld::StreamingBlockType Field_1_11; // 0x4C
	::System::Single Field_1_12; // 0x50
	::System::Int32 Field_1_13; // 0x54
	::System::Int32 Field_1_14; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	::System::Void Method_1_E454FC4AC07270FC(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_E454FC4AC07270FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EFC292CED4901459(::Class_2_A250797A2E6CFBDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A250797A2E6CFBDB*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_EFC292CED4901459_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_72F3E2F8EE494D6B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_72F3E2F8EE494D6B_OFFSET))(a1);
	}

	::System::Void Method_1_9A678BAB767C394E(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_9A678BAB767C394E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_9A678BAB767C394E_1(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_9A678BAB767C394E_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_1_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_1_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}
};
