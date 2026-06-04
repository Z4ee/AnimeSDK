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

#define CLASS_1_B265AEDCC887C2E5_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xD7F7310)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_0C777326728A36C7_OFFSET UNITYSDK_OFFSET(0xD7F8000)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_12BB9F3B2DD41E45_OFFSET UNITYSDK_OFFSET(0xD7FA4D0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xD7FBA80)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD7F9C00)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_1D61B10247A1F114_OFFSET UNITYSDK_OFFSET(0xD7F6D10)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_27755C595ED944F1_OFFSET UNITYSDK_OFFSET(0xD7FCFD0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_28A4CAF0E0F00E26_OFFSET UNITYSDK_OFFSET(0xD7F7F70)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_2DE98C8482BC8A62_OFFSET UNITYSDK_OFFSET(0xD7FB8D0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_2F320750DD524BFE_OFFSET UNITYSDK_OFFSET(0xD7F8170)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_303D3AEC876F84B2_OFFSET UNITYSDK_OFFSET(0xD7F9CE0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_345670C395EAE93C_OFFSET UNITYSDK_OFFSET(0xD7FBEF0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_40196EC26592B5A1_OFFSET UNITYSDK_OFFSET(0xD7F9ED0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_4314FE42BBEBFFB4_OFFSET UNITYSDK_OFFSET(0xD7F9C60)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD7FB860)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_4C0B39E53077D5BC_OFFSET UNITYSDK_OFFSET(0xD7FDD60)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_4C7BEB2FE166654C_OFFSET UNITYSDK_OFFSET(0xD7FA000)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_4F3D99D0E9C81651_OFFSET UNITYSDK_OFFSET(0xD7FA190)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_4F548348F29E93D9_OFFSET UNITYSDK_OFFSET(0xD7FAE30)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_50B7E6E92894BE2B_OFFSET UNITYSDK_OFFSET(0xD7F95F0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xD7F6F00)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_5380252EB1839FE5_OFFSET UNITYSDK_OFFSET(0xD7FFA90)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xD7FC470)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_6B45226A9597D8E5_OFFSET UNITYSDK_OFFSET(0xD7FB640)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_6E204D82E0C968BF_OFFSET UNITYSDK_OFFSET(0xD7FA2F0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_71E2450F7D92B7D8_OFFSET UNITYSDK_OFFSET(0xD7FAC30)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_85B3161A8A652439_OFFSET UNITYSDK_OFFSET(0xD7F9E20)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_8CA88D55ECEFAD59_1_OFFSET UNITYSDK_OFFSET(0xD7FC5C0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xD7F8E00)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_8FE3D1A43DEE4634_OFFSET UNITYSDK_OFFSET(0xD7FB250)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_96E4C6963BABD9F4_OFFSET UNITYSDK_OFFSET(0xD7FBD50)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0xD7F9F90)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_A691D4960F57A442_OFFSET UNITYSDK_OFFSET(0xD7FD400)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_AA51453DDECD1AFE_OFFSET UNITYSDK_OFFSET(0xD7FE140)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_B2BE544B6D1CBC28_OFFSET UNITYSDK_OFFSET(0xD7FD880)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_B5F8B1C35FDDB07A_OFFSET UNITYSDK_OFFSET(0xD7FB470)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_C8530D815433DB5F_OFFSET UNITYSDK_OFFSET(0xD7F92C0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7F7190)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_CF6D55E8C83E9BD1_OFFSET UNITYSDK_OFFSET(0xD7FC270)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_DB167C9FE36D483A_OFFSET UNITYSDK_OFFSET(0xD7F9D50)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_E2BE997B84010038_OFFSET UNITYSDK_OFFSET(0xD7FF180)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0xD7FAAC0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_E6E510D0F43BB93F_OFFSET UNITYSDK_OFFSET(0xD7FAA10)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_E7E4FB07C910158C_OFFSET UNITYSDK_OFFSET(0xD7FBAE0)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0xD7F8260)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_EFABB3D6AF5F5661_OFFSET UNITYSDK_OFFSET(0xD7FC760)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_F2A59202FFCDB57F_OFFSET UNITYSDK_OFFSET(0xD7F9870)
#define CLASS_1_B265AEDCC887C2E5_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0xD7F7210)
#define CLASS_1_B265AEDCC887C2E5__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7FFF30)
#define CLASS_1_B265AEDCC887C2E5__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F6CE0)

inline static constexpr unsigned int Class_1_B265AEDCC887C2E5_TypeDefinitionIndex = 65601;

class Class_1_B265AEDCC887C2E5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B265AEDCC887C2E5_TypeDefinitionIndex)->GetStaticField(0x68DF0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B265AEDCC887C2E5_TypeDefinitionIndex)->GetStaticField(0x68DF8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B265AEDCC887C2E5_TypeDefinitionIndex)->GetStaticField(0x68E00);
	}
	::Class_2_1FB66008306098B0* Field_1_3; // 0x10
	::Class_1_D27BF54F25500E5F* Field_1_4; // 0x18
	::RPG::CustomRP::RPGVignette* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_6; // 0x28
	::RPG::CustomRP::RPGGaussianBlur* Field_1_7; // 0x30
	::RPG::CustomRP::RPGAdditionalColorGrading* Field_1_8; // 0x38
	::RPG::CustomRP::RPGPPPattern* Field_1_9; // 0x40
	::Class_2_F9868A24C60208C0* Field_1_10; // 0x48
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_11; // 0x50
	::Class_2_74361E0442AB1DB0* Field_1_12; // 0x58
	::RPG::CustomRP::RPGBlink* Field_1_13; // 0x60
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_14; // 0x68
	::RPG::CustomRP::RPGLensGlitch2* Field_1_15; // 0x70
	::RPG::CustomRP::RPGRadialBlur* Field_1_16; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>* Field_1_17; // 0x80
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_18; // 0x88
	::Class_1_D27BF54F25500E5F* Field_1_19; // 0x90
	::RPG::CustomRP::PPFilterStack* Field_1_20; // 0x98
	::RPG::CustomRP::RPGChromaticAberration* Field_1_21; // 0xA0
	::RPG::CustomRP::RPGColorGrading* Field_1_22; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* Field_1_23; // 0xB0
	::System::Single Field_1_24; // 0xB8
	::UnityEngine::Rendering::VolumeProxy_Priority Field_1_25; // 0xBC
	::System::Single Field_1_26; // 0xC0
	::System::Single Field_1_27; // 0xC4
	::System::Single Field_1_28; // 0xC8
	::System::Single Field_1_29; // 0xCC
	::System::Boolean Field_1_30; // 0xD0
	::System::Boolean Field_1_31; // 0xD1
	::System::Boolean Field_1_32; // 0xD2

	::System::Void _ctor(::UnityEngine::Rendering::VolumeProxy_Priority a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_1D61B10247A1F114(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_1D61B10247A1F114_OFFSET))(a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_1_EB4352D10DA7234E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_EB4352D10DA7234E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_4314FE42BBEBFFB4(::Class_1_6B6A4C789452DEC6* a1, ::Class_1_6B6A4C789452DEC6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_4314FE42BBEBFFB4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_303D3AEC876F84B2(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_303D3AEC876F84B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85B3161A8A652439(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_85B3161A8A652439_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4F3D99D0E9C81651(::Class_1_6B6A4C789452DEC6* a1, ::Class_1_6B6A4C789452DEC6* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_4F3D99D0E9C81651_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::PPFilterStack* Method_1_6E204D82E0C968BF(::System::String* a1)
	{
		return ((::RPG::CustomRP::PPFilterStack*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_6E204D82E0C968BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_12BB9F3B2DD41E45(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_12BB9F3B2DD41E45_OFFSET))(this, a1);
	}

	::System::Void Method_1_71E2450F7D92B7D8(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_71E2450F7D92B7D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2A59202FFCDB57F(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_F2A59202FFCDB57F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8530D815433DB5F(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_C8530D815433DB5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6E510D0F43BB93F(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_E6E510D0F43BB93F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FE3D1A43DEE4634(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_8FE3D1A43DEE4634_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F548348F29E93D9(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_4F548348F29E93D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5F8B1C35FDDB07A(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_B5F8B1C35FDDB07A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6B45226A9597D8E5(::RPG::GameCore::RPGColorGradingCurveEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_6B45226A9597D8E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2DE98C8482BC8A62(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_2DE98C8482BC8A62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7E4FB07C910158C(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_E7E4FB07C910158C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_50B7E6E92894BE2B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_50B7E6E92894BE2B_OFFSET))(a1);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
	}

	::System::Void Method_1_28A4CAF0E0F00E26(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_28A4CAF0E0F00E26_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DB167C9FE36D483A(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* a1, ::Class_1_6B6A4C789452DEC6* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_DB167C9FE36D483A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_40196EC26592B5A1(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* a1, ::RPG::GameCore::PPEffectFilterType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_40196EC26592B5A1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4C7BEB2FE166654C(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_4C7BEB2FE166654C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F320750DD524BFE(::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B6A4C789452DEC6*>*&))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_2F320750DD524BFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C777326728A36C7(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_0C777326728A36C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E4C6963BABD9F4(::Class_2_F9868A24C60208C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F9868A24C60208C0*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_96E4C6963BABD9F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_EFABB3D6AF5F5661(::RPG::CustomRP::PPFilterStack_ColorGradingParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ColorGradingParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_EFABB3D6AF5F5661_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2BE544B6D1CBC28(::RPG::CustomRP::PPFilterStack_RadialBlurParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_RadialBlurParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_B2BE544B6D1CBC28_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C0B39E53077D5BC(::RPG::CustomRP::PPFilterStack_VignetteParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_VignetteParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_4C0B39E53077D5BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_27755C595ED944F1(::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_27755C595ED944F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A691D4960F57A442(::RPG::CustomRP::PPFilterStack_GaussianBlurParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_GaussianBlurParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_A691D4960F57A442_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA51453DDECD1AFE(::RPG::CustomRP::PPFilterStack_PPPatternParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_PPPatternParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_AA51453DDECD1AFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2BE997B84010038(::RPG::CustomRP::PPFilterStack_BlinkParameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_BlinkParameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_E2BE997B84010038_OFFSET))(this, a1);
	}

	::System::Void Method_1_5380252EB1839FE5(::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_5380252EB1839FE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_345670C395EAE93C(::Class_2_74361E0442AB1DB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_74361E0442AB1DB0*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_345670C395EAE93C_OFFSET))(this, a1);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_CF6D55E8C83E9BD1(::Class_2_1FB66008306098B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1FB66008306098B0*))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_CF6D55E8C83E9BD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B265AEDCC887C2E5_METHOD_1_8CA88D55ECEFAD59_1_OFFSET))(this);
	}
};
