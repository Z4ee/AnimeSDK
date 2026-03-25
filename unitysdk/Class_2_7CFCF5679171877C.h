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

#define CLASS_2_7CFCF5679171877C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BE5810)
#define CLASS_2_7CFCF5679171877C_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x10BE62C0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_2A8B73C445B86D1A_OFFSET UNITYSDK_OFFSET(0x10BE5980)
#define CLASS_2_7CFCF5679171877C_METHOD_2_30003F11260810E0_OFFSET UNITYSDK_OFFSET(0x10BE5C00)
#define CLASS_2_7CFCF5679171877C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10BE5C60)
#define CLASS_2_7CFCF5679171877C_METHOD_2_347940EFA874AACA_OFFSET UNITYSDK_OFFSET(0x10BE6200)
#define CLASS_2_7CFCF5679171877C_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x10BE6310)
#define CLASS_2_7CFCF5679171877C_METHOD_2_5AA2D738512EFBE3_OFFSET UNITYSDK_OFFSET(0x10BE5880)
#define CLASS_2_7CFCF5679171877C_METHOD_2_7024428A3D5CDEC2_OFFSET UNITYSDK_OFFSET(0x10BE5DF0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_8A4CF12F54A584A9_OFFSET UNITYSDK_OFFSET(0x10BE62F0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_AFCB45282C7F4FA9_OFFSET UNITYSDK_OFFSET(0x10BE61D0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x10BE6100)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C2DAF2526D4F55B5_OFFSET UNITYSDK_OFFSET(0x10BE5DB0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C3F35C850C5BAE52_OFFSET UNITYSDK_OFFSET(0x10BE62E0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10BE5CF0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x10BE6010)
#define CLASS_2_7CFCF5679171877C_METHOD_2_E3FE109D06BE7F76_OFFSET UNITYSDK_OFFSET(0x10BE61E0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_E4806D07A8645B3D_OFFSET UNITYSDK_OFFSET(0x10BE5A40)
#define CLASS_2_7CFCF5679171877C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10BE6300)
#define CLASS_2_7CFCF5679171877C_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x10BE62D0)
#define CLASS_2_7CFCF5679171877C_TICK_OFFSET UNITYSDK_OFFSET(0x10BE5E30)
#define CLASS_2_7CFCF5679171877C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BE64C0)
#define CLASS_2_7CFCF5679171877C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE5800)
#define CLASS_2_7CFCF5679171877C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10BE6500)

inline static constexpr unsigned int Class_2_7CFCF5679171877C_TypeDefinitionIndex = 46179;

class Class_2_7CFCF5679171877C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0xEED0);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0xEED8);
	}
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x4FB0);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x4FB4);
	}
	::RPG::GameCore::MonoEffectLodDetail* Field_2_3; // 0x18
	::RPG::Client::MonoEffectManager* Field_2_12; // 0x20
	::RPG::Client::OpenWorld::StreamingItemData* Field_2_2; // 0x28
	::RPG::Client::MonoEffect* Field_2_11; // 0x30
	::RPG::Client::TriggerEffectParams* Field_2_4; // 0x38
	::RPG::Client::TriggerEffectParams* Field_2_10; // 0x40
	::System::Boolean Field_2_17; // 0x48
	::System::Boolean Field_2_5; // 0x49
	::System::Boolean Field_2_15; // 0x4A
	::System::Boolean Field_2_16; // 0x4B
	::System::Int32 _LodLevel_k__BackingField; // 0x4C
	::RPG::MVector3 Field_2_13; // 0x50
	::RPG::GameCore::MonoEffectLodTemplateName Field_2_6; // 0x5C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_14; // 0x60

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

	::System::Void Method_2_E4806D07A8645B3D(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_E4806D07A8645B3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A8B73C445B86D1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_2A8B73C445B86D1A_OFFSET))(this, a1);
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

	::System::Void set_LodLevel(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_SET_LODLEVEL_OFFSET))(this, value);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
