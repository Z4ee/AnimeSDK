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

#define CLASS_2_D865BB63FE6CF6EB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCBFFA60)
#define CLASS_2_D865BB63FE6CF6EB_GET_KEY_OFFSET UNITYSDK_OFFSET(0xCC01040)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0xCC01790)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xCBFEB30)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xCBFEB90)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xCC01670)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0xCBFF670)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0xCBFF9F0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCBFF910)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xCC014F0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xCC01550)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xCC015B0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xCC01610)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xCC016D0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xCC01730)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCC01480)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xCBFF090)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0xCBFEDA0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xCBFED40)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xCBFECE0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCBFF970)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCBFF400)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xCC014E0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0xCBFEAD0)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCBFEA90)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCBFEA50)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0xCC00C50)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0xCBFEF80)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xCBFF510)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0xCC00C00)
#define CLASS_2_D865BB63FE6CF6EB_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xCC00DB0)
#define CLASS_2_D865BB63FE6CF6EB__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC01380)
#define CLASS_2_D865BB63FE6CF6EB__CTOR_OFFSET UNITYSDK_OFFSET(0xCC01050)
#define CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_0_OFFSET UNITYSDK_OFFSET(0xCC01460)
#define CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_1_OFFSET UNITYSDK_OFFSET(0xCC01470)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex = 46499;

class Class_2_D865BB63FE6CF6EB : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_0()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C10);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C18);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_2()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C20);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_3()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C28);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_4()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C30);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_5()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C38);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_6()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x68C40);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141D0);
	}
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141D4);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141D8);
	}
	static ::System::Int32* StaticGet_Field_2_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141DC);
	}
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141E0);
	}
	static ::System::Int32* StaticGet_Field_2_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141E4);
	}
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141E8);
	}
	static ::System::Int32* StaticGet_Field_2_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141EC);
	}
	static ::System::Int32* StaticGet_Field_2_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141F0);
	}
	static ::System::Int32* StaticGet_Field_2_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_TypeDefinitionIndex)->GetStaticField(0x141F4);
	}
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_17; // 0x28
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_18; // 0x30
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_19; // 0x38
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_20; // 0x40
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_21; // 0x48
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_22; // 0x50
	::Class_2_D865BB63FE6CF6EB_1* Field_2_23; // 0x58
	::UnityEngine::RenderTexture* Field_2_24; // 0x60
	::UnityEngine::RenderTexture* Field_2_25; // 0x68
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_26; // 0x70
	::System::Int32 Field_2_27; // 0x78
	::UnityEngine::Vector4 Field_2_28; // 0x7C
	::System::Int32 Field_2_29; // 0x8C
	::System::Int32 Field_2_30; // 0x90
	::System::Int32 Field_2_31; // 0x94
	::UnityEngine::Vector2 Field_2_32; // 0x98
	::System::Int32 Field_2_33; // 0xA0

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

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_2_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_228E3444D290BEE7_OFFSET))(this);
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

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	static ::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_84B92802FDAFF6C8_OFFSET))();
	}

	static ::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_414A270E91E4BF2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_414A270E91E4BF2D_OFFSET))(this, a1);
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

	::System::Void _PostInit_b__32_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_0_OFFSET))(this, a1);
	}

	::System::Void _PostInit_b__32_1(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB__POSTINIT_B__32_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
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

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_5790A55946AA509D_6_OFFSET))(this);
	}

	::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
	}
};
