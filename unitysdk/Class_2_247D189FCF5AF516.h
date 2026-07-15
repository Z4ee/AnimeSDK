#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3E971D2CC37E1611;
class Class_2_409B0D1663D08CF3;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_247D189FCF5AF516_INIT_OFFSET UNITYSDK_OFFSET(0x167706F0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET UNITYSDK_OFFSET(0x16771650)
#define CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_OFFSET UNITYSDK_OFFSET(0x16771450)
#define CLASS_2_247D189FCF5AF516_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1676FE90)
#define CLASS_2_247D189FCF5AF516_METHOD_2_54C923DF429CBBBA_OFFSET UNITYSDK_OFFSET(0x16770100)
#define CLASS_2_247D189FCF5AF516_METHOD_2_B58565C64C89246C_OFFSET UNITYSDK_OFFSET(0x16771850)
#define CLASS_2_247D189FCF5AF516_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x167705A0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16770560)
#define CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x167713F0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x16771390)
#define CLASS_2_247D189FCF5AF516_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x167712C0)
#define CLASS_2_247D189FCF5AF516_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x16771340)
#define CLASS_2_247D189FCF5AF516_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x1676FFD0)
#define CLASS_2_247D189FCF5AF516_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x16770020)
#define CLASS_2_247D189FCF5AF516_ONFADING_OFFSET UNITYSDK_OFFSET(0x1676FEE0)
#define CLASS_2_247D189FCF5AF516_RELEASE_OFFSET UNITYSDK_OFFSET(0x16770650)
#define CLASS_2_247D189FCF5AF516__CTOR_OFFSET UNITYSDK_OFFSET(0x1676FE30)

inline static constexpr unsigned int Class_2_247D189FCF5AF516_TypeDefinitionIndex = 47452;

class Class_2_247D189FCF5AF516 : public ::Class_1_AD0A0FF0019FC986
{
public:
	::Class_2_409B0D1663D08CF3* Field_2_0; // 0x28
	::Il2CppArray<::Class_2_3E971D2CC37E1611*>* Field_2_1; // 0x30

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

	::System::Void Method_2_54C923DF429CBBBA(::SceneLightVolume* a1, ::Class_2_409B0D1663D08CF3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::Class_2_409B0D1663D08CF3*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_54C923DF429CBBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_409B0D1663D08CF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_409B0D1663D08CF3*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
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

	::Class_2_409B0D1663D08CF3* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_409B0D1663D08CF3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
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
};
