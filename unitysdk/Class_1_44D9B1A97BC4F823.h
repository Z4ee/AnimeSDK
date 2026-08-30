#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RogueDLCCompass_RingPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MultiLightEffectMaterialBlock; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_44D9B1A97BC4F823_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x163E3590)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x163E3B20)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_20FFED4976A10875_OFFSET UNITYSDK_OFFSET(0x163E2EA0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x163E4A80)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x163E3980)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_4F8BD755AF34B283_OFFSET UNITYSDK_OFFSET(0x163E4310)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_6BF28FCDB3FDACE9_OFFSET UNITYSDK_OFFSET(0x163E4700)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x163E4DD0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x163E34F0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x163E4A40)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x163E41F0)
#define CLASS_1_44D9B1A97BC4F823__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E4E70)
#define CLASS_1_44D9B1A97BC4F823__CTOR_OFFSET UNITYSDK_OFFSET(0x163E4E50)

inline static constexpr unsigned int Class_1_44D9B1A97BC4F823_TypeDefinitionIndex = 78481;

class Class_1_44D9B1A97BC4F823 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_MEIIELDCPCO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA40);
	}
	static ::UnityEngine::Color* StaticGet_OKOOFCNENCG()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA44);
	}
	static ::System::Single* StaticGet_MJLNAFDIMKI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA54);
	}
	static ::UnityEngine::Color* StaticGet_KJIAMBJFLNI()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA58);
	}
	static ::UnityEngine::Color* StaticGet_MMMPKENEGHD()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA68);
	}
	static ::System::Single* StaticGet_CABMNBCEKJC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA78);
	}
	static ::UnityEngine::Color* StaticGet_PMEFFBPMECP()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA7C);
	}
	static ::System::Single* StaticGet_IDECEGANGLA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA8C);
	}
	static ::System::Single* StaticGet_PIAJMODAKGK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA90);
	}
	static ::System::Int32* StaticGet_NOFACMABDDP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA94);
	}
	static ::UnityEngine::Color* StaticGet_MMPFEFIMNOA()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFA98);
	}
	static ::System::Single* StaticGet_FJMMAGJDJDC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFAA8);
	}
	static ::System::Single* StaticGet_ADOHHAMADIF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFAAC);
	}
	static ::System::Single* StaticGet_BFILFBPDLEF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0xFAB0);
	}
	::System::Collections::Generic::List_1<::System::Single>* ENCHFAKMAGA; // 0x10
	::UnityEngine::Animator* APPGGMLEPLN; // 0x18
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* DCFOHKLJDFI; // 0x28
	::System::Action* MPKAFEJFNKN; // 0x30
	::RPG::Client::MultiLightEffectMaterialBlock* IMGODLDADLA; // 0x38
	::System::Collections::Generic::List_1<::System::Single>* IEPHDNMKEIJ; // 0x40
	::System::Single PGMIOKKLHIE; // 0x48
	::System::Single OHLCEAMNLDG; // 0x4C
	::System::Single HPCHCEFOKJB; // 0x50
	::System::Single CIMDCFJEIEC; // 0x54
	::System::Single KNDCPDPBDEA; // 0x58
	::System::Single JEGDGFDAMKL; // 0x5C
	::System::Single PDDDOLHLFDC; // 0x60
	::System::Int32 BGNACBGBMHG; // 0x64
	::System::Single CIKOAICCDCO; // 0x68
	::System::Int32 CJPDNJGLMEP; // 0x6C
	::System::Single OIFJNPBMFFA; // 0x70
	::System::Int32 DDBLFAKICFL; // 0x74
	::System::Int32 GNOEGILFEMD; // 0x78
	::System::Boolean PNCGCLCOHMN; // 0x7C
	::System::Boolean GNIBGNDNBIB; // 0x7D
	::RPG::Client::Prop::RogueDLCCompass_RingPart PKBFFEKEPJP; // 0x80
	::UnityEngine::Color GBDCKBMCPCP; // 0x84
	::System::Single NNMFEFKDHCA; // 0x94
	::System::Int32 FFLPONLELKO; // 0x98
	::System::Single CPFGAJCAIBA; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823__CCTOR_OFFSET))();
	}

	::System::Void Method_1_20FFED4976A10875(::UnityEngine::Transform* a1, ::RPG::Client::Prop::RogueDLCCompass_RingPart a2, ::System::Collections::Generic::List_1<::System::Single>* a3, ::System::Collections::Generic::List_1<::System::Single>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::Prop::RogueDLCCompass_RingPart, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_20FFED4976A10875_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_4F8BD755AF34B283(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_4F8BD755AF34B283_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BF28FCDB3FDACE9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_6BF28FCDB3FDACE9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_41146E620D694011_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}
};
