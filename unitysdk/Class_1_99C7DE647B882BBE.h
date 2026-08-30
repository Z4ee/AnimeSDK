#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashBlurChannel.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashFOVChannel.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1C2050595DE2732C;
class Class_1_2299A0FE2E8FD63C;
class Class_1_48FFE902FEF4A0BA;
class Class_1_7013DD6F890E582A;
class Class_1_99C7DE647B882BBE_Class_1_100A0010794ABEB6;
class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class PPEffectManager; }
namespace RPG::Client::RoadRash { class MonoRoadRashCameraSettings; }
namespace RPG::Client::RoadRash { class MonoRoadRashCameraShake; }
namespace RPG::Client::RoadRash { class MonoRoadRashCarCamera; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_99C7DE647B882BBE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18FC9AF0)
#define CLASS_1_99C7DE647B882BBE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18FC8750)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x18FCBB90)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_05AA5EFE32FDBB65_OFFSET UNITYSDK_OFFSET(0x18FCD4B0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_06E3B22492D57823_OFFSET UNITYSDK_OFFSET(0x18FCD3C0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_09DB5A40771768FA_OFFSET UNITYSDK_OFFSET(0x18FCC610)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18FCA070)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x18FCA160)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_307ACF1AB0D1EF19_OFFSET UNITYSDK_OFFSET(0x18FC92E0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x18FCA520)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x18FC9BF0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18FCC260)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18FC9460)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_4815DC3FA2B6C02F_OFFSET UNITYSDK_OFFSET(0x18FCD850)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x18FCC570)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_5DD49AC960A09E6D_OFFSET UNITYSDK_OFFSET(0x18FC8F40)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_6A2505B73B0E07F5_OFFSET UNITYSDK_OFFSET(0x18FCD610)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_6FA9E572BEE5891C_OFFSET UNITYSDK_OFFSET(0x18FCD750)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_74AF19597833BD96_OFFSET UNITYSDK_OFFSET(0x18FCADB0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_76170530050E20FE_OFFSET UNITYSDK_OFFSET(0x18FCCD00)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x18FCA710)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_7F4B2B0A21AB4FBE_OFFSET UNITYSDK_OFFSET(0x18FCD590)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0x18FCC510)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_9581E98436A95A0B_OFFSET UNITYSDK_OFFSET(0x18FCCA50)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18FCA460)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_9E96CC5027230BDA_OFFSET UNITYSDK_OFFSET(0x18FCBE50)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_AB508AA7C4C9D894_OFFSET UNITYSDK_OFFSET(0x18FCC420)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18FC98E0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_C2F28C8D08C3AAF8_OFFSET UNITYSDK_OFFSET(0x18FC9980)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_C7D695CDF92B33BC_OFFSET UNITYSDK_OFFSET(0x18FC9A30)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_D1C98CDCD327EC42_OFFSET UNITYSDK_OFFSET(0x18FCC9E0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_DC46E0E7D688C980_OFFSET UNITYSDK_OFFSET(0x18FCC310)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_E4944B4E30A545FB_OFFSET UNITYSDK_OFFSET(0x18FCB550)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_E81C3400B8F00FAE_OFFSET UNITYSDK_OFFSET(0x18FCD2A0)
#define CLASS_1_99C7DE647B882BBE_METHOD_1_F15FBB16A2F84F80_OFFSET UNITYSDK_OFFSET(0x18FC8E20)
#define CLASS_1_99C7DE647B882BBE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18FC94C0)
#define CLASS_1_99C7DE647B882BBE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC8740)

inline static constexpr unsigned int Class_1_99C7DE647B882BBE_TypeDefinitionIndex = 75515;

class Class_1_99C7DE647B882BBE : public ::System::Object
{
public:
	// static const ::System::Single ODILIMALDCK; // 0x0
	// static const ::System::Single EBKFELIDMKC; // 0x0
	// static const ::System::Single MHNDBNGNNFJ; // 0x0
	// static const ::System::Single NJEMFCEMKPB; // 0x0
	// static const ::System::String* HGLPFLMIBOH; // 0x0
	// static const ::System::Int32 CEMDJBKAOKE = 0xFFFFFFFF; // 0x0
	::Class_2_D55679E3C796A7AF* EEFMDEHLLFI; // 0x10
	::RPG::Client::PPEffectManager* DAGIKKMLJKM; // 0x18
	::Cinemachine::CinemachineVirtualCamera* ENKJPDLKBPC; // 0x20
	::RPG::GameCore::TimeScaleStack* EOIBKANNHBI; // 0x28
	::RPG::Client::RoadRash::MonoRoadRashCarCamera* PIFPIAAKFEL; // 0x30
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x38
	::Class_1_99C7DE647B882BBE_Class_1_100A0010794ABEB6* BNGMJKLIMPC; // 0x40
	::System::Int32 IEGOBHIAHDF; // 0x48
	::System::Boolean JEBNLIMDJJA; // 0x4C
	::System::Boolean EGNDBPNIKCG; // 0x4D
	::System::Boolean EFCHEFHJMBL; // 0x4E
	::System::Single LDNKAOLBCLH; // 0x50
	::System::Single FDLDNNKJPKC; // 0x54

	::System::Void _ctor(::Class_2_D55679E3C796A7AF* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D55679E3C796A7AF*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_367A5F1ECD1BC1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_367A5F1ECD1BC1A2_OFFSET))(this);
	}

	::System::Boolean Method_1_307ACF1AB0D1EF19(::Class_1_48FFE902FEF4A0BA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_307ACF1AB0D1EF19_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Cinemachine::CinemachineFreeLook* Method_1_C7D695CDF92B33BC(::Class_1_48FFE902FEF4A0BA* a1)
	{
		return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_C7D695CDF92B33BC_OFFSET))(this, a1);
	}

	::RPG::Client::RoadRash::MonoRoadRashCameraShake* Method_1_9E96CC5027230BDA(::Class_1_48FFE902FEF4A0BA* a1)
	{
		return ((::RPG::Client::RoadRash::MonoRoadRashCameraShake*(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_9E96CC5027230BDA_OFFSET))(this, a1);
	}

	::Class_1_1C2050595DE2732C* Method_1_C2F28C8D08C3AAF8(::Class_1_48FFE902FEF4A0BA* a1)
	{
		return ((::Class_1_1C2050595DE2732C*(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_C2F28C8D08C3AAF8_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_DC46E0E7D688C980(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_DC46E0E7D688C980_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_AB508AA7C4C9D894(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_AB508AA7C4C9D894_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_E4944B4E30A545FB(::Class_1_48FFE902FEF4A0BA* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_E4944B4E30A545FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05679872695EE5DE(::Class_1_48FFE902FEF4A0BA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_05679872695EE5DE_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_F15FBB16A2F84F80(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_F15FBB16A2F84F80_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_867F85CA133E06EB_OFFSET))(a1);
	}

	::System::Void Method_1_74AF19597833BD96(::Class_1_48FFE902FEF4A0BA* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48FFE902FEF4A0BA*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_74AF19597833BD96_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_09DB5A40771768FA(::Class_1_1C2050595DE2732C* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::Class_1_1C2050595DE2732C*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_09DB5A40771768FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D1C98CDCD327EC42(::Class_1_7013DD6F890E582A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_7013DD6F890E582A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_D1C98CDCD327EC42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9581E98436A95A0B(::Class_1_1C2050595DE2732C* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a2, ::System::Int32 a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6, ::UnityEngine::AnimationCurve* a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::Class_1_1C2050595DE2732C*, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel, ::System::Int32, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_9581E98436A95A0B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Single Method_1_76170530050E20FE(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_76170530050E20FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E81C3400B8F00FAE(::Class_1_1C2050595DE2732C* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_1_1C2050595DE2732C*, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_E81C3400B8F00FAE_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>* Method_1_5DD49AC960A09E6D()
	{
		return ((::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_5DD49AC960A09E6D_OFFSET))();
	}

	static ::Struct_2_F780BA94AF5E7E37_2 Method_1_06E3B22492D57823(::RPG::Client::RoadRash::MonoRoadRashCameraSettings* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Struct_2_F780BA94AF5E7E37_2(*)(::RPG::Client::RoadRash::MonoRoadRashCameraSettings*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_06E3B22492D57823_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_05AA5EFE32FDBB65(::Class_1_1C2050595DE2732C* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel a2, ::Struct_2_F780BA94AF5E7E37_2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_1_1C2050595DE2732C*, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel, ::Struct_2_F780BA94AF5E7E37_2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_05AA5EFE32FDBB65_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_7F4B2B0A21AB4FBE(::Class_1_1C2050595DE2732C* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel a2)
	{
		return ((::System::Void(*)(::Class_1_1C2050595DE2732C*, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_7F4B2B0A21AB4FBE_OFFSET))(a1, a2);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	static ::System::Void Method_1_6FA9E572BEE5891C(::RPG::Client::PPEffectManager* a1, ::RPG::Client::RoadRash::MonoRoadRashCameraSettings* a2)
	{
		return ((::System::Void(*)(::RPG::Client::PPEffectManager*, ::RPG::Client::RoadRash::MonoRoadRashCameraSettings*))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_6FA9E572BEE5891C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4815DC3FA2B6C02F(::Struct_2_F780BA94AF5E7E37_2 a1, ::Struct_2_F780BA94AF5E7E37_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F780BA94AF5E7E37_2, ::Struct_2_F780BA94AF5E7E37_2))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_4815DC3FA2B6C02F_OFFSET))(a1, a2);
	}

	::RPG::Client::PPEffectManager* Method_1_6A2505B73B0E07F5()
	{
		return ((::RPG::Client::PPEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99C7DE647B882BBE_METHOD_1_6A2505B73B0E07F5_OFFSET))(this);
	}
};
