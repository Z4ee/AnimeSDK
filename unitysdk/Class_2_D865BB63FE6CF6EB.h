#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
class Class_1_EAF7984A8FAD6BE4;
class Class_2_D865BB63FE6CF6EB_1;
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_D865BB63FE6CF6EB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1049F330)
#define CLASS_2_D865BB63FE6CF6EB_GET_KEY_OFFSET UNITYSDK_OFFSET(0x104A09F0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1049EE10)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1049E4B0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0x1049F2C0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1049F1E0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x104A0E90)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x104A0EF0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x104A0F50)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x104A0FB0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x104A1080)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x104A10E0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x104A0E20)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x1049E450)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x104A0E80)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x104A1140)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x104A1010)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x1049EF50)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1049E9B0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x1049E660)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1049E600)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1049F240)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1049ED20)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1049E3B0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1049E370)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CB17C9AEE04C4C92_OFFSET UNITYSDK_OFFSET(0x1049E3F0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x104A0600)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x1049E8A0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0x104A05A0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_F5EE5DF9DB6DF16B_OFFSET UNITYSDK_OFFSET(0x1049E6C0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x104A0760)
#define CLASS_2_D865BB63FE6CF6EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x104A0D20)
#define CLASS_2_D865BB63FE6CF6EB__CTOR_OFFSET UNITYSDK_OFFSET(0x104A0A00)
#define CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_0_OFFSET UNITYSDK_OFFSET(0x104A0E00)
#define CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_1_OFFSET UNITYSDK_OFFSET(0x104A0E10)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex = 40007;

class Class_2_D865BB63FE6CF6EB : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_18()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x13970);
	}
	static ::System::String** StaticGet_Field_2_21()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x13978);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_17()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x13980);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_16()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x13988);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_19()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x13990);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_20()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x13998);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_15()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x139A0);
	}
	static ::System::Int32* StaticGet_Field_2_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5C90);
	}
	static ::System::Int32* StaticGet_Field_2_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5C94);
	}
	static ::System::Int32* StaticGet_Field_2_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5C98);
	}
	static ::System::Int32* StaticGet_Field_2_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5C9C);
	}
	static ::System::Int32* StaticGet_Field_2_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5CA0);
	}
	static ::System::Int32* StaticGet_Field_2_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5CA4);
	}
	static ::System::Int32* StaticGet_Field_2_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5CA8);
	}
	static ::System::Int32* StaticGet_Field_2_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5CAC);
	}
	static ::System::Int32* StaticGet_Field_2_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5CB0);
	}
	static ::System::Int32* StaticGet_Field_2_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x5CB4);
	}
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_2; // 0x28
	::UnityEngine::RenderTexture* Field_2_8; // 0x30
	::Class_2_D865BB63FE6CF6EB_1* Field_2_22; // 0x38
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_5; // 0x40
	::UnityEngine::RenderTexture* Field_2_7; // 0x48
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_3; // 0x50
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_4; // 0x58
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_1; // 0x60
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_6; // 0x68
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_0; // 0x70
	::UnityEngine::Vector2 Field_2_14; // 0x78
	::System::Int32 Field_2_9; // 0x80
	::UnityEngine::Vector4 Field_2_13; // 0x84
	::System::Int32 Field_2_23; // 0x94
	::System::Int32 Field_2_12; // 0x98
	::System::Int32 Field_2_11; // 0x9C
	::System::Int32 Field_2_10; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CB17C9AEE04C4C92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_CB17C9AEE04C4C92_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Void Method_2_F5EE5DF9DB6DF16B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_F5EE5DF9DB6DF16B_OFFSET))(this);
	}

	static ::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_84B92802FDAFF6C8_OFFSET))();
	}

	static ::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
	}

	::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_EXECUTE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::RenderTexture* Method_2_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_EB44EFCB44CBA9C1_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_2_CBC2443440B894D4(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::RenderTextureFormat a5)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_CBC2443440B894D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Int32 get_Key()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_GET_KEY_OFFSET))(this);
	}

	::System::Void _PostInit_b__32_0(::Class_1_EAF7984A8FAD6BE4* v)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_0_OFFSET))(this, v);
	}

	::System::Void _PostInit_b__32_1(::Class_1_EAF7984A8FAD6BE4* v)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_1_OFFSET))(this, v);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_6_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}
};
