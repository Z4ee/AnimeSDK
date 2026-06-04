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

#define CLASS_2_DC742B72F4019999_METHOD_2_02416282B55EC5F3_OFFSET UNITYSDK_OFFSET(0x142FF3C0)
#define CLASS_2_DC742B72F4019999_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x142FDE00)
#define CLASS_2_DC742B72F4019999_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x142FDDF0)
#define CLASS_2_DC742B72F4019999_METHOD_2_146108E7F1E73D17_1_OFFSET UNITYSDK_OFFSET(0x14303220)
#define CLASS_2_DC742B72F4019999_METHOD_2_146108E7F1E73D17_OFFSET UNITYSDK_OFFSET(0x143031A0)
#define CLASS_2_DC742B72F4019999_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x14300ED0)
#define CLASS_2_DC742B72F4019999_METHOD_2_1E1E85F6ECBD80C3_OFFSET UNITYSDK_OFFSET(0x14300F50)
#define CLASS_2_DC742B72F4019999_METHOD_2_23BBE7E4C10CD954_OFFSET UNITYSDK_OFFSET(0x142FDE80)
#define CLASS_2_DC742B72F4019999_METHOD_2_30FEAF7A4F6C1868_1_OFFSET UNITYSDK_OFFSET(0x14302B00)
#define CLASS_2_DC742B72F4019999_METHOD_2_30FEAF7A4F6C1868_OFFSET UNITYSDK_OFFSET(0x14302890)
#define CLASS_2_DC742B72F4019999_METHOD_2_3B2775034B799082_OFFSET UNITYSDK_OFFSET(0x142FFED0)
#define CLASS_2_DC742B72F4019999_METHOD_2_3C927B51D2142A24_1_OFFSET UNITYSDK_OFFSET(0x143030E0)
#define CLASS_2_DC742B72F4019999_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x14303080)
#define CLASS_2_DC742B72F4019999_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0x142FF590)
#define CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x14302EA0)
#define CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x14302F00)
#define CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x14302F60)
#define CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x14303020)
#define CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x14303140)
#define CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14302DE0)
#define CLASS_2_DC742B72F4019999_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET UNITYSDK_OFFSET(0x143026E0)
#define CLASS_2_DC742B72F4019999_METHOD_2_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x14302660)
#define CLASS_2_DC742B72F4019999_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x142FF930)
#define CLASS_2_DC742B72F4019999_METHOD_2_8D85476FE777EFE9_OFFSET UNITYSDK_OFFSET(0x142FDF70)
#define CLASS_2_DC742B72F4019999_METHOD_2_92193DE475EFDCC9_1_OFFSET UNITYSDK_OFFSET(0x14301FA0)
#define CLASS_2_DC742B72F4019999_METHOD_2_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x143023B0)
#define CLASS_2_DC742B72F4019999_METHOD_2_A1A4F756C8177B5D_OFFSET UNITYSDK_OFFSET(0x142FDE10)
#define CLASS_2_DC742B72F4019999_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x142FFE40)
#define CLASS_2_DC742B72F4019999_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x142FFD10)
#define CLASS_2_DC742B72F4019999_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x142FF670)
#define CLASS_2_DC742B72F4019999_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x14302270)
#define CLASS_2_DC742B72F4019999_METHOD_2_B37D0BDD3F18549D_OFFSET UNITYSDK_OFFSET(0x14300D60)
#define CLASS_2_DC742B72F4019999_METHOD_2_C2643B9270E0BC20_1_OFFSET UNITYSDK_OFFSET(0x14302FC0)
#define CLASS_2_DC742B72F4019999_METHOD_2_C2643B9270E0BC20_OFFSET UNITYSDK_OFFSET(0x14302D80)
#define CLASS_2_DC742B72F4019999_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x14302E40)
#define CLASS_2_DC742B72F4019999_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14302610)
#define CLASS_2_DC742B72F4019999_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x14302750)
#define CLASS_2_DC742B72F4019999_METHOD_2_FAF8903FB501C7ED_OFFSET UNITYSDK_OFFSET(0x142FEB10)
#define CLASS_2_DC742B72F4019999__CTOR_OFFSET UNITYSDK_OFFSET(0x14302D70)

inline static constexpr unsigned int Class_2_DC742B72F4019999_TypeDefinitionIndex = 46749;

class Class_2_DC742B72F4019999 : public ::Class_1_E0A05564B7F916C1
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DC742B72F4019999_TypeDefinitionIndex)->GetStaticField(0x9AF0);
	}
	::Il2CppArray<::LocalAmbientVolume*>* Field_2_1; // 0x60
	::RPG::Client::Stage* Field_2_2; // 0x68
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_3; // 0x70
	::Il2CppArray<::UnityEngine::ReflectionProbe*>* Field_2_4; // 0x78
	::UnityEngine::GameObject* Field_2_5; // 0x80
	::Il2CppArray<::System::Single>* Field_2_6; // 0x88
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x90
	::Il2CppArray<::System::Boolean>* Field_2_8; // 0x98
	::UnityEngine::GameObject* Field_2_9; // 0xA0
	::Il2CppArray<::System::Single>* Field_2_10; // 0xA8
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_11; // 0xB0
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_12; // 0xB8
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_13; // 0xC0
	::Il2CppArray<::LocalFogSphereInstance*>* Field_2_14; // 0xC8
	::Il2CppArray<::VLB::VolumetricLightBeam*>* Field_2_15; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_16; // 0xD8
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_17; // 0xE0
	::RPG::Client::IAssetOperation* Field_2_18; // 0xE8
	::Il2CppArray<::RPG::Client::BillboardController*>* Field_2_19; // 0xF0
	::Il2CppArray<::UnityEngine::Light*>* Field_2_20; // 0xF8
	::Il2CppArray<::CRPLightQualityGroupPlugin*>* Field_2_21; // 0x100
	::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* Field_2_22; // 0x108
	::RPG::Client::OpenWorld::StreamingLightEnum Field_2_23; // 0x110
	::System::Single Field_2_24; // 0x114
	::System::Boolean Field_2_25; // 0x118
	::System::Single Field_2_26; // 0x11C
	::System::Single Field_2_27; // 0x120
	::RPG::CustomRP::CustomLightQualityFilter Field_2_28; // 0x124
	::System::Single Field_2_29; // 0x128
	::System::Single Field_2_30; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::RPG::Client::Stage* Method_2_A1A4F756C8177B5D()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_A1A4F756C8177B5D_OFFSET))(this);
	}

	::RPG::Client::Stage* Method_2_23BBE7E4C10CD954()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_23BBE7E4C10CD954_OFFSET))(this);
	}

	::System::Void Method_2_8D85476FE777EFE9(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_8D85476FE777EFE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A13BD8A67015544()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_4A13BD8A67015544_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_3B2775034B799082(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_3B2775034B799082_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B37D0BDD3F18549D(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_B37D0BDD3F18549D_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_FAF8903FB501C7ED(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_FAF8903FB501C7ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EAB2C5E0D76A6B7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5EAB2C5E0D76A6B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E1E85F6ECBD80C3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_1E1E85F6ECBD80C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_92193DE475EFDCC9_OFFSET))(this, a1);
	}

	::System::Void Method_2_92193DE475EFDCC9_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_92193DE475EFDCC9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_02416282B55EC5F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_02416282B55EC5F3_OFFSET))(this);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_30FEAF7A4F6C1868(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_30FEAF7A4F6C1868_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_30FEAF7A4F6C1868_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_30FEAF7A4F6C1868_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_C2643B9270E0BC20(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_C2643B9270E0BC20_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_2_C2643B9270E0BC20_1(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_C2643B9270E0BC20_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_3C927B51D2142A24_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_146108E7F1E73D17(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_146108E7F1E73D17_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_146108E7F1E73D17_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999_METHOD_2_146108E7F1E73D17_1_OFFSET))(this, a1);
	}
};
