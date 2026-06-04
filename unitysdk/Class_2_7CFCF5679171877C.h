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

#define CLASS_2_7CFCF5679171877C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5271A0)
#define CLASS_2_7CFCF5679171877C_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xB527BF0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB527320)
#define CLASS_2_7CFCF5679171877C_METHOD_2_30003F11260810E0_OFFSET UNITYSDK_OFFSET(0xB527560)
#define CLASS_2_7CFCF5679171877C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB5275C0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_347940EFA874AACA_OFFSET UNITYSDK_OFFSET(0xB527B30)
#define CLASS_2_7CFCF5679171877C_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0xB527C40)
#define CLASS_2_7CFCF5679171877C_METHOD_2_5AA2D738512EFBE3_OFFSET UNITYSDK_OFFSET(0xB527220)
#define CLASS_2_7CFCF5679171877C_METHOD_2_7024428A3D5CDEC2_OFFSET UNITYSDK_OFFSET(0xB527750)
#define CLASS_2_7CFCF5679171877C_METHOD_2_8A4CF12F54A584A9_OFFSET UNITYSDK_OFFSET(0xB527C20)
#define CLASS_2_7CFCF5679171877C_METHOD_2_AFCB45282C7F4FA9_OFFSET UNITYSDK_OFFSET(0xB527B00)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xB527A30)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C2DAF2526D4F55B5_OFFSET UNITYSDK_OFFSET(0xB527710)
#define CLASS_2_7CFCF5679171877C_METHOD_2_C3F35C850C5BAE52_OFFSET UNITYSDK_OFFSET(0xB527C10)
#define CLASS_2_7CFCF5679171877C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB527650)
#define CLASS_2_7CFCF5679171877C_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xB527940)
#define CLASS_2_7CFCF5679171877C_METHOD_2_E3FE109D06BE7F76_OFFSET UNITYSDK_OFFSET(0xB527B10)
#define CLASS_2_7CFCF5679171877C_METHOD_2_E4806D07A8645B3D_OFFSET UNITYSDK_OFFSET(0xB5273A0)
#define CLASS_2_7CFCF5679171877C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB527C30)
#define CLASS_2_7CFCF5679171877C_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xB527C00)
#define CLASS_2_7CFCF5679171877C_TICK_OFFSET UNITYSDK_OFFSET(0xB527790)
#define CLASS_2_7CFCF5679171877C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB527DF0)
#define CLASS_2_7CFCF5679171877C__CTOR_OFFSET UNITYSDK_OFFSET(0xB527190)
#define CLASS_2_7CFCF5679171877C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB527E30)

inline static constexpr unsigned int Class_2_7CFCF5679171877C_TypeDefinitionIndex = 53550;

class Class_2_7CFCF5679171877C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x27670);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x27678);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x96E0);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CFCF5679171877C_TypeDefinitionIndex)->GetStaticField(0x96E4);
	}
	::RPG::Client::OpenWorld::StreamingItemData* Field_2_4; // 0x18
	::RPG::Client::TriggerEffectParams* Field_2_5; // 0x20
	::RPG::GameCore::MonoEffectLodDetail* Field_2_6; // 0x28
	::RPG::Client::MonoEffect* Field_2_7; // 0x30
	::RPG::Client::MonoEffectManager* Field_2_8; // 0x38
	::RPG::Client::TriggerEffectParams* Field_2_9; // 0x40
	::System::Int32 _LodLevel_k__BackingField; // 0x48
	::System::Boolean Field_2_11; // 0x4C
	::System::Boolean Field_2_12; // 0x4D
	::System::Boolean Field_2_13; // 0x4E
	::System::Boolean Field_2_14; // 0x4F
	::RPG::GameCore::MonoEffectLodTemplateName Field_2_15; // 0x50
	::RPG::MVector3 Field_2_16; // 0x54
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_17; // 0x60

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

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CFCF5679171877C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
