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
template <typename T> class Class_4_4BB9EBAAE168F465;

#define CLASS_4_82EDCE14E0F2D012_METHOD_4_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x15A836B0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_149474FE623D787D_OFFSET UNITYSDK_OFFSET(0x15A83A80)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x15A82A10)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0x15A82F60)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_7973E4410763B70B_OFFSET UNITYSDK_OFFSET(0x15A83500)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_841F065F14CDF2D0_OFFSET UNITYSDK_OFFSET(0x15A83B80)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x15A831C0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_9F23F65EEBE29D34_OFFSET UNITYSDK_OFFSET(0x15A83D20)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15A82BF0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15A830E0)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15A82E00)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_E39B4279BF06EB37_OFFSET UNITYSDK_OFFSET(0x15A82C90)
#define CLASS_4_82EDCE14E0F2D012_METHOD_4_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x15A83120)
#define CLASS_4_82EDCE14E0F2D012__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A83FB0)
#define CLASS_4_82EDCE14E0F2D012__CTOR_OFFSET UNITYSDK_OFFSET(0x15A83E90)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15A84020)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x15A84040)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x15A84060)
#define CLASS_4_82EDCE14E0F2D012__INIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x15A84090)

inline static constexpr unsigned int Class_4_82EDCE14E0F2D012_TypeDefinitionIndex = 49742;

class Class_4_82EDCE14E0F2D012 : public ::Class_3_F31596D70431331B
{
public:
	static ::UnityEngine::Texture2D** StaticGet_PEFKMODDAAB()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5E1C0);
	}
	static ::System::String** StaticGet_HKAMADMCGLB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5E1C8);
	}
	static ::UnityEngine::Texture2D** StaticGet_BIIKOOAPPPF()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5E1D0);
	}
	static ::System::String** StaticGet_IGJIENODPCA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x5E1D8);
	}
	static ::System::Int32* StaticGet_HJMHJLLIPCF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x13430);
	}
	static ::System::Int32* StaticGet_JCKILNLNDJO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x13434);
	}
	static ::System::Int32* StaticGet_CHDFDHFNOBE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012_TypeDefinitionIndex)->GetStaticField(0x13438);
	}
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* ECJNALNIKIF; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>* NOOHFKBEHOH; // 0x78
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* CELDAJGLMEI; // 0x80
	::Il2CppArray<::UnityEngine::Matrix4x4>* PNMIACMCOCC; // 0x88
	::System::Boolean ECIAIPLAENC; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012__CCTOR_OFFSET))();
	}

	::System::Void Method_4_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_2B66C008535F8B01_OFFSET))(this);
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

	::System::Void Method_4_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012_METHOD_4_04F02FC65FAA2E0C_OFFSET))(this);
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
};
