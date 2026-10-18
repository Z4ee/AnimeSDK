#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0.h"
#include "unitysdk/Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0_1.h"
#include "unitysdk/Class_1_FFA6920A2334BA19_Struct_2_9FC9AACA48BBC050.h"
#include "unitysdk/Class_1_FFA6920A2334BA19_Struct_2_C42B113D49E2189B.h"
#include "unitysdk/RPG/Rendering/SDFAtlasLayout.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_FFA6920A2334BA19_Class_1_16D0CCD129DE3384;
class Class_1_FFA6920A2334BA19_Class_1_3E3C6F6532335D9F;
class Class_1_FFA6920A2334BA19_Class_1_9A90CD018E72DF20_7;
namespace RPG::Client { class SDFObjectMonoPlugin; }
namespace RPG::SimpRTX { class BakedSDFInstanceData; }
namespace RPG::SimpRTX { class BakedSDFPrefabData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define CLASS_1_FFA6920A2334BA19_GET_RESOURCEREVISION_OFFSET UNITYSDK_OFFSET(0x15B7ACF0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_0503AE5097B5A554_OFFSET UNITYSDK_OFFSET(0x15B81CC0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_0B6C30241ECFF674_OFFSET UNITYSDK_OFFSET(0x15B7EAD0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_0BB8935AE4450217_OFFSET UNITYSDK_OFFSET(0x15B7E850)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_10D5B0E7011B0EFB_1_OFFSET UNITYSDK_OFFSET(0x15B7FDE0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_10D5B0E7011B0EFB_2_OFFSET UNITYSDK_OFFSET(0x15B7FE20)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_10D5B0E7011B0EFB_OFFSET UNITYSDK_OFFSET(0x15B7FDA0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15B828E0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_146E6E50FAF07D8F_1_OFFSET UNITYSDK_OFFSET(0x15B80C80)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x15B7B5A0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_192BAEC25E2C93E5_OFFSET UNITYSDK_OFFSET(0x15B80A40)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x15B7B350)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x15B7B2E0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_377B8F9C683A93A2_OFFSET UNITYSDK_OFFSET(0x15B80420)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x15B7AE10)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x15B812F0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_3CE16216A2B13588_OFFSET UNITYSDK_OFFSET(0x15B81810)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15B7AD60)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_48C541C9F9332943_OFFSET UNITYSDK_OFFSET(0x15B7D0E0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_4A483C010D93C0DA_OFFSET UNITYSDK_OFFSET(0x15B7FE60)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_68A04D56EE494D88_OFFSET UNITYSDK_OFFSET(0x15B7DFC0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_6D0B44FA06417D5B_OFFSET UNITYSDK_OFFSET(0x15B7BDA0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x15B82AB0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_820E89ADBDFE88A6_OFFSET UNITYSDK_OFFSET(0x15B7E8D0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x15B7FC00)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_94457A29A0D1E94E_OFFSET UNITYSDK_OFFSET(0x15B7FAC0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x15B82890)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15B7FC40)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x15B7C4A0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_97DC9E9A6233981D_OFFSET UNITYSDK_OFFSET(0x15B7B9F0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15B7FC90)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x15B7FCE0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_AF9BC0DBDAE8BB58_OFFSET UNITYSDK_OFFSET(0x15B7E960)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x15B7A810)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_BE9186E822781D9E_OFFSET UNITYSDK_OFFSET(0x15B7BFB0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_C1CB95CFD56FEB30_1_OFFSET UNITYSDK_OFFSET(0x15B7FBB0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_C1CB95CFD56FEB30_OFFSET UNITYSDK_OFFSET(0x15B7FB60)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15B7BEF0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B7AD10)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_E292359271A33B16_OFFSET UNITYSDK_OFFSET(0x15B7F8A0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x15B827E0)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15B80A30)
#define CLASS_1_FFA6920A2334BA19_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x15B7BF40)
#define CLASS_1_FFA6920A2334BA19_SET_RESOURCEREVISION_OFFSET UNITYSDK_OFFSET(0x15B7AD00)
#define CLASS_1_FFA6920A2334BA19__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B83B70)
#define CLASS_1_FFA6920A2334BA19__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7A920)

inline static constexpr unsigned int Class_1_FFA6920A2334BA19_TypeDefinitionIndex = 51777;

class Class_1_FFA6920A2334BA19 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_FFA6920A2334BA19_Class_1_16D0CCD129DE3384*>** StaticGet_KJELCLDOCIG()
	{
		return (::Il2CppArray<::Class_1_FFA6920A2334BA19_Class_1_16D0CCD129DE3384*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA6920A2334BA19_TypeDefinitionIndex)->GetStaticField(0x6F140);
	}
	static ::Il2CppArray<::Class_1_FFA6920A2334BA19_Class_1_3E3C6F6532335D9F*>** StaticGet_FCOKLIPHHIO()
	{
		return (::Il2CppArray<::Class_1_FFA6920A2334BA19_Class_1_3E3C6F6532335D9F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA6920A2334BA19_TypeDefinitionIndex)->GetStaticField(0x6F148);
	}
	static ::Class_1_FFA6920A2334BA19** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_FFA6920A2334BA19**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA6920A2334BA19_TypeDefinitionIndex)->GetStaticField(0x6F150);
	}
	::Il2CppArray<::Class_1_FFA6920A2334BA19_Struct_2_C42B113D49E2189B>* CLOCLCGJJOP; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* KGKHJBMEDMD; // 0x18
	::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>* MCHNHCIIEIN; // 0x20
	::UnityEngine::Texture2DArray* IHHEEBFAPDG; // 0x28
	::UnityEngine::Texture2DArray* EHFIDCPEOGP; // 0x30
	::System::Collections::Generic::List_1<::Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0>* LDEHGBKHGBP; // 0x38
	::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>* IGKKMPHIGFI; // 0x40
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* NAFFIHHGHBK; // 0x48
	::System::Collections::Generic::List_1<::Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0_1>* JKALFEJEJGB; // 0x50
	::UnityEngine::RenderTexture* LOFBPJMALCG; // 0x58
	::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* BNJHDLBDMJE; // 0x60
	::UnityEngine::Texture2DArray* GPAJOKJIDMK; // 0x68
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::RPG::Rendering::SDFAtlasLayout>* BKHNMIBIJGH; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* LEONEOFCGOE; // 0x78
	::UnityEngine::ComputeBuffer* PPEOOBJCDGJ; // 0x80
	::UnityEngine::ComputeBuffer* LBMDCDGJLJF; // 0x88
	::Il2CppArray<::Class_1_FFA6920A2334BA19_Struct_2_9FC9AACA48BBC050>* EAALCMIFPHE; // 0x90
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* KFHEJDPIMCI; // 0x98
	::System::Int32 KOMIMBIPIEG; // 0xA0
	::UnityEngine::Quaternion ACFFHGEFFJA; // 0xA4
	::System::Int32 OCDBKMPGCBO; // 0xB4
	::System::Int32 KFPDEGNJHNA; // 0xB8
	::System::Boolean NMGDBOPMCHE; // 0xBC
	::System::Boolean APMLOOBILCE; // 0xBD
	::System::Boolean AJMHHLBLKEA; // 0xBE
	::System::Boolean EMHOAKLFPHB; // 0xBF
	::UnityEngine::Vector3 EFMDMDCCHGG; // 0xC0
	::System::Int32 _ResourceRevision_k__BackingField; // 0xCC
	::System::Int32 JJCFMAOKHJP; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19__CCTOR_OFFSET))();
	}

	static ::Class_1_FFA6920A2334BA19* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_FFA6920A2334BA19*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	::System::Int32 get_ResourceRevision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_GET_RESOURCEREVISION_OFFSET))(this);
	}

	::System::Void set_ResourceRevision(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_SET_RESOURCEREVISION_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_36F46336ADA62D13_OFFSET))(this);
	}

	::System::Int32 Method_1_97DC9E9A6233981D(::RPG::Client::SDFObjectMonoPlugin* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_97DC9E9A6233981D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D0B44FA06417D5B(::RPG::Client::SDFObjectMonoPlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_6D0B44FA06417D5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Int32 Method_1_BE9186E822781D9E(::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_BE9186E822781D9E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_48C541C9F9332943(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a1, ::System::Collections::Generic::List_1<::RPG::Rendering::SDFAtlasLayout>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Collections::Generic::List_1<::RPG::Rendering::SDFAtlasLayout>*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_48C541C9F9332943_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_68A04D56EE494D88(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a1, ::UnityEngine::Texture2DArray*& a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2DArray*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_68A04D56EE494D88_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_820E89ADBDFE88A6(::UnityEngine::Texture2D*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_820E89ADBDFE88A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BB8935AE4450217(::UnityEngine::Texture2DArray*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2DArray*&))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_0BB8935AE4450217_OFFSET))(this, a1);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::Class_1_FFA6920A2334BA19_Struct_2_C42B113D49E2189B Method_1_0B6C30241ECFF674(::RPG::Client::SDFObjectMonoPlugin* a1)
	{
		return ((::Class_1_FFA6920A2334BA19_Struct_2_C42B113D49E2189B(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_0B6C30241ECFF674_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF9BC0DBDAE8BB58(::UnityEngine::ComputeBuffer*& a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_AF9BC0DBDAE8BB58_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E292359271A33B16(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_E292359271A33B16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_3AA20A0DA6990FBE_OFFSET))(this);
	}

	::System::Void Method_1_94457A29A0D1E94E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_94457A29A0D1E94E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::ComputeBuffer* Method_1_C1CB95CFD56FEB30()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_C1CB95CFD56FEB30_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* Method_1_C1CB95CFD56FEB30_1()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_C1CB95CFD56FEB30_1_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_1_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_AA972BE565DAF9E3_OFFSET))(this);
	}

	::UnityEngine::Texture2DArray* Method_1_10D5B0E7011B0EFB()
	{
		return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_10D5B0E7011B0EFB_OFFSET))(this);
	}

	::UnityEngine::Texture2DArray* Method_1_10D5B0E7011B0EFB_1()
	{
		return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_10D5B0E7011B0EFB_1_OFFSET))(this);
	}

	::UnityEngine::Texture2DArray* Method_1_10D5B0E7011B0EFB_2()
	{
		return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_10D5B0E7011B0EFB_2_OFFSET))(this);
	}

	::Class_1_FFA6920A2334BA19_Class_1_9A90CD018E72DF20_7* Method_1_4A483C010D93C0DA(::System::Int32 a1)
	{
		return ((::Class_1_FFA6920A2334BA19_Class_1_9A90CD018E72DF20_7*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_4A483C010D93C0DA_OFFSET))(this, a1);
	}

	::Class_1_FFA6920A2334BA19_Class_1_9A90CD018E72DF20_7* Method_1_377B8F9C683A93A2(::System::Int32 a1)
	{
		return ((::Class_1_FFA6920A2334BA19_Class_1_9A90CD018E72DF20_7*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_377B8F9C683A93A2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_192BAEC25E2C93E5(::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>* a1, ::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>*, ::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_192BAEC25E2C93E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_146E6E50FAF07D8F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_146E6E50FAF07D8F_1_OFFSET))(this);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_1_0503AE5097B5A554(::System::Collections::Generic::List_1<::Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0>*))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_0503AE5097B5A554_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3CE16216A2B13588(::System::Collections::Generic::List_1<::Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FFA6920A2334BA19_Struct_2_27CC52E413AD62A0>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_3CE16216A2B13588_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFA6920A2334BA19_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}
};
