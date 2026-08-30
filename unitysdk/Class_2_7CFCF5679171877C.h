#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectLodTemplateName.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class MonoEffectLodDetail; }
namespace System { class String; }

#define CLASS_2_7CFCF5679171877C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177F7860)
#define CLASS_2_7CFCF5679171877C_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x177F8460)
#define CLASS_2_7CFCF5679171877C_METHOD_2_1F6E34A5702B5857_OFFSET UNITYSDK_OFFSET(0x177F7B30)
#define CLASS_2_7CFCF5679171877C_METHOD_2_30003F11260810E0_OFFSET UNITYSDK_OFFSET(0x177F7D60)
#define CLASS_2_7CFCF5679171877C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x177F7DC0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_347940EFA874AACA_OFFSET UNITYSDK_OFFSET(0x177F83A0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x177F84B0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_5AA2D738512EFBE3_OFFSET UNITYSDK_OFFSET(0x177F7940)
#define CLASS_2_7CFCF5679171877C_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x177F7A40)
#define CLASS_2_7CFCF5679171877C_METHOD_2_7024428A3D5CDEC2_OFFSET UNITYSDK_OFFSET(0x177F7F50)
#define CLASS_2_7CFCF5679171877C_METHOD_2_8A4CF12F54A584A9_OFFSET UNITYSDK_OFFSET(0x177F8490)
#define CLASS_2_7CFCF5679171877C_METHOD_2_AFCB45282C7F4FA9_OFFSET UNITYSDK_OFFSET(0x177F8370)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x177F82A0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C2DAF2526D4F55B5_OFFSET UNITYSDK_OFFSET(0x177F7F10)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C3F35C850C5BAE52_OFFSET UNITYSDK_OFFSET(0x177F8480)
#define CLASS_2_7CFCF5679171877C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x177F7E50)
#define CLASS_2_7CFCF5679171877C_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x177F81B0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_E3FE109D06BE7F76_OFFSET UNITYSDK_OFFSET(0x177F8380)
#define CLASS_2_7CFCF5679171877C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x177F84A0)
#define CLASS_2_7CFCF5679171877C_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x177F8470)
#define CLASS_2_7CFCF5679171877C_TICK_OFFSET UNITYSDK_OFFSET(0x177F7F90)
#define CLASS_2_7CFCF5679171877C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177F8660)
#define CLASS_2_7CFCF5679171877C__CTOR_OFFSET UNITYSDK_OFFSET(0x177F7850)

inline static constexpr unsigned int Class_2_7CFCF5679171877C_TypeDefinitionIndex = 57487;

class Class_2_7CFCF5679171877C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_IDNMDHEGFAE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x57760);
	}
	static ::System::String** StaticGet_BOHKEBONIFC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x57768);
	}
	static ::System::Single* StaticGet_GHICEPFCLIJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x11D40);
	}
	static ::System::Single* StaticGet_CLMJNLDFNAB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x11D44);
	}
	::RPG::Client::MonoEffectManager* OGGCEHFOMMI; // 0x18
	::RPG::Client::TriggerEffectParams* IGFBACMGOEJ; // 0x20
	::RPG::Client::TriggerEffectParams* GKCKLJDIDNC; // 0x28
	::RPG::GameCore::MonoEffectLodDetail* KAOABIDMBDB; // 0x30
	::RPG::Client::OpenWorld::StreamingItemData* FJFHCCEOINJ; // 0x38
	::RPG::Client::MonoEffect* HLGLJIDEMDI; // 0x40
	::System::Int32 _LodLevel_k__BackingField; // 0x48
	::RPG::GameCore::MonoEffectLodTemplateName ILIHGKMNBMH; // 0x4C
	::RPG::MVector3 KFEJGBAKKEF; // 0x50
	::System::Boolean NONKJJHAMPP; // 0x5C
	::System::Boolean HMBANLFHDDL; // 0x5D
	::System::Boolean DALKJPIGDNO; // 0x5E
	::System::Boolean AOCKKNBBKPB; // 0x5F
	::System::Nullable_1<::UnityEngine::Vector3> LLKOGDPHHEA; // 0x60

	::System::Void _ctor(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5AA2D738512EFBE3(::RPG::GameCore::MonoEffectLodTemplateName a1, ::RPG::GameCore::MonoEffectLodDetail* a2, ::RPG::Client::MonoEffectManager* a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonoEffectLodTemplateName, ::RPG::GameCore::MonoEffectLodDetail*, ::RPG::Client::MonoEffectManager*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_5AA2D738512EFBE3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_1F6E34A5702B5857(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_1F6E34A5702B5857_OFFSET))(this, a1);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_30003F11260810E0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_30003F11260810E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::Client::TriggerEffectParams* Method_2_C2DAF2526D4F55B5()
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_C2DAF2526D4F55B5_OFFSET))(this);
	}

	static ::RPG::GameCore::MonoEffectLodTemplateName Method_2_7024428A3D5CDEC2()
	{
		return ((::RPG::GameCore::MonoEffectLodTemplateName(*)())((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_7024428A3D5CDEC2_OFFSET))();
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_AFCB45282C7F4FA9(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_AFCB45282C7F4FA9_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_E3FE109D06BE7F76()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_E3FE109D06BE7F76_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_347940EFA874AACA()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_347940EFA874AACA_OFFSET))(this);
	}

	::System::Int32 get_LodLevel()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_GET_LODLEVEL_OFFSET))(this);
	}

	::System::Void set_LodLevel(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_SET_LODLEVEL_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_C3F35C850C5BAE52()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_C3F35C850C5BAE52_OFFSET))(this);
	}

	::System::Void Method_2_8A4CF12F54A584A9(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_8A4CF12F54A584A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}
};
