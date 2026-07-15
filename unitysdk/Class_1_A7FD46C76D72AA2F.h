#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_BlinkParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ChromaticAberrationParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ColorGradingParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_GaussianBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_LensGlitch2Parameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_PPPatternParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_RadialBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_VignetteParameter.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6B6A4C789452DEC6;
class Class_1_D27BF54F25500E5F;
class Class_2_1FB66008306098B0;
class Class_2_74361E0442AB1DB0;
class Class_2_F9868A24C60208C0;
namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGGaussianBlur; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace RPG::CustomRP { class RPGRadialBlur; }
namespace RPG::CustomRP { class RPGVignette; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1696AF70)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x1696AE70)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_0C777326728A36C7_OFFSET UNITYSDK_OFFSET(0x1696B940)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_125D1D788056F439_OFFSET UNITYSDK_OFFSET(0x16970890)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_14D2AA1A43D6F8FB_OFFSET UNITYSDK_OFFSET(0x1696E1D0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_15D44EBC368C10BE_OFFSET UNITYSDK_OFFSET(0x1696D930)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_16B2E34B9F95EA16_OFFSET UNITYSDK_OFFSET(0x1696E5B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_1A0A56C2B619FF51_OFFSET UNITYSDK_OFFSET(0x169721C0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x169703C0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_1C38695375052765_OFFSET UNITYSDK_OFFSET(0x16975320)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1696DE70)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_1D61B10247A1F114_OFFSET UNITYSDK_OFFSET(0x1696A9A0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_21886A8411E71157_1_OFFSET UNITYSDK_OFFSET(0x169713B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1696CB90)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_248B4C1FDB4A64C9_OFFSET UNITYSDK_OFFSET(0x16970F70)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_24EF0ABC5DDA50E1_OFFSET UNITYSDK_OFFSET(0x169738B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_28A4CAF0E0F00E26_OFFSET UNITYSDK_OFFSET(0x1696B8B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_2DE98C8482BC8A62_OFFSET UNITYSDK_OFFSET(0x16970220)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_2FE8818B0EBEE5E2_OFFSET UNITYSDK_OFFSET(0x169715B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_303D3AEC876F84B2_OFFSET UNITYSDK_OFFSET(0x1696DF50)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_333D814AA137C1D3_OFFSET UNITYSDK_OFFSET(0x16972CB0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_336E6EC0A7BD5248_OFFSET UNITYSDK_OFFSET(0x1696E3A0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_415CDC0125472EBC_OFFSET UNITYSDK_OFFSET(0x1696FA40)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_4314FE42BBEBFFB4_OFFSET UNITYSDK_OFFSET(0x1696DED0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x169701B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_4F548348F29E93D9_OFFSET UNITYSDK_OFFSET(0x1696F620)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_50B46F68CE4982FA_OFFSET UNITYSDK_OFFSET(0x1696DFC0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_50B7E6E92894BE2B_OFFSET UNITYSDK_OFFSET(0x1696D6B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1696AB90)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_54CB10256069F15D_OFFSET UNITYSDK_OFFSET(0x16970420)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_5545B1147CDCF515_OFFSET UNITYSDK_OFFSET(0x16972580)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_554C34E265254C5D_OFFSET UNITYSDK_OFFSET(0x1696FD60)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x16971270)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_6DA9299447BB1B40_OFFSET UNITYSDK_OFFSET(0x16973540)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_6E204D82E0C968BF_OFFSET UNITYSDK_OFFSET(0x1696E990)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0x1696F110)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_85B3161A8A652439_OFFSET UNITYSDK_OFFSET(0x1696E120)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_96E4C6963BABD9F4_OFFSET UNITYSDK_OFFSET(0x16970700)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0x1696E330)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_B8861AEBFFFB25CA_OFFSET UNITYSDK_OFFSET(0x1696FF20)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_C11E3340663BA3CE_OFFSET UNITYSDK_OFFSET(0x1696F000)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1696ADF0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_DFBA82AE79076F25_OFFSET UNITYSDK_OFFSET(0x1696D1E0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_E41D77109E4F38E6_OFFSET UNITYSDK_OFFSET(0x16976210)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_E59B0636DF9608FF_OFFSET UNITYSDK_OFFSET(0x1696F3B0)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_EC86032BD7B258D7_OFFSET UNITYSDK_OFFSET(0x1696BC20)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_F7A9367BB79090D6_OFFSET UNITYSDK_OFFSET(0x1696EB70)
#define CLASS_1_A7FD46C76D72AA2F_METHOD_1_FC643861C42BA698_OFFSET UNITYSDK_OFFSET(0x1696BAB0)
#define CLASS_1_A7FD46C76D72AA2F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16976910)
#define CLASS_1_A7FD46C76D72AA2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1696A970)

inline static constexpr unsigned int Class_1_A7FD46C76D72AA2F_TypeDefinitionIndex = 67018;

class Class_1_A7FD46C76D72AA2F : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7FD46C76D72AA2F_TypeDefinitionIndex)->GetStaticField(0x672C0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7FD46C76D72AA2F_TypeDefinitionIndex)->GetStaticField(0x672C8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7FD46C76D72AA2F_TypeDefinitionIndex)->GetStaticField(0x672D0);
	}
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_3; // 0x10
	::Class_2_F9868A24C60208C0* Field_1_4; // 0x18
	::RPG::CustomRP::RPGChromaticAberration* Field_1_5; // 0x20
	::RPG::CustomRP::RPGGaussianBlur* Field_1_6; // 0x28
	::RPG::CustomRP::RPGAdditionalColorGrading* Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_8; // 0x38
	::Class_1_D27BF54F25500E5F* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_10; // 0x48
	::RPG::CustomRP::RPGBlink* Field_1_11; // 0x50
	::RPG::CustomRP::RPGPPPattern* Field_1_12; // 0x58
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_13; // 0x60
	::Class_1_D27BF54F25500E5F* Field_1_14; // 0x68
	::Class_2_74361E0442AB1DB0* Field_1_15; // 0x70
	::RPG::CustomRP::RPGRadialBlur* Field_1_16; // 0x78
	::RPG::CustomRP::RPGLensGlitch2* Field_1_17; // 0x80
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_18; // 0x88
	::RPG::CustomRP::RPGVignette* Field_1_19; // 0x90
	::RPG::CustomRP::PPFilterStack* Field_1_20; // 0x98
	::Class_2_1FB66008306098B0* Field_1_21; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>* Field_1_22; // 0xA8
	::RPG::CustomRP::RPGColorGrading* Field_1_23; // 0xB0
	::System::Single Field_1_24; // 0xB8
	::System::Boolean Field_1_25; // 0xBC
	::System::Boolean Field_1_26; // 0xBD
	::System::Boolean Field_1_27; // 0xBE
	::System::Single Field_1_28; // 0xC0
	::UnityEngine::Rendering::VolumeProxy_Priority Field_1_29; // 0xC4
	::System::Single Field_1_30; // 0xC8
	::System::Single Field_1_31; // 0xCC
	::System::Single Field_1_32; // 0xD0

	::System::Void _ctor(::UnityEngine::Rendering::VolumeProxy_Priority a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_1D61B10247A1F114(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_1D61B10247A1F114_OFFSET))(a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_1_EC86032BD7B258D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_EC86032BD7B258D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_4314FE42BBEBFFB4(::Class_1_6B6A4C789452DEC6* a1, ::Class_1_6B6A4C789452DEC6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_4314FE42BBEBFFB4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_303D3AEC876F84B2(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_303D3AEC876F84B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85B3161A8A652439(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_85B3161A8A652439_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16B2E34B9F95EA16(::Class_1_6B6A4C789452DEC6* a1, ::Class_1_6B6A4C789452DEC6* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_16B2E34B9F95EA16_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::PPFilterStack* Method_1_6E204D82E0C968BF(::System::String* a1)
	{
		return ((::RPG::CustomRP::PPFilterStack*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_6E204D82E0C968BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7A9367BB79090D6(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_F7A9367BB79090D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_E59B0636DF9608FF(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_E59B0636DF9608FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_15D44EBC368C10BE(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_15D44EBC368C10BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFBA82AE79076F25(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_DFBA82AE79076F25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C11E3340663BA3CE(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_C11E3340663BA3CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_415CDC0125472EBC(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_415CDC0125472EBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F548348F29E93D9(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_4F548348F29E93D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_554C34E265254C5D(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_554C34E265254C5D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B8861AEBFFFB25CA(::RPG::GameCore::RPGColorGradingCurveEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_B8861AEBFFFB25CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2DE98C8482BC8A62(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_2DE98C8482BC8A62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_54CB10256069F15D(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_54CB10256069F15D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_50B7E6E92894BE2B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_50B7E6E92894BE2B_OFFSET))(a1);
	}

	::System::Void Method_1_841D90BDB3E94FF6(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_28A4CAF0E0F00E26(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_28A4CAF0E0F00E26_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_50B46F68CE4982FA(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* a1, ::Class_1_6B6A4C789452DEC6* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_50B46F68CE4982FA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_14D2AA1A43D6F8FB(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* a1, ::RPG::GameCore::PPEffectFilterType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_14D2AA1A43D6F8FB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_336E6EC0A7BD5248(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_336E6EC0A7BD5248_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC643861C42BA698(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*&))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_FC643861C42BA698_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C777326728A36C7(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_0C777326728A36C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E4C6963BABD9F4(::Class_2_F9868A24C60208C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F9868A24C60208C0*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_96E4C6963BABD9F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_2FE8818B0EBEE5E2(::RPG::CustomRP::PPFilterStack_ColorGradingParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ColorGradingParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_2FE8818B0EBEE5E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_333D814AA137C1D3(::RPG::CustomRP::PPFilterStack_RadialBlurParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_RadialBlurParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_333D814AA137C1D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DA9299447BB1B40(::RPG::CustomRP::PPFilterStack_VignetteParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_VignetteParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_6DA9299447BB1B40_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A0A56C2B619FF51(::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_1A0A56C2B619FF51_OFFSET))(this, a1);
	}

	::System::Void Method_1_5545B1147CDCF515(::RPG::CustomRP::PPFilterStack_GaussianBlurParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_GaussianBlurParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_5545B1147CDCF515_OFFSET))(this, a1);
	}

	::System::Void Method_1_24EF0ABC5DDA50E1(::RPG::CustomRP::PPFilterStack_PPPatternParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_PPPatternParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_24EF0ABC5DDA50E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C38695375052765(::RPG::CustomRP::PPFilterStack_BlinkParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_BlinkParameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_1C38695375052765_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41D77109E4F38E6(::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_E41D77109E4F38E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_125D1D788056F439(::Class_2_74361E0442AB1DB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_74361E0442AB1DB0*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_125D1D788056F439_OFFSET))(this, a1);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_248B4C1FDB4A64C9(::Class_2_1FB66008306098B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1FB66008306098B0*))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_248B4C1FDB4A64C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_21886A8411E71157_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7FD46C76D72AA2F_METHOD_1_21886A8411E71157_1_OFFSET))(this);
	}
};
