#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65F0290E6742FF82.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CRPLightQualityGroupPlugin;
class LocalAmbientVolume;
class LocalFogSphereInstance;
namespace RPG::Client { class BillboardController; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class Stage; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace VLB { class VolumetricLightBeam; }

#define CLASS_2_3E971D2CC37E1611_METHOD_2_02416282B55EC5F3_OFFSET UNITYSDK_OFFSET(0x18553CD0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x185541D0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x185525C0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x185525B0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x185557A0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_1E1E85F6ECBD80C3_OFFSET UNITYSDK_OFFSET(0x18555820)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_23BBE7E4C10CD954_OFFSET UNITYSDK_OFFSET(0x18552640)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_30FEAF7A4F6C1868_1_OFFSET UNITYSDK_OFFSET(0x185573E0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_30FEAF7A4F6C1868_OFFSET UNITYSDK_OFFSET(0x18557170)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0x18553EA0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_531CFD121EB3E54B_OFFSET UNITYSDK_OFFSET(0x185555D0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET UNITYSDK_OFFSET(0x18556FC0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x18556F40)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_6459F800546D1020_OFFSET UNITYSDK_OFFSET(0x18552740)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x18553F80)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_92193DE475EFDCC9_1_OFFSET UNITYSDK_OFFSET(0x18556870)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x18556C90)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_9EAD659E83CB620F_OFFSET UNITYSDK_OFFSET(0x185548E0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_A1A4F756C8177B5D_OFFSET UNITYSDK_OFFSET(0x185525D0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x185545E0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x185544B0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x18556B40)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_B33B03910C452E24_OFFSET UNITYSDK_OFFSET(0x18553320)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18556EF0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x18557030)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_E44479AEB7E41F2C_OFFSET UNITYSDK_OFFSET(0x18554670)
#define CLASS_2_3E971D2CC37E1611__CTOR_OFFSET UNITYSDK_OFFSET(0x18557640)

inline static constexpr unsigned int Class_2_3E971D2CC37E1611_TypeDefinitionIndex = 49995;

class Class_2_3E971D2CC37E1611 : public ::Class_1_65F0290E6742FF82
{
public:
	static ::System::Boolean* StaticGet_MIDHLHBANDB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E971D2CC37E1611_TypeDefinitionIndex)->GetStaticField(0x12AD0);
	}
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* CKIMGPFEJFK; // 0x60
	::Il2CppArray<::LocalFogSphereInstance*>* NFMAOLMMKOB; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* JHPIINONNCA; // 0x70
	::Il2CppArray<::VLB::VolumetricLightBeam*>* BIFBOPAOHEH; // 0x78
	::Il2CppArray<::RPG::Client::BillboardController*>* DHAOPOGODJM; // 0x80
	::Il2CppArray<::RPG::Client::BillboardController*>* ALGKHNNCGPO; // 0x88
	::UnityEngine::GameObject* LDCJBNOAAOI; // 0x90
	::UnityEngine::GameObject* IDIJJJJLDOO; // 0x98
	::Il2CppArray<::LocalFogSphereInstance*>* EKIFKGBKMCK; // 0xA0
	::Il2CppArray<::System::Single>* LOKMNCMLNCP; // 0xA8
	::Il2CppArray<::System::Single>* EHEAOJNLPGI; // 0xB0
	::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* PAMFEBONMOI; // 0xB8
	::RPG::Client::IAssetOperation* DBDIHPKHGGE; // 0xC0
	::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0xC8
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* EDBADCKAJLL; // 0xD0
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* GHMDEPHADOL; // 0xD8
	::Il2CppArray<::System::Boolean>* EKKOGGKBCBB; // 0xE0
	::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0xE8
	::Il2CppArray<::LocalAmbientVolume*>* BECHOGNNJJI; // 0xF0
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* LKHPJCPPICP; // 0xF8
	::RPG::Client::Stage* PKLNPNKEJOO; // 0x100
	::Il2CppArray<::VLB::VolumetricLightBeam*>* GOFAOHGFMCM; // 0x108
	::System::Boolean BKOJKLEEILP; // 0x110
	::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x114
	::System::Single EFDENNLCMBJ; // 0x118
	::System::Single HHHFCGBEEMO; // 0x11C
	::System::Single LHDCLECAOEN; // 0x120
	::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x124
	::System::Single NHJCPBCIEAF; // 0x128
	::System::Single EICNDHAEMHJ; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::RPG::Client::Stage* Method_2_A1A4F756C8177B5D()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_A1A4F756C8177B5D_OFFSET))(this);
	}

	::RPG::Client::Stage* Method_2_23BBE7E4C10CD954()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_23BBE7E4C10CD954_OFFSET))(this);
	}

	::System::Void Method_2_6459F800546D1020(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_6459F800546D1020_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A13BD8A67015544()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_4A13BD8A67015544_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_E44479AEB7E41F2C(::RPG::Client::OpenWorld::StreamingLightEnum& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum&))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_E44479AEB7E41F2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EAD659E83CB620F(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_9EAD659E83CB620F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_531CFD121EB3E54B(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_531CFD121EB3E54B_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_B33B03910C452E24(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_B33B03910C452E24_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E1E85F6ECBD80C3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_1E1E85F6ECBD80C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_92193DE475EFDCC9_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_92193DE475EFDCC9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_02416282B55EC5F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_02416282B55EC5F3_OFFSET))(this);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_30FEAF7A4F6C1868(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_30FEAF7A4F6C1868_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_30FEAF7A4F6C1868_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_30FEAF7A4F6C1868_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}
};
