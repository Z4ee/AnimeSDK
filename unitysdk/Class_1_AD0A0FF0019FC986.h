#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

class Class_1_303D5A33D1401D59;
class Class_1_65F0290E6742FF82;
class Class_2_409B0D1663D08CF3;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_AD0A0FF0019FC986_APPLY_OFFSET UNITYSDK_OFFSET(0x186B8BA0)
#define CLASS_1_AD0A0FF0019FC986_INIT_OFFSET UNITYSDK_OFFSET(0x186B8AA0)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x186B79F0)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_2FAA87026AC4C0F4_OFFSET UNITYSDK_OFFSET(0x186B80C0)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_40942C03FFEE6EF0_OFFSET UNITYSDK_OFFSET(0x186B7E30)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_44815C74DF99C8B0_OFFSET UNITYSDK_OFFSET(0x186B8170)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_492A229C2726426C_OFFSET UNITYSDK_OFFSET(0x186B7B80)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_56AD1EF09CA27CB0_OFFSET UNITYSDK_OFFSET(0x186B7C30)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_7733D915A2A1AE09_OFFSET UNITYSDK_OFFSET(0x186B7A00)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_7A3939C20075D81C_OFFSET UNITYSDK_OFFSET(0x186B7F20)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x186B8920)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_C97F1DF1BCE94A44_OFFSET UNITYSDK_OFFSET(0x186B8720)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_E09679FCD3B3BFA5_1_OFFSET UNITYSDK_OFFSET(0x186B8850)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_E09679FCD3B3BFA5_OFFSET UNITYSDK_OFFSET(0x186B8780)
#define CLASS_1_AD0A0FF0019FC986_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x186B79E0)
#define CLASS_1_AD0A0FF0019FC986_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x186B8AF0)
#define CLASS_1_AD0A0FF0019FC986_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x186B8BF0)
#define CLASS_1_AD0A0FF0019FC986_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x186B8CA0)
#define CLASS_1_AD0A0FF0019FC986_ONFADING_OFFSET UNITYSDK_OFFSET(0x186B8C40)
#define CLASS_1_AD0A0FF0019FC986_RELEASE_OFFSET UNITYSDK_OFFSET(0x186B89E0)
#define CLASS_1_AD0A0FF0019FC986_TICK_OFFSET UNITYSDK_OFFSET(0x186B8B40)
#define CLASS_1_AD0A0FF0019FC986__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B8CF0)
#define CLASS_1_AD0A0FF0019FC986__CTOR_OFFSET UNITYSDK_OFFSET(0x186B7B60)

inline static constexpr unsigned int Class_1_AD0A0FF0019FC986_TypeDefinitionIndex = 47484;

class Class_1_AD0A0FF0019FC986 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AD0A0FF0019FC986_TypeDefinitionIndex)->GetStaticField(0x64BE0);
	}
	::System::String* Field_1_1; // 0x10
	::Class_1_65F0290E6742FF82* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::Boolean Field_1_5; // 0x25
	::System::Boolean Field_1_6; // 0x26

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_65F0290E6742FF82* Method_1_24748FC20F375725()
	{
		return ((::Class_1_65F0290E6742FF82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_1_AD0A0FF0019FC986* Method_1_7733D915A2A1AE09(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::RPG::GameCore::BlockNodeConfig* a7, ::Class_1_303D5A33D1401D59* a8)
	{
		return ((::Class_1_AD0A0FF0019FC986*(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_7733D915A2A1AE09_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::String* Method_1_492A229C2726426C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_492A229C2726426C_OFFSET))(a1);
	}

	static ::System::ReadOnlySpan_1<::System::Char> Method_1_56AD1EF09CA27CB0(::System::String* a1)
	{
		return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_56AD1EF09CA27CB0_OFFSET))(a1);
	}

	static ::System::String* Method_1_40942C03FFEE6EF0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_40942C03FFEE6EF0_OFFSET))(a1);
	}

	static ::System::String* Method_1_7A3939C20075D81C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_7A3939C20075D81C_OFFSET))(a1);
	}

	static ::System::String* Method_1_2FAA87026AC4C0F4(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_2FAA87026AC4C0F4_OFFSET))(a1);
	}

	static ::Class_1_65F0290E6742FF82* Method_1_44815C74DF99C8B0(::System::String* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::Class_1_303D5A33D1401D59* a6)
	{
		return ((::Class_1_65F0290E6742FF82*(*)(::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_44815C74DF99C8B0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C97F1DF1BCE94A44(::Class_2_409B0D1663D08CF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_409B0D1663D08CF3*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_C97F1DF1BCE94A44_OFFSET))(this, a1);
	}

	::System::Void Method_1_E09679FCD3B3BFA5(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_E09679FCD3B3BFA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E09679FCD3B3BFA5_1(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_E09679FCD3B3BFA5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_TICK_OFFSET))(this, a1);
	}

	::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_APPLY_OFFSET))(this, a1);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_AD0A0FF0019FC986_ONFADINGEND_OFFSET))(this, a1);
	}
};
