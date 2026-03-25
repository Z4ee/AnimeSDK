#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_47171E2F81FEA33B.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_EAF7984A8FAD6BE4;
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_4_82EDCE14E0F2D012_METHOD_4_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x11430510)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_079A14516634AACF_OFFSET UNITYSDK_OFFSET(0x114309D0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x114310E0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_149474FE623D787D_OFFSET UNITYSDK_OFFSET(0x114308D0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1142F940)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_1B51EDF8FE2AAC4F_OFFSET UNITYSDK_OFFSET(0x1142FE70)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11431010)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x11431080)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11430F90)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x11430080)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_7973E4410763B70B_OFFSET UNITYSDK_OFFSET(0x11430370)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11430010)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_9F1CEB9BE5187534_OFFSET UNITYSDK_OFFSET(0x114310F0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1142FB00)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1142FFD0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_CA67DDE4EE9D55BA_OFFSET UNITYSDK_OFFSET(0x11430AF0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_CCD4391BDC7807D9_OFFSET UNITYSDK_OFFSET(0x11431070)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1142FD10)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_E39B4279BF06EB37_OFFSET UNITYSDK_OFFSET(0x1142FBA0)
#define CLASS_4_82EDCE14E0F2D012__CCTOR_OFFSET UNITYSDK_OFFSET(0x11430E20)
#define CLASS_4_82EDCE14E0F2D012__CTOR_OFFSET UNITYSDK_OFFSET(0x11430D00)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x11430E90)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x11430EB0)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x11430ED0)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x11430F30)

inline static constexpr unsigned int Class_4_82EDCE14E0F2D012_TypeDefinitionIndex = 40005;

class Class_4_82EDCE14E0F2D012 : public ::Class_3_47171E2F81FEA33B
{
public:
	static ::UnityEngine::Texture2D** StaticGet_Field_4_7()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x11860);
	}
	static ::System::String** StaticGet_Field_4_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x11868);
	}
	static ::System::String** StaticGet_Field_4_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x11870);
	}
	static ::UnityEngine::Texture2D** StaticGet_Field_4_8()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x11878);
	}
	static ::System::Int32* StaticGet_Field_4_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5500);
	}
	static ::System::Int32* StaticGet_Field_4_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5504);
	}
	static ::System::Int32* StaticGet_Field_4_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5508);
	}
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_4_1; // 0x70
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_4_0; // 0x78
	::Il2CppArray<::UnityEngine::Matrix4x4>* Field_4_10; // 0x80
	::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>* Field_4_9; // 0x88
	::System::Boolean Field_4_4; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__CCTOR_OFFSET))();
	}

	::System::Void Method_4_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_151E25A63D14DDB0_OFFSET))(this);
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

	::System::Void Method_4_1B51EDF8FE2AAC4F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_1B51EDF8FE2AAC4F_OFFSET))(this, a1);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_4_7973E4410763B70B(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_7973E4410763B70B_OFFSET))(this, a1);
	}

	::System::Void Method_4_149474FE623D787D(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_149474FE623D787D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void Method_4_079A14516634AACF(::RPG::Client::GpuParticleOccluder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_079A14516634AACF_OFFSET))(this, a1);
	}

	::System::Void Method_4_CA67DDE4EE9D55BA(::RPG::Client::GpuParticleOccluder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_CA67DDE4EE9D55BA_OFFSET))(this, a1);
	}

	::System::Void _Init_b__4_0(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_0_OFFSET))(this, node);
	}

	::System::Void _Init_b__4_1(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_1_OFFSET))(this, node);
	}

	::System::Void _Init_b__4_2(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_2_OFFSET))(this, node);
	}

	::System::Void _Init_b__4_3(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__INIT_B__4_3_OFFSET))(this, node);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_4_CCD4391BDC7807D9(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_CCD4391BDC7807D9_OFFSET))(this, P0);
	}

	::System::Void Method_4_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_4_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_4_9F1CEB9BE5187534(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_9F1CEB9BE5187534_OFFSET))(this, P0);
	}
};
