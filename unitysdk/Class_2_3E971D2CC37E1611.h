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

#define CLASS_2_3E971D2CC37E1611_METHOD_2_02416282B55EC5F3_OFFSET UNITYSDK_OFFSET(0x16719B00)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1671A000)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x16718420)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16718410)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1671B5B0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_1E1E85F6ECBD80C3_OFFSET UNITYSDK_OFFSET(0x1671B630)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_23BBE7E4C10CD954_OFFSET UNITYSDK_OFFSET(0x167184A0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_30FEAF7A4F6C1868_1_OFFSET UNITYSDK_OFFSET(0x1671D210)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_30FEAF7A4F6C1868_OFFSET UNITYSDK_OFFSET(0x1671CFA0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0x16719CD0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_531CFD121EB3E54B_OFFSET UNITYSDK_OFFSET(0x1671B3E0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET UNITYSDK_OFFSET(0x1671CDF0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x1671CD70)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_6459F800546D1020_OFFSET UNITYSDK_OFFSET(0x167185A0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x16719DB0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_92193DE475EFDCC9_1_OFFSET UNITYSDK_OFFSET(0x1671C6A0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x1671CAC0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_9EAD659E83CB620F_OFFSET UNITYSDK_OFFSET(0x1671A700)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_A1A4F756C8177B5D_OFFSET UNITYSDK_OFFSET(0x16718430)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1671A410)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x1671A2E0)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x1671C970)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_B33B03910C452E24_OFFSET UNITYSDK_OFFSET(0x16719160)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1671CD20)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x1671CE60)
#define CLASS_2_3E971D2CC37E1611_METHOD_2_E44479AEB7E41F2C_OFFSET UNITYSDK_OFFSET(0x1671A4A0)
#define CLASS_2_3E971D2CC37E1611__CTOR_OFFSET UNITYSDK_OFFSET(0x1671D480)

inline static constexpr unsigned int Class_2_3E971D2CC37E1611_TypeDefinitionIndex = 47714;

class Class_2_3E971D2CC37E1611 : public ::Class_1_65F0290E6742FF82
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E971D2CC37E1611_TypeDefinitionIndex)->GetStaticField(0x72F0);
	}
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_1; // 0x60
	::RPG::Client::IAssetOperation* Field_2_2; // 0x68
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_3; // 0x70
	::UnityEngine::GameObject* Field_2_4; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x80
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_6; // 0x88
	::RPG::Client::Stage* Field_2_7; // 0x90
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_8; // 0x98
	::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* Field_2_9; // 0xA0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_10; // 0xA8
	::Il2CppArray<::LocalAmbientVolume*>* Field_2_11; // 0xB0
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_12; // 0xB8
	::Il2CppArray<::System::Single>* Field_2_13; // 0xC0
	::Il2CppArray<::UnityEngine::Light*>* Field_2_14; // 0xC8
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_15; // 0xD0
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_16; // 0xD8
	::Il2CppArray<::System::Boolean>* Field_2_17; // 0xE0
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_18; // 0xE8
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_19; // 0xF0
	::Il2CppArray<::System::Single>* Field_2_20; // 0xF8
	::UnityEngine::GameObject* Field_2_21; // 0x100
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_22; // 0x108
	::System::Single Field_2_23; // 0x110
	::System::Single Field_2_24; // 0x114
	::RPG::CustomRP::CustomLightQualityFilter Field_2_25; // 0x118
	::System::Single Field_2_26; // 0x11C
	::RPG::Client::OpenWorld::StreamingLightEnum Field_2_27; // 0x120
	::System::Boolean Field_2_28; // 0x124
	::System::Single Field_2_29; // 0x128
	::System::Single Field_2_30; // 0x12C

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
