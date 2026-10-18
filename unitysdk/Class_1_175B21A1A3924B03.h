#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DF5F62C68EF718F;
class Class_1_F30BA7F9891F79D1;
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define CLASS_1_175B21A1A3924B03_GET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0xB89CC00)
#define CLASS_1_175B21A1A3924B03_METHOD_1_1AF95EBB5CA38616_1_OFFSET UNITYSDK_OFFSET(0xB89D1F0)
#define CLASS_1_175B21A1A3924B03_METHOD_1_1AF95EBB5CA38616_OFFSET UNITYSDK_OFFSET(0xB89D070)
#define CLASS_1_175B21A1A3924B03_METHOD_1_3BC36FDD267A8206_OFFSET UNITYSDK_OFFSET(0xB89CE60)
#define CLASS_1_175B21A1A3924B03_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0xB89CF90)
#define CLASS_1_175B21A1A3924B03_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB89CE10)
#define CLASS_1_175B21A1A3924B03_METHOD_1_F9F3136523DD73B7_OFFSET UNITYSDK_OFFSET(0xB89D0E0)
#define CLASS_1_175B21A1A3924B03_SET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0xB89CC10)
#define CLASS_1_175B21A1A3924B03__CTOR_OFFSET UNITYSDK_OFFSET(0xB89CC20)

inline static constexpr unsigned int Class_1_175B21A1A3924B03_TypeDefinitionIndex = 57348;

class Class_1_175B21A1A3924B03 : public ::System::Object
{
public:
	::System::String* _RendererName_k__BackingField; // 0x10
	::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0x18
	::Class_1_5DF5F62C68EF718F* INDMABDHFDH; // 0x20

	::System::Void _ctor(::Class_1_F30BA7F9891F79D1* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F30BA7F9891F79D1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_RendererName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_GET_RENDERERNAME_OFFSET))(this);
	}

	::System::Void set_RendererName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_SET_RENDERERNAME_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3BC36FDD267A8206(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_3BC36FDD267A8206_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1AF95EBB5CA38616(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_1AF95EBB5CA38616_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AF95EBB5CA38616_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_1AF95EBB5CA38616_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9F3136523DD73B7(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_F9F3136523DD73B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}
};
