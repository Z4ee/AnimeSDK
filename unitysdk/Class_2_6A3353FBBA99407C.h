#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ParticlePlaybackStatus.h"

class Class_2_6A3353FBBA99407C_Class_1_9AEC13984F2929EB;
namespace RPG::Client { class MonoEffectPluginParticleBackward; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6A3353FBBA99407C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90E85F0)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x90E97D0)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x90E8A30)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_6F856EA8528928F4_OFFSET UNITYSDK_OFFSET(0x90E8C10)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_7E637B8484144C1F_OFFSET UNITYSDK_OFFSET(0x90E8BA0)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x90E9A60)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x90E8580)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x90E8940)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90E8660)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x90E8980)
#define CLASS_2_6A3353FBBA99407C_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x90E86C0)
#define CLASS_2_6A3353FBBA99407C__CTOR_OFFSET UNITYSDK_OFFSET(0x90E9A50)
#define CLASS_2_6A3353FBBA99407C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90E9AD0)

inline static constexpr unsigned int Class_2_6A3353FBBA99407C_TypeDefinitionIndex = 64420;

class Class_2_6A3353FBBA99407C : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_5; // 0x18
	::System::Collections::Generic::List_1<::Class_2_6A3353FBBA99407C_Class_1_9AEC13984F2929EB*>* Field_2_0; // 0x20
	::RPG::Client::ParticlePlaybackStatus Field_2_1; // 0x28
	::System::Int32 Field_2_3; // 0x2C
	::System::Single Field_2_6; // 0x30
	::System::Int32 Field_2_2; // 0x34
	::System::Int32 Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_6F856EA8528928F4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_6F856EA8528928F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_35A1A641353400E6_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginParticleBackward* Method_2_7E637B8484144C1F()
	{
		return ((::RPG::Client::MonoEffectPluginParticleBackward*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_7E637B8484144C1F_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
