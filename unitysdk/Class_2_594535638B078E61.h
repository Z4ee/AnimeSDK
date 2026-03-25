#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_71F5637F13C3D62F;
class Class_2_B165144F7623F691;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_594535638B078E61_INIT_OFFSET UNITYSDK_OFFSET(0x11409F60)
#define CLASS_2_594535638B078E61_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET UNITYSDK_OFFSET(0x1140AC50)
#define CLASS_2_594535638B078E61_METHOD_2_0C3FAAE3BE7F67FA_OFFSET UNITYSDK_OFFSET(0x1140AA30)
#define CLASS_2_594535638B078E61_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11409690)
#define CLASS_2_594535638B078E61_METHOD_2_54C923DF429CBBBA_OFFSET UNITYSDK_OFFSET(0x11409920)
#define CLASS_2_594535638B078E61_METHOD_2_B58565C64C89246C_OFFSET UNITYSDK_OFFSET(0x1140AE70)
#define CLASS_2_594535638B078E61_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x11409E10)
#define CLASS_2_594535638B078E61_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11409DD0)
#define CLASS_2_594535638B078E61_METHOD_2_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x1140A9D0)
#define CLASS_2_594535638B078E61_METHOD_2_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x1140A970)
#define CLASS_2_594535638B078E61_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x1140A8A0)
#define CLASS_2_594535638B078E61_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x1140A920)
#define CLASS_2_594535638B078E61_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x114097E0)
#define CLASS_2_594535638B078E61_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x11409830)
#define CLASS_2_594535638B078E61_ONFADING_OFFSET UNITYSDK_OFFSET(0x114096E0)
#define CLASS_2_594535638B078E61_RELEASE_OFFSET UNITYSDK_OFFSET(0x11409EC0)
#define CLASS_2_594535638B078E61__CTOR_OFFSET UNITYSDK_OFFSET(0x11409630)
#define CLASS_2_594535638B078E61___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1140B0E0)
#define CLASS_2_594535638B078E61___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x1140B150)
#define CLASS_2_594535638B078E61___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x1140AF70)
#define CLASS_2_594535638B078E61___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x1140AFE0)
#define CLASS_2_594535638B078E61___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x1140AF00)
#define CLASS_2_594535638B078E61___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1140B050)

inline static constexpr unsigned int Class_2_594535638B078E61_TypeDefinitionIndex = 39995;

class Class_2_594535638B078E61 : public ::Class_1_AD0A0FF0019FC986
{
public:
	::Class_2_B165144F7623F691* Field_2_1; // 0x28
	::Il2CppArray<::Class_2_71F5637F13C3D62F*>* Field_2_0; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Method_2_54C923DF429CBBBA(::SceneLightVolume* a1, ::Class_2_B165144F7623F691* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::Class_2_B165144F7623F691*))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_54C923DF429CBBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_B165144F7623F691* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B165144F7623F691*))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::Class_2_B165144F7623F691* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_B165144F7623F691*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_0C3FAAE3BE7F67FA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA_1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B58565C64C89246C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61_METHOD_2_B58565C64C89246C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594535638B078E61___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, P0);
	}
};
