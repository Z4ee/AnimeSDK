#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_D27BF54F25500E5F;
class Class_2_D693101EA35A1AB3;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace System { class String; }
namespace UnityEngine { class Light; }

#define CLASS_1_E0A05564B7F916C1_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x11D82F90)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_246AB6F9FB207D5C_OFFSET UNITYSDK_OFFSET(0x11D832E0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x11D83B70)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11D83B10)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11D83870)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_9A678BAB767C394E_1_OFFSET UNITYSDK_OFFSET(0x11D83980)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_9A678BAB767C394E_OFFSET UNITYSDK_OFFSET(0x11D837E0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11D838C0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11D83900)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x11D83940)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x11D83A90)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x11D83AD0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D83830)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x11D83A30)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x11D839D0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_E454FC4AC07270FC_OFFSET UNITYSDK_OFFSET(0x11D82FE0)
#define CLASS_1_E0A05564B7F916C1_METHOD_1_EFC292CED4901459_OFFSET UNITYSDK_OFFSET(0x11D83160)
#define CLASS_1_E0A05564B7F916C1__CTOR_OFFSET UNITYSDK_OFFSET(0x11D83BD0)

inline static constexpr unsigned int Class_1_E0A05564B7F916C1_TypeDefinitionIndex = 46165;

class Class_1_E0A05564B7F916C1 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0A05564B7F916C1_TypeDefinitionIndex)->GetStaticField(0x5CA0);
	}
	static ::System::Boolean* StaticGet_Field_1_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0A05564B7F916C1_TypeDefinitionIndex)->GetStaticField(0x5CA1);
	}
	::Class_1_D27BF54F25500E5F* Field_1_8; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::String* Field_1_0; // 0x20
	::Class_1_303D5A33D1401D59* Field_1_3; // 0x28
	::System::String* Field_1_11; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Boolean Field_1_10; // 0x40
	::System::Single Field_1_12; // 0x44
	::System::Int32 Field_1_2; // 0x48
	::System::Single Field_1_7; // 0x4C
	::System::Int32 Field_1_1; // 0x50
	::RPG::Client::OpenWorld::StreamingBlockType Field_1_4; // 0x54
	::EnviromentSystem::BlockEnvDataStmState Field_1_9; // 0x58

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

	::System::Void Method_1_EFC292CED4901459(::Class_2_D693101EA35A1AB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D693101EA35A1AB3*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_EFC292CED4901459_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_246AB6F9FB207D5C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0A05564B7F916C1_METHOD_1_246AB6F9FB207D5C_OFFSET))(a1);
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
