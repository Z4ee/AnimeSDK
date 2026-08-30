#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81A24C8B51484D59;
class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define CLASS_1_175B21A1A3924B03_GET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0xB9E3B40)
#define CLASS_1_175B21A1A3924B03_METHOD_1_3BC36FDD267A8206_OFFSET UNITYSDK_OFFSET(0xB9E3D50)
#define CLASS_1_175B21A1A3924B03_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0xB9E4170)
#define CLASS_1_175B21A1A3924B03_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB9E3FB0)
#define CLASS_1_175B21A1A3924B03_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0xB9E3ED0)
#define CLASS_1_175B21A1A3924B03_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9E3D00)
#define CLASS_1_175B21A1A3924B03_METHOD_1_F9A791B5381B18AE_OFFSET UNITYSDK_OFFSET(0xB9E4090)
#define CLASS_1_175B21A1A3924B03_SET_RENDERERNAME_OFFSET UNITYSDK_OFFSET(0xB9E3B50)
#define CLASS_1_175B21A1A3924B03__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E3B60)

inline static constexpr unsigned int Class_1_175B21A1A3924B03_TypeDefinitionIndex = 57504;

class Class_1_175B21A1A3924B03 : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* INDMABDHFDH; // 0x10
	::System::String* _RendererName_k__BackingField; // 0x18
	::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0x20

	::System::Void _ctor(::Class_1_81A24C8B51484D59* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_81A24C8B51484D59*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_175B21A1A3924B03__CTOR_OFFSET))(this, a1, a2);
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
