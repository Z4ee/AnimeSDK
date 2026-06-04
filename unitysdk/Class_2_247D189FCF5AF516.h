#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A250797A2E6CFBDB;
class Class_2_DC742B72F4019999;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_247D189FCF5AF516_INIT_OFFSET UNITYSDK_OFFSET(0x134F67F0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET UNITYSDK_OFFSET(0x134F7820)
#define CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_OFFSET UNITYSDK_OFFSET(0x134F7620)
#define CLASS_2_247D189FCF5AF516_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x134F5F90)
#define CLASS_2_247D189FCF5AF516_METHOD_2_54C923DF429CBBBA_OFFSET UNITYSDK_OFFSET(0x134F6200)
#define CLASS_2_247D189FCF5AF516_METHOD_2_B58565C64C89246C_OFFSET UNITYSDK_OFFSET(0x134F7A20)
#define CLASS_2_247D189FCF5AF516_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x134F66A0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134F6660)
#define CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x134F75C0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x134F7560)
#define CLASS_2_247D189FCF5AF516_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x134F7490)
#define CLASS_2_247D189FCF5AF516_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x134F7510)
#define CLASS_2_247D189FCF5AF516_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x134F60D0)
#define CLASS_2_247D189FCF5AF516_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x134F6120)
#define CLASS_2_247D189FCF5AF516_ONFADING_OFFSET UNITYSDK_OFFSET(0x134F5FE0)
#define CLASS_2_247D189FCF5AF516_RELEASE_OFFSET UNITYSDK_OFFSET(0x134F6750)
#define CLASS_2_247D189FCF5AF516__CTOR_OFFSET UNITYSDK_OFFSET(0x134F5F30)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x134F7C50)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x134F7CB0)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x134F7B10)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x134F7B70)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x134F7AB0)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x134F7BD0)

inline static constexpr unsigned int Class_2_247D189FCF5AF516_TypeDefinitionIndex = 46487;

class Class_2_247D189FCF5AF516 : public ::Class_1_AD0A0FF0019FC986
{
public:
	::Il2CppArray<::Class_2_DC742B72F4019999*>* Field_2_0; // 0x28
	::Class_2_A250797A2E6CFBDB* Field_2_1; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Method_2_54C923DF429CBBBA(::SceneLightVolume* a1, ::Class_2_A250797A2E6CFBDB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::Class_2_A250797A2E6CFBDB*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_54C923DF429CBBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_A250797A2E6CFBDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A250797A2E6CFBDB*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::Class_2_A250797A2E6CFBDB* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_A250797A2E6CFBDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA_1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B58565C64C89246C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_B58565C64C89246C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, a1);
	}
};
