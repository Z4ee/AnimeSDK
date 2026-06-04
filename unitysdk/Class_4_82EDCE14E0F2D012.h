#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F31596D70431331B.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_4_82EDCE14E0F2D012_METHOD_4_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x13BE3F10)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_149474FE623D787D_OFFSET UNITYSDK_OFFSET(0x13BE42D0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0x13BE4AE0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_2C391E2BFEA362CE_OFFSET UNITYSDK_OFFSET(0x13BE4AF0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0x13BE37B0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13BE4A10)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x13BE4A80)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13BE49A0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_7973E4410763B70B_OFFSET UNITYSDK_OFFSET(0x13BE3D60)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_7A283C762874342E_OFFSET UNITYSDK_OFFSET(0x13BE4A70)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_841F065F14CDF2D0_OFFSET UNITYSDK_OFFSET(0x13BE43D0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x13BE3A10)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_9F23F65EEBE29D34_OFFSET UNITYSDK_OFFSET(0x13BE4580)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13BE3440)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13BE3930)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13BE3650)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_E39B4279BF06EB37_OFFSET UNITYSDK_OFFSET(0x13BE34E0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13BE3240)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x13BE3970)
#define CLASS_4_82EDCE14E0F2D012__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BE4810)
#define CLASS_4_82EDCE14E0F2D012__CTOR_OFFSET UNITYSDK_OFFSET(0x13BE46F0)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x13BE4880)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x13BE48A0)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x13BE48C0)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x13BE4930)

inline static constexpr unsigned int Class_4_82EDCE14E0F2D012_TypeDefinitionIndex = 46497;

class Class_4_82EDCE14E0F2D012 : public ::Class_3_F31596D70431331B
{
public:
	static ::System::String** StaticGet_Field_4_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x46AD0);
	}
	static ::UnityEngine::Texture2D** StaticGet_Field_4_1()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x46AD8);
	}
	static ::System::String** StaticGet_Field_4_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x46AE0);
	}
	static ::UnityEngine::Texture2D** StaticGet_Field_4_3()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x46AE8);
	}
	static ::System::Int32* StaticGet_Field_4_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0xCCE0);
	}
	static ::System::Int32* StaticGet_Field_4_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0xCCE4);
	}
	static ::System::Int32* StaticGet_Field_4_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0xCCE8);
	}
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_4_7; // 0x70
	::Il2CppArray<::UnityEngine::Matrix4x4>* Field_4_8; // 0x78
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_4_9; // 0x80
	::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>* Field_4_10; // 0x88
	::System::Boolean Field_4_11; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__CCTOR_OFFSET))();
	}

	::System::Void Method_4_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Void Method_4_E39B4279BF06EB37()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_E39B4279BF06EB37_OFFSET))();
	}

	static ::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_D0BD1377F2594D33_OFFSET))();
	}

	::System::Void Method_4_49B631EF1DEFEC16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_49B631EF1DEFEC16_OFFSET))(this, a1);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_4_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_4_7973E4410763B70B(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_7973E4410763B70B_OFFSET))(this, a1);
	}

	::System::Void Method_4_149474FE623D787D(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_149474FE623D787D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_4_841F065F14CDF2D0(::RPG::Client::GpuParticleOccluder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_841F065F14CDF2D0_OFFSET))(this, a1);
	}

	::System::Void Method_4_9F23F65EEBE29D34(::RPG::Client::GpuParticleOccluder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_9F23F65EEBE29D34_OFFSET))(this, a1);
	}

	::System::Void _Init_b__4_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_0_OFFSET))(this, a1);
	}

	::System::Void _Init_b__4_1(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_1_OFFSET))(this, a1);
	}

	::System::Void _Init_b__4_2(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_2_OFFSET))(this, a1);
	}

	::System::Void _Init_b__4_3(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_3_OFFSET))(this, a1);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_4_7A283C762874342E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_7A283C762874342E_OFFSET))(this, a1);
	}

	::System::Void Method_4_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_4_265045B8E51327D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_265045B8E51327D0_OFFSET))(this);
	}

	::System::Void Method_4_2C391E2BFEA362CE(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_2C391E2BFEA362CE_OFFSET))(this, a1);
	}
};
