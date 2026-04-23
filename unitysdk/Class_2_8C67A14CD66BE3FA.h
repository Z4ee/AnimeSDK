#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0A05564B7F916C1.h"
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

#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0xD355920)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xD355910)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xD358430)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_19BC92DE7F9F342F_1_OFFSET UNITYSDK_OFFSET(0xD35AAD0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_19BC92DE7F9F342F_OFFSET UNITYSDK_OFFSET(0xD35AA50)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_1E1E85F6ECBD80C3_OFFSET UNITYSDK_OFFSET(0xD3584B0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_23BBE7E4C10CD954_OFFSET UNITYSDK_OFFSET(0xD3559A0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD3571D0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0xD3570F0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD35A720)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xD35A780)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xD35A7E0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xD35A8B0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xD35A9F0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD35A650)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET UNITYSDK_OFFSET(0xD359EF0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0xD359E70)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_6AA67718161E5322_1_OFFSET UNITYSDK_OFFSET(0xD35A360)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_6AA67718161E5322_OFFSET UNITYSDK_OFFSET(0xD35A0F0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xD3572E0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_793FFA9A76FE6840_1_OFFSET UNITYSDK_OFFSET(0xD35A980)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xD35A910)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_8D85476FE777EFE9_OFFSET UNITYSDK_OFFSET(0xD355AA0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_92193DE475EFDCC9_1_OFFSET UNITYSDK_OFFSET(0xD359760)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0xD359BE0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_A1A4F756C8177B5D_OFFSET UNITYSDK_OFFSET(0xD355930)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xD357580)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_A58F1087C784F228_1_OFFSET UNITYSDK_OFFSET(0xD35A840)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_A58F1087C784F228_OFFSET UNITYSDK_OFFSET(0xD35A5E0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0xD357450)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xD359A60)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_B37D0BDD3F18549D_OFFSET UNITYSDK_OFFSET(0xD3582D0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD359E20)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0xD359F60)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0xD35A6B0)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0xD356F10)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_DD3C6BAB599CEFBE_OFFSET UNITYSDK_OFFSET(0xD356670)
#define CLASS_2_8C67A14CD66BE3FA_METHOD_2_EC1D5200B03756B4_OFFSET UNITYSDK_OFFSET(0xD357610)
#define CLASS_2_8C67A14CD66BE3FA__CTOR_OFFSET UNITYSDK_OFFSET(0xD35A5D0)

inline static constexpr unsigned int Class_2_8C67A14CD66BE3FA_TypeDefinitionIndex = 46166;

class Class_2_8C67A14CD66BE3FA : public ::Class_1_E0A05564B7F916C1
{
public:
	static ::System::Boolean* StaticGet_Field_2_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C67A14CD66BE3FA_TypeDefinitionIndex)->GetStaticField(0x10880);
	}
	::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* Field_2_5; // 0x60
	::Il2CppArray<::UnityEngine::Light*>* Field_2_10; // 0x68
	::Il2CppArray<::System::Single>* Field_2_8; // 0x70
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_2; // 0x78
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_19; // 0x80
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_18; // 0x88
	::Il2CppArray<::System::Single>* Field_2_9; // 0x90
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_13; // 0x98
	::RPG::Client::IAssetOperation* Field_2_20; // 0xA0
	::Il2CppArray<::System::Boolean>* Field_2_7; // 0xA8
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_14; // 0xB0
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_3; // 0xB8
	::UnityEngine::GameObject* Field_2_1; // 0xC0
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_4; // 0xC8
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_6; // 0xD0
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_16; // 0xD8
	::UnityEngine::GameObject* Field_2_0; // 0xE0
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_15; // 0xE8
	::RPG::Client::Stage* Field_2_21; // 0xF0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_11; // 0xF8
	::Il2CppArray<::LocalAmbientVolume*>* Field_2_17; // 0x100
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_12; // 0x108
	::System::Boolean Field_2_30; // 0x110
	::RPG::Client::OpenWorld::StreamingLightEnum Field_2_24; // 0x114
	::System::Single Field_2_27; // 0x118
	::System::Single Field_2_29; // 0x11C
	::System::Single Field_2_28; // 0x120
	::RPG::CustomRP::CustomLightQualityFilter Field_2_23; // 0x124
	::System::Single Field_2_26; // 0x128
	::System::Single Field_2_25; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::RPG::Client::Stage* Method_2_A1A4F756C8177B5D()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_A1A4F756C8177B5D_OFFSET))(this);
	}

	::RPG::Client::Stage* Method_2_23BBE7E4C10CD954()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_23BBE7E4C10CD954_OFFSET))(this);
	}

	::System::Void Method_2_8D85476FE777EFE9(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_8D85476FE777EFE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A13BD8A67015544()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_4A13BD8A67015544_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_EC1D5200B03756B4(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_EC1D5200B03756B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B37D0BDD3F18549D(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_B37D0BDD3F18549D_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_DD3C6BAB599CEFBE(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_DD3C6BAB599CEFBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E1E85F6ECBD80C3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_1E1E85F6ECBD80C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_92193DE475EFDCC9_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_92193DE475EFDCC9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D632BCCC272D40EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_D632BCCC272D40EA_OFFSET))(this);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_6AA67718161E5322(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_6AA67718161E5322_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_6AA67718161E5322_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_6AA67718161E5322_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_A58F1087C784F228(::RPG::Client::OpenWorld::StreamingLightEnum P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_A58F1087C784F228_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_2_A58F1087C784F228_1(::RPG::Client::OpenWorld::StreamingLightEnum P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_A58F1087C784F228_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840_1(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_793FFA9A76FE6840_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_19BC92DE7F9F342F(::UnityEngine::Vector3 P0)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_19BC92DE7F9F342F_OFFSET))(this, P0);
	}

	::UnityEngine::Light* Method_2_19BC92DE7F9F342F_1(::UnityEngine::Vector3 P0)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA_METHOD_2_19BC92DE7F9F342F_1_OFFSET))(this, P0);
	}
};
