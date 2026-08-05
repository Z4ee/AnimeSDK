#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"

class NPCEmotionClipAsset;
class NPCEmotionClipConfig;
class NPCEmotionConfigSO;
class NPCEmotionEffectConfig;
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace NPCCrowd::Avatar { class NPCEmotionControl; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define CLASS_3_DEC22E9E3CAB5F01_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x156038D0)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_09E06B1EB0DC142A_1_OFFSET UNITYSDK_OFFSET(0x15604020)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_09E06B1EB0DC142A_OFFSET UNITYSDK_OFFSET(0x15603C50)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_10FE87DEFDB2DDCE_OFFSET UNITYSDK_OFFSET(0x156039B0)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x15604010)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15603790)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_398C65D051C8A928_OFFSET UNITYSDK_OFFSET(0x15603BA0)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x15603E10)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15603D80)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_89D2B37665EFDC75_OFFSET UNITYSDK_OFFSET(0x156039C0)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_8FD02F1C13976F11_OFFSET UNITYSDK_OFFSET(0x15603A70)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_954494FA03238535_OFFSET UNITYSDK_OFFSET(0x15603A60)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15604210)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_A7C97287EA9BEEE5_OFFSET UNITYSDK_OFFSET(0x15604150)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15603E90)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_C80DB2BF2906389B_OFFSET UNITYSDK_OFFSET(0x15603B20)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15603F90)
#define CLASS_3_DEC22E9E3CAB5F01_METHOD_3_E0ED4DD782362FBC_OFFSET UNITYSDK_OFFSET(0x15603F30)
#define CLASS_3_DEC22E9E3CAB5F01_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15603740)
#define CLASS_3_DEC22E9E3CAB5F01__CCTOR_OFFSET UNITYSDK_OFFSET(0x15603920)
#define CLASS_3_DEC22E9E3CAB5F01__CTOR_OFFSET UNITYSDK_OFFSET(0x156039A0)

inline static constexpr unsigned int Class_3_DEC22E9E3CAB5F01_TypeDefinitionIndex = 70287;

class Class_3_DEC22E9E3CAB5F01 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_14 = 0x98; // 0x0
	::NPCEmotionEffectConfig* Field_3_4; // 0x48
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AvatarMask*>* Field_3_9; // 0x50
	::NPCCrowd::Avatar::NPCEmotionControl* Field_3_0; // 0x58
	::System::String* Field_3_11; // 0x60
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* Field_3_8; // 0x68
	::NPCCrowd::NPCSoftAssetPath_1<::NPCEmotionConfigSO*>* Field_3_6; // 0x70
	::NPCEmotionClipConfig* Field_3_5; // 0x78
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* Field_3_15; // 0x80
	::NPCEmotionClipAsset* Field_3_10; // 0x88
	::Foundation::AssetPath Field_3_7; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_GETCLASSID_OFFSET))(this);
	}

	::NPCCrowd::Avatar::NPCEmotionControl* Method_3_10FE87DEFDB2DDCE()
	{
		return ((::NPCCrowd::Avatar::NPCEmotionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_10FE87DEFDB2DDCE_OFFSET))(this);
	}

	::NPCCrowd::NPCSoftAssetPath_1<::NPCEmotionConfigSO*>* Method_3_89D2B37665EFDC75()
	{
		return ((::NPCCrowd::NPCSoftAssetPath_1<::NPCEmotionConfigSO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_89D2B37665EFDC75_OFFSET))(this);
	}

	::System::Void Method_3_954494FA03238535(::NPCCrowd::Avatar::NPCEmotionControl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCEmotionControl*))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_954494FA03238535_OFFSET))(this, a1);
	}

	::NPCEmotionEffectConfig* Method_3_8FD02F1C13976F11()
	{
		return ((::NPCEmotionEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_8FD02F1C13976F11_OFFSET))(this);
	}

	::NPCEmotionClipAsset* Method_3_C80DB2BF2906389B()
	{
		return ((::NPCEmotionClipAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_C80DB2BF2906389B_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* Method_3_09E06B1EB0DC142A()
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_09E06B1EB0DC142A_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_3_E0ED4DD782362FBC(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_E0ED4DD782362FBC_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::Class_3_DEC22E9E3CAB5F01* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DEC22E9E3CAB5F01*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* Method_3_09E06B1EB0DC142A_1()
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_09E06B1EB0DC142A_1_OFFSET))(this);
	}

	::UnityEngine::AvatarMask* Method_3_A7C97287EA9BEEE5()
	{
		return ((::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_A7C97287EA9BEEE5_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::NPCEmotionClipConfig* Method_3_398C65D051C8A928()
	{
		return ((::NPCEmotionClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC22E9E3CAB5F01_METHOD_3_398C65D051C8A928_OFFSET))(this);
	}
};
