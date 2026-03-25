#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D27BF54F25500E5F;
class Class_1_E5086EDB86D7D733;
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define CLASS_1_175B21A1A3924B03_GET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0x87496B0)
#define CLASS_1_175B21A1A3924B03_METHOD_1_3BC36FDD267A8206_OFFSET UNITYSDK_OFFSET(0x8749830)
#define CLASS_1_175B21A1A3924B03_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x8749C30)
#define CLASS_1_175B21A1A3924B03_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x8749A80)
#define CLASS_1_175B21A1A3924B03_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x87499A0)
#define CLASS_1_175B21A1A3924B03_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87497E0)
#define CLASS_1_175B21A1A3924B03_METHOD_1_F9A791B5381B18AE_OFFSET UNITYSDK_OFFSET(0x8749B50)
#define CLASS_1_175B21A1A3924B03_SET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0x87496C0)
#define CLASS_1_175B21A1A3924B03__CTOR_OFFSET UNITYSDK_OFFSET(0x87496D0)

inline static constexpr unsigned int Class_1_175B21A1A3924B03_TypeDefinitionIndex = 46192;

class Class_1_175B21A1A3924B03 : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* Field_1_1; // 0x10
	::RPG::Client::BaseShaderPropertyTransition* Field_1_2; // 0x18
	::System::String* _RendererName_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_E5086EDB86D7D733* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5086EDB86D7D733*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_RendererName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_GET_RENDERERNAME_OFFSET))(this);
	}

	::System::Void set_RendererName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_SET_RENDERERNAME_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3BC36FDD267A8206(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_3BC36FDD267A8206_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9A791B5381B18AE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_F9A791B5381B18AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}
};
