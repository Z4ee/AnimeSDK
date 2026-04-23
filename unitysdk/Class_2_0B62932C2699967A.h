#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_8C67A14CD66BE3FA;
class Class_2_D693101EA35A1AB3;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_0B62932C2699967A_INIT_OFFSET UNITYSDK_OFFSET(0x1243C2F0)
#define CLASS_2_0B62932C2699967A_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET UNITYSDK_OFFSET(0x1243CFF0)
#define CLASS_2_0B62932C2699967A_METHOD_2_0C3FAAE3BE7F67FA_OFFSET UNITYSDK_OFFSET(0x1243CDD0)
#define CLASS_2_0B62932C2699967A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1243BA20)
#define CLASS_2_0B62932C2699967A_METHOD_2_54C923DF429CBBBA_OFFSET UNITYSDK_OFFSET(0x1243BCB0)
#define CLASS_2_0B62932C2699967A_METHOD_2_B58565C64C89246C_OFFSET UNITYSDK_OFFSET(0x1243D210)
#define CLASS_2_0B62932C2699967A_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x1243C1A0)
#define CLASS_2_0B62932C2699967A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1243C160)
#define CLASS_2_0B62932C2699967A_METHOD_2_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x1243CD70)
#define CLASS_2_0B62932C2699967A_METHOD_2_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x1243CD10)
#define CLASS_2_0B62932C2699967A_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x1243CC40)
#define CLASS_2_0B62932C2699967A_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x1243CCC0)
#define CLASS_2_0B62932C2699967A_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x1243BB70)
#define CLASS_2_0B62932C2699967A_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x1243BBC0)
#define CLASS_2_0B62932C2699967A_ONFADING_OFFSET UNITYSDK_OFFSET(0x1243BA70)
#define CLASS_2_0B62932C2699967A_RELEASE_OFFSET UNITYSDK_OFFSET(0x1243C250)
#define CLASS_2_0B62932C2699967A__CTOR_OFFSET UNITYSDK_OFFSET(0x1243B9C0)
#define CLASS_2_0B62932C2699967A___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1243D480)
#define CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x1243D4F0)
#define CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x1243D310)
#define CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x1243D380)
#define CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x1243D2A0)
#define CLASS_2_0B62932C2699967A___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1243D3F0)

inline static constexpr unsigned int Class_2_0B62932C2699967A_TypeDefinitionIndex = 45904;

class Class_2_0B62932C2699967A : public ::Class_1_AD0A0FF0019FC986
{
public:
	::Il2CppArray<::Class_2_8C67A14CD66BE3FA*>* Field_2_0; // 0x28
	::Class_2_D693101EA35A1AB3* Field_2_1; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Method_2_54C923DF429CBBBA(::SceneLightVolume* a1, ::Class_2_D693101EA35A1AB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::Class_2_D693101EA35A1AB3*))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_54C923DF429CBBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_D693101EA35A1AB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D693101EA35A1AB3*))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::Class_2_D693101EA35A1AB3* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_D693101EA35A1AB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_0C3FAAE3BE7F67FA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA_1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B58565C64C89246C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A_METHOD_2_B58565C64C89246C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0B62932C2699967A___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, P0);
	}
};
