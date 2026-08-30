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

#define CLASS_2_D40D7B823C0E052E_METHOD_2_017B19A14C8B4D7B_OFFSET UNITYSDK_OFFSET(0xC442AF0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_1_OFFSET UNITYSDK_OFFSET(0xC447A90)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xC4479B0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_0780589A94992891_OFFSET UNITYSDK_OFFSET(0xC4471B0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xC4428D0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xC43DC40)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC449A70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_173B06ABEB18FF18_OFFSET UNITYSDK_OFFSET(0xC446830)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xC448D00)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_26A075091CE210E1_OFFSET UNITYSDK_OFFSET(0xC449720)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC4494A0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0xC445B00)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_3BD4447E4B5CA6EC_OFFSET UNITYSDK_OFFSET(0xC4489A0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0xC43E090)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC443F90)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_428E0C3D6F077E99_OFFSET UNITYSDK_OFFSET(0xC4472B0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_477CBF29897FA2C3_OFFSET UNITYSDK_OFFSET(0xC441540)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC446670)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_5AB7337B1B1DD487_OFFSET UNITYSDK_OFFSET(0xC44A870)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_6A46186F77BC60EE_OFFSET UNITYSDK_OFFSET(0xC444BE0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xC441B70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xC43DB70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0xC44A950)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7A6E75CE0CFA0015_OFFSET UNITYSDK_OFFSET(0xC4440E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7CB6E94FD1AB71A1_OFFSET UNITYSDK_OFFSET(0xC4453E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xC44A900)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xC4426F0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0xC446790)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC445320)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_89EAE04B3866DD06_OFFSET UNITYSDK_OFFSET(0xC4430A0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xC44A7D0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_90D44F5B6FAF222A_OFFSET UNITYSDK_OFFSET(0xC442A70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC441EE0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0xC441940)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_A4F3D407B322D681_OFFSET UNITYSDK_OFFSET(0xC445A20)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0xC43E0E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AC7828729159F6C6_OFFSET UNITYSDK_OFFSET(0xC4439E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AE1D4E1BB8A004B2_OFFSET UNITYSDK_OFFSET(0xC448FE0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xC444680)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC442600)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_B20B7E3C4B2FE7E2_OFFSET UNITYSDK_OFFSET(0xC449570)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_BA6C32A51A611756_OFFSET UNITYSDK_OFFSET(0xC448920)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_C381360AAECDB692_OFFSET UNITYSDK_OFFSET(0xC449C30)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC449BD0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_D023CA2AF3DEB8D3_OFFSET UNITYSDK_OFFSET(0xC446540)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0xC44A6F0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0xC43D930)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xC441F60)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xC443920)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F8DF42CBF53194D1_OFFSET UNITYSDK_OFFSET(0xC4457A0)
#define CLASS_2_D40D7B823C0E052E__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC43D760)
#define CLASS_2_D40D7B823C0E052E__CTOR_OFFSET UNITYSDK_OFFSET(0xC43D6E0)

inline static constexpr unsigned int Class_2_D40D7B823C0E052E_TypeDefinitionIndex = 69588;

class Class_2_D40D7B823C0E052E : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	// static const ::System::Single CMJFBNNPGJM; // 0x0
	// static const ::System::Single MFLFAEKOJIH; // 0x0
	// static const ::System::Single MFKPKJILHOJ; // 0x0
	// static const ::System::Single JOBMJJFCLIP; // 0x0
	::Class_1_CDAD1C4D78702C93* EMHKDLAOMHI; // 0x38
	::RPG::Client::CameraFreelook3rdConfigData* BNEIMCEOFCN; // 0x40
	::RPG::GameCore::GameEntity* OHNGADEAIID; // 0x48
	::Il2CppArray<::UnityEngine::RaycastHit>* JHHEFEJOKLK; // 0x50
	::Class_1_99663460B1F191F7* LNGLOECCBNN; // 0x58
	::RPG::Client::CameraBlendCurve* PEMGKBNOBIN; // 0x60
	::Class_1_CDAD1C4D78702C93* ABGBLPMCJAL; // 0x68
	::Class_1_24563DACE77A90BB* INEBCEELFPO; // 0x70
	::Class_1_6F1D8C3500555B80* HGJOPLMHPDJ; // 0x78
	::RPG::Client::CameraLookAtConfigData* CPFMMJAJHKI; // 0x80
	::Class_1_E990AB1287569416* AMEHGFFDFJH; // 0x88
	::RPG::Client::Freelook3rdModuleConfig* HEGMHCKPMHE; // 0x90
	::System::Single HKJAMEOACDH; // 0x98
	::System::Single BBPBALFKOHJ; // 0x9C
	::System::Nullable_1<::System::Single> HBKLMHBGDED; // 0xA0
	::System::Nullable_1<::UnityEngine::Vector3> JENNOFNOJKP; // 0xA8
	::UnityEngine::Vector3 HLIPOOBEBPF; // 0xB8
	::System::Single POGEKPMFGDM; // 0xC4
	::System::Single KGDNDAABJCB; // 0xC8
	::System::Single AIKGBIGEAHA; // 0xCC
	::System::Boolean HHLNFCDJCNN; // 0xD0
	::System::Boolean KHCIHBFOGLL; // 0xD1
	::System::Boolean OKCOFFAODLP; // 0xD2
	::System::Boolean MNKCNHKKFNF; // 0xD3
	::UnityEngine::Vector2 OCAACIPNMPG; // 0xD4
	::System::Single COPDHEOMBCJ; // 0xDC
	::System::Single KJBHJKNKNIJ; // 0xE0
	::System::Nullable_1<::System::Single> HKHNIHJLCKL; // 0xE4
	::System::Nullable_1<::UnityEngine::Vector3> LENOGLFFFEH; // 0xEC
	::System::Single ANNDLHEEEPN; // 0xFC
	::System::Nullable_1<::UnityEngine::Vector3> FFCMIHDOPMG; // 0x100
	::System::Nullable_1<::UnityEngine::Vector3> ICLEIANBBDB; // 0x110
	::System::Nullable_1<::System::Single> OHIBIHBOLCD; // 0x120
	::System::Nullable_1<::UnityEngine::Vector3> IDCDAFOGKOM; // 0x128
	::UnityEngine::Vector3 FPJBNBPODIM; // 0x138
	::System::Boolean HDJOGGDMCIO; // 0x144
	::System::Boolean MKNAHFDFLKG; // 0x145
	::System::Boolean OHNOJCJJKCI; // 0x146
	::System::Boolean JFPBBHGKGCE; // 0x147
	::System::Boolean FPENLPOEIEK; // 0x148
	::System::Boolean AMNGDPBKHGE; // 0x149
	::UnityEngine::Vector2 BAFBMONEKFK; // 0x14C
	::System::Single NLPLGIIJOAH; // 0x154
	::System::Nullable_1<::UnityEngine::Vector3> MPELHKKHEKK; // 0x158
	::System::Boolean KDDOHHAAMMM; // 0x168
	::System::Boolean LGPHALNBIOK; // 0x169
	::System::Boolean GMJHAFPLHJK; // 0x16A
	::System::Boolean KPFHGALMEEC; // 0x16B
	::System::Nullable_1<::UnityEngine::Vector3> KJGLNGABFDD; // 0x16C
	::UnityEngine::Vector3 IFCIKDIAEJI; // 0x17C
	::System::Nullable_1<::UnityEngine::Vector3> AMOLNHCPMPM; // 0x188

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

	::System::Void Method_2_477CBF29897FA2C3(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_477CBF29897FA2C3_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_7A6E75CE0CFA0015(::Class_1_2B55159CDDD73374* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B55159CDDD73374*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_7A6E75CE0CFA0015_OFFSET))(this, a1);
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
