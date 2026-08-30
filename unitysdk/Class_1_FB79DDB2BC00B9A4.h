#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class EnvWindReceiverBehavior; }
namespace RPG::Client { class EnvWindTriggerBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x16918C40)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_1287BF27D6AE216A_OFFSET UNITYSDK_OFFSET(0x169171A0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_188FC28421330085_OFFSET UNITYSDK_OFFSET(0x16916A50)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16918D80)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x169191C0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_6C2BC763DC725395_OFFSET UNITYSDK_OFFSET(0x16917040)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_7E80A9733BB68061_OFFSET UNITYSDK_OFFSET(0x16916ED0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8768DB5C5F1C9E04_OFFSET UNITYSDK_OFFSET(0x169172D0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_882594C8427BC253_OFFSET UNITYSDK_OFFSET(0x16917000)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8E53278E2D15105D_OFFSET UNITYSDK_OFFSET(0x16919320)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_90016C036FAFD56D_OFFSET UNITYSDK_OFFSET(0x16917AB0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x16916BF0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C073A23C563BCC9F_OFFSET UNITYSDK_OFFSET(0x16918E60)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x16918FE0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_CF94C38BDCE016F0_OFFSET UNITYSDK_OFFSET(0x16916B00)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_D2C95880CD3B2D8E_OFFSET UNITYSDK_OFFSET(0x16917320)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x169168A0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x16917680)
#define CLASS_1_FB79DDB2BC00B9A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16919ED0)
#define CLASS_1_FB79DDB2BC00B9A4__CTOR_OFFSET UNITYSDK_OFFSET(0x169169E0)

inline static constexpr unsigned int Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex = 50057;

class Class_1_FB79DDB2BC00B9A4 : public ::System::Object
{
public:
	static ::Class_1_FB79DDB2BC00B9A4** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_FB79DDB2BC00B9A4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x60CD0);
	}
	static ::System::Int32* StaticGet_DFGBCDBAFGH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E30);
	}
	static ::System::Int32* StaticGet_LNFPGLEOBKP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E34);
	}
	static ::System::Int32* StaticGet_EIOKMHMOBLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E38);
	}
	static ::System::Int32* StaticGet_HLLGKCPBENO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E3C);
	}
	static ::UnityEngine::Vector3Int* StaticGet_LADHFHDECHH()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E40);
	}
	static ::System::Int32* StaticGet_ODIBIIFNFAJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E4C);
	}
	static ::System::Int32* StaticGet_PDCBJLNLPHH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E50);
	}
	static ::System::Int32* StaticGet_GCELPBDCIEH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E54);
	}
	static ::System::Int32* StaticGet_MHBDOAPDKMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E58);
	}
	static ::System::Int32* StaticGet_KPOLLAIGBMA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E5C);
	}
	static ::System::Int32* StaticGet_DPJKMHLAIPL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E60);
	}
	static ::System::Int32* StaticGet_PFBMMNLMGJG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E64);
	}
	static ::UnityEngine::Vector3Int* StaticGet_CMDKLBINEEG()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E68);
	}
	static ::System::Int32* StaticGet_DCEDIGGAIMN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E74);
	}
	static ::System::Int32* StaticGet_NFBBNMPCEPN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E78);
	}
	static ::System::Int32* StaticGet_ENBFKGFGKPG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x13E7C);
	}
	::UnityEngine::ComputeBuffer* KKFHKKCCDIH; // 0x10
	::UnityEngine::Texture3D* KJPKOMPGFBP; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* BHEKEAFCDHK; // 0x20
	::UnityEngine::RenderTexture* HFKKKDIPMLI; // 0x28
	::UnityEngine::ComputeShader* KOECHKLKMLL; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* HJMDECCDGCP; // 0x38
	::UnityEngine::Vector3 CHNAOPLBFIB; // 0x40
	::System::Int32 IFHNOFMLLPC; // 0x4C
	::UnityEngine::Vector4 GLJNDCGOANC; // 0x50
	::UnityEngine::Vector3Int JHGMJEJDPOC; // 0x60
	::UnityEngine::Vector3 FOALPCMNMOI; // 0x6C
	::System::Boolean POJPJLJPDEJ; // 0x78
	::System::Boolean PFNKIIHONLI; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4__CCTOR_OFFSET))();
	}

	static ::Class_1_FB79DDB2BC00B9A4* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_FB79DDB2BC00B9A4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::UnityEngine::ComputeShader* Method_1_188FC28421330085()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_188FC28421330085_OFFSET))(this);
	}

	::System::Void Method_1_CF94C38BDCE016F0(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_CF94C38BDCE016F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E80A9733BB68061(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_7E80A9733BB68061_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Method_1_882594C8427BC253()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_882594C8427BC253_OFFSET))(this);
	}

	::System::Void Method_1_6C2BC763DC725395(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_6C2BC763DC725395_OFFSET))(this, a1);
	}

	::System::Void Method_1_1287BF27D6AE216A(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_1287BF27D6AE216A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Method_1_8768DB5C5F1C9E04()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8768DB5C5F1C9E04_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_D2C95880CD3B2D8E(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_D2C95880CD3B2D8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_C073A23C563BCC9F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C073A23C563BCC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_90016C036FAFD56D(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3Int a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_90016C036FAFD56D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_1_8E53278E2D15105D(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8E53278E2D15105D_OFFSET))(this, a1);
	}
};
