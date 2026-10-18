#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24563DACE77A90BB;
class Class_1_2B55159CDDD73374;
class Class_1_30B5FE4AA7ABAB8C;
class Class_1_6F1D8C3500555B80;
class Class_1_99663460B1F191F7;
class Class_1_CDAD1C4D78702C93;
class Class_1_E990AB1287569416;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::Client { class CameraLookAtConfigData; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class CameraLookAtScreenRange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D40D7B823C0E052E_METHOD_2_017B19A14C8B4D7B_OFFSET UNITYSDK_OFFSET(0xC3441E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_1_OFFSET UNITYSDK_OFFSET(0xC349190)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xC3490B0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_0780589A94992891_OFFSET UNITYSDK_OFFSET(0xC3488A0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xC343FC0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xC33F340)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC34B180)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_173B06ABEB18FF18_OFFSET UNITYSDK_OFFSET(0xC347F20)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xC34A460)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_26A075091CE210E1_OFFSET UNITYSDK_OFFSET(0xC34AE30)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_270641AA53B6F10C_OFFSET UNITYSDK_OFFSET(0xC342C50)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC34ABB0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0xC347210)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_3BD4447E4B5CA6EC_OFFSET UNITYSDK_OFFSET(0xC34A100)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0xC33F790)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC3456A0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_428E0C3D6F077E99_OFFSET UNITYSDK_OFFSET(0xC3489B0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_472EBD1C5B8718BA_OFFSET UNITYSDK_OFFSET(0xC3457F0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC347D60)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_5AB7337B1B1DD487_OFFSET UNITYSDK_OFFSET(0xC34BF80)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_6A46186F77BC60EE_OFFSET UNITYSDK_OFFSET(0xC3462F0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xC343250)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xC33F270)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0xC34C060)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7CB6E94FD1AB71A1_OFFSET UNITYSDK_OFFSET(0xC346AF0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xC34C010)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xC343DE0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0xC347E80)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC346A30)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_89EAE04B3866DD06_OFFSET UNITYSDK_OFFSET(0xC344790)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xC34BEE0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_90D44F5B6FAF222A_OFFSET UNITYSDK_OFFSET(0xC344160)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC3435C0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0xC343020)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_A4F3D407B322D681_OFFSET UNITYSDK_OFFSET(0xC347130)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0xC33F7E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AC7828729159F6C6_OFFSET UNITYSDK_OFFSET(0xC3450E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AE1D4E1BB8A004B2_OFFSET UNITYSDK_OFFSET(0xC34A720)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xC345D90)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC343CF0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_B20B7E3C4B2FE7E2_OFFSET UNITYSDK_OFFSET(0xC34AC80)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_BA6C32A51A611756_OFFSET UNITYSDK_OFFSET(0xC34A080)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_C381360AAECDB692_OFFSET UNITYSDK_OFFSET(0xC34B340)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC34B2E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_D023CA2AF3DEB8D3_OFFSET UNITYSDK_OFFSET(0xC347C30)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0xC34BE00)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0xC33F030)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xC343640)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xC345020)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F8DF42CBF53194D1_OFFSET UNITYSDK_OFFSET(0xC346EB0)
#define CLASS_2_D40D7B823C0E052E__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC33EE60)
#define CLASS_2_D40D7B823C0E052E__CTOR_OFFSET UNITYSDK_OFFSET(0xC33EDE0)

inline static constexpr unsigned int Class_2_D40D7B823C0E052E_TypeDefinitionIndex = 69624;

class Class_2_D40D7B823C0E052E : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	// static const ::System::Single CMJFBNNPGJM; // 0x0
	// static const ::System::Single MFLFAEKOJIH; // 0x0
	// static const ::System::Single MFKPKJILHOJ; // 0x0
	// static const ::System::Single JOBMJJFCLIP; // 0x0
	::Class_1_CDAD1C4D78702C93* EMHKDLAOMHI; // 0x38
	::RPG::Client::CameraLookAtConfigData* CPFMMJAJHKI; // 0x40
	::Class_1_CDAD1C4D78702C93* ABGBLPMCJAL; // 0x48
	::RPG::Client::CameraBlendCurve* PEMGKBNOBIN; // 0x50
	::Class_1_6F1D8C3500555B80* HGJOPLMHPDJ; // 0x58
	::Class_1_E990AB1287569416* AMEHGFFDFJH; // 0x60
	::Class_1_24563DACE77A90BB* INEBCEELFPO; // 0x68
	::Class_1_99663460B1F191F7* LNGLOECCBNN; // 0x70
	::Il2CppArray<::UnityEngine::RaycastHit>* JHHEFEJOKLK; // 0x78
	::RPG::Client::CameraFreelook3rdConfigData* BNEIMCEOFCN; // 0x80
	::RPG::GameCore::GameEntity* OHNGADEAIID; // 0x88
	::RPG::Client::Freelook3rdModuleConfig* HEGMHCKPMHE; // 0x90
	::System::Boolean FPENLPOEIEK; // 0x98
	::System::Boolean KHCIHBFOGLL; // 0x99
	::System::Boolean GMJHAFPLHJK; // 0x9A
	::System::Boolean LGPHALNBIOK; // 0x9B
	::System::Single POGEKPMFGDM; // 0x9C
	::System::Boolean MKNAHFDFLKG; // 0xA0
	::System::Boolean OKCOFFAODLP; // 0xA1
	::System::Boolean JFPBBHGKGCE; // 0xA2
	::System::Boolean MNKCNHKKFNF; // 0xA3
	::System::Single HKJAMEOACDH; // 0xA4
	::System::Nullable_1<::UnityEngine::Vector3> FFCMIHDOPMG; // 0xA8
	::UnityEngine::Vector3 HLIPOOBEBPF; // 0xB8
	::System::Single COPDHEOMBCJ; // 0xC4
	::System::Single KGDNDAABJCB; // 0xC8
	::UnityEngine::Vector2 BAFBMONEKFK; // 0xCC
	::UnityEngine::Vector2 OCAACIPNMPG; // 0xD4
	::System::Nullable_1<::UnityEngine::Vector3> JENNOFNOJKP; // 0xDC
	::UnityEngine::Vector3 FPJBNBPODIM; // 0xEC
	::System::Single KJBHJKNKNIJ; // 0xF8
	::System::Single NLPLGIIJOAH; // 0xFC
	::System::Single ANNDLHEEEPN; // 0x100
	::System::Nullable_1<::UnityEngine::Vector3> KJGLNGABFDD; // 0x104
	::System::Nullable_1<::UnityEngine::Vector3> ICLEIANBBDB; // 0x114
	::System::Nullable_1<::System::Single> HBKLMHBGDED; // 0x124
	::System::Nullable_1<::System::Single> HKHNIHJLCKL; // 0x12C
	::UnityEngine::Vector3 IFCIKDIAEJI; // 0x134
	::System::Single AIKGBIGEAHA; // 0x140
	::System::Boolean HHLNFCDJCNN; // 0x144
	::System::Boolean KPFHGALMEEC; // 0x145
	::System::Boolean OHNOJCJJKCI; // 0x146
	::System::Boolean AMNGDPBKHGE; // 0x147
	::System::Boolean KDDOHHAAMMM; // 0x148
	::System::Boolean HDJOGGDMCIO; // 0x149
	::System::Single BBPBALFKOHJ; // 0x14C
	::System::Nullable_1<::UnityEngine::Vector3> LENOGLFFFEH; // 0x150
	::System::Nullable_1<::UnityEngine::Vector3> AMOLNHCPMPM; // 0x160
	::System::Nullable_1<::UnityEngine::Vector3> MPELHKKHEKK; // 0x170
	::System::Nullable_1<::System::Single> OHIBIHBOLCD; // 0x180
	::System::Nullable_1<::UnityEngine::Vector3> IDCDAFOGKOM; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_3BE5DBAE268F9022_OFFSET))(this);
	}

	::System::Void Method_2_270641AA53B6F10C(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_270641AA53B6F10C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_D023CA2AF3DEB8D3(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_D023CA2AF3DEB8D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_9A7B1D406C8D78E8(::Class_1_CDAD1C4D78702C93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_9A7B1D406C8D78E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::RPG::Client::CameraFreelook3rdConfigData* Method_2_90D44F5B6FAF222A()
	{
		return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_90D44F5B6FAF222A_OFFSET))(this);
	}

	::System::Void Method_2_017B19A14C8B4D7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_017B19A14C8B4D7B_OFFSET))(this);
	}

	::System::Void Method_2_89EAE04B3866DD06(::RPG::Client::CameraFreelook3rdConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_89EAE04B3866DD06_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_AC7828729159F6C6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_AC7828729159F6C6_OFFSET))(this);
	}

	::System::Void Method_2_0780589A94992891(::RPG::Client::CameraFreelook3rdConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_0780589A94992891_OFFSET))(this, a1);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_A4F3D407B322D681(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_A4F3D407B322D681_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7CB6E94FD1AB71A1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_7CB6E94FD1AB71A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_428E0C3D6F077E99(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_428E0C3D6F077E99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_472EBD1C5B8718BA(::Class_1_2B55159CDDD73374* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B55159CDDD73374*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_472EBD1C5B8718BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_AE1D4E1BB8A004B2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_AE1D4E1BB8A004B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::RPG::Client::CameraLookAtConfigData* Method_2_BA6C32A51A611756()
	{
		return ((::RPG::Client::CameraLookAtConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_BA6C32A51A611756_OFFSET))(this);
	}

	::System::Boolean Method_2_3BD4447E4B5CA6EC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_3BD4447E4B5CA6EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B20B7E3C4B2FE7E2(::RPG::GameCore::CameraLookAtScreenRange* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CameraLookAtScreenRange*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_B20B7E3C4B2FE7E2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_26A075091CE210E1(::RPG::GameCore::CameraLookAtScreenRange* a1, ::RPG::GameCore::CameraLookAtScreenRange* a2, ::RPG::Client::CameraBlendCurve* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::CameraLookAtScreenRange*, ::RPG::GameCore::CameraLookAtScreenRange*, ::RPG::Client::CameraBlendCurve*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_26A075091CE210E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_173B06ABEB18FF18(::Class_1_CDAD1C4D78702C93* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::CameraBlendCurve* a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_173B06ABEB18FF18_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_6A46186F77BC60EE(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_6A46186F77BC60EE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AB7337B1B1DD487(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_5AB7337B1B1DD487_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Vector3 Method_2_F8DF42CBF53194D1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_F8DF42CBF53194D1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_2_C381360AAECDB692(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_C381360AAECDB692_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_D2038C9A874038B4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_D2038C9A874038B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_794A5D20268719ED(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_794A5D20268719ED_OFFSET))(this, a1, a2, a3);
	}
};
