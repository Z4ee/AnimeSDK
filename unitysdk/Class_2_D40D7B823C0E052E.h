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

#define CLASS_2_D40D7B823C0E052E_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x16172EF0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_017B19A14C8B4D7B_OFFSET UNITYSDK_OFFSET(0x1616DF70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x16172E10)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_0780589A94992891_OFFSET UNITYSDK_OFFSET(0x16172600)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x1616DD50)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x16169130)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16174660)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_173B06ABEB18FF18_OFFSET UNITYSDK_OFFSET(0x16171C80)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x16173940)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_26A075091CE210E1_OFFSET UNITYSDK_OFFSET(0x16174310)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16174090)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x16170F80)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_3BD4447E4B5CA6EC_OFFSET UNITYSDK_OFFSET(0x161735E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x16169580)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1616F420)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_428E0C3D6F077E99_OFFSET UNITYSDK_OFFSET(0x16172710)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_477CBF29897FA2C3_OFFSET UNITYSDK_OFFSET(0x1616CA00)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0x1616EE70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16171AC0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_5AB7337B1B1DD487_OFFSET UNITYSDK_OFFSET(0x16175450)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_6A46186F77BC60EE_OFFSET UNITYSDK_OFFSET(0x16170070)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x1616CFD0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x16169060)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0x16175530)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7A6E75CE0CFA0015_OFFSET UNITYSDK_OFFSET(0x1616F570)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7CB6E94FD1AB71A1_OFFSET UNITYSDK_OFFSET(0x16170860)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x161754E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1616DB70)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x16171BE0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x161707A0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_89EAE04B3866DD06_OFFSET UNITYSDK_OFFSET(0x1616E520)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x161753B0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_90D44F5B6FAF222A_OFFSET UNITYSDK_OFFSET(0x1616DEF0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1616D350)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0x1616CDC0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_A4F3D407B322D681_OFFSET UNITYSDK_OFFSET(0x16170EA0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x161695D0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AE1D4E1BB8A004B2_OFFSET UNITYSDK_OFFSET(0x16173C00)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x1616FB10)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1616DA80)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_B20B7E3C4B2FE7E2_OFFSET UNITYSDK_OFFSET(0x16174160)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_BA6C32A51A611756_OFFSET UNITYSDK_OFFSET(0x16173560)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_C381360AAECDB692_OFFSET UNITYSDK_OFFSET(0x16174820)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161747C0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_D023CA2AF3DEB8D3_OFFSET UNITYSDK_OFFSET(0x16171990)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0x161752E0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0x16168E20)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1616D3D0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1616EDB0)
#define CLASS_2_D40D7B823C0E052E_METHOD_2_F8DF42CBF53194D1_OFFSET UNITYSDK_OFFSET(0x16170C20)
#define CLASS_2_D40D7B823C0E052E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16168C50)
#define CLASS_2_D40D7B823C0E052E__CTOR_OFFSET UNITYSDK_OFFSET(0x16168BD0)

inline static constexpr unsigned int Class_2_D40D7B823C0E052E_TypeDefinitionIndex = 66495;

class Class_2_D40D7B823C0E052E : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	::RPG::Client::CameraLookAtConfigData* Field_2_4; // 0x38
	::Class_1_CDAD1C4D78702C93* Field_2_5; // 0x40
	::RPG::Client::CameraFreelook3rdConfigData* Field_2_6; // 0x48
	::Class_1_E990AB1287569416* Field_2_7; // 0x50
	::RPG::Client::Freelook3rdModuleConfig* Field_2_8; // 0x58
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_9; // 0x60
	::Class_1_CDAD1C4D78702C93* Field_2_10; // 0x68
	::Class_1_99663460B1F191F7* Field_2_11; // 0x70
	::RPG::Client::CameraBlendCurve* Field_2_12; // 0x78
	::Class_1_24563DACE77A90BB* Field_2_13; // 0x80
	::Class_1_6F1D8C3500555B80* Field_2_14; // 0x88
	::RPG::GameCore::GameEntity* Field_2_15; // 0x90
	::System::Boolean Field_2_16; // 0x98
	::System::Boolean Field_2_17; // 0x99
	::System::Boolean Field_2_18; // 0x9A
	::System::Boolean Field_2_19; // 0x9B
	::UnityEngine::Vector3 Field_2_20; // 0x9C
	::System::Boolean Field_2_21; // 0xA8
	::System::Boolean Field_2_22; // 0xA9
	::System::Boolean Field_2_23; // 0xAA
	::System::Boolean Field_2_24; // 0xAB
	::System::Nullable_1<::System::Single> Field_2_25; // 0xAC
	::System::Boolean Field_2_26; // 0xB4
	::System::Boolean Field_2_27; // 0xB5
	::System::Boolean Field_2_28; // 0xB6
	::System::Boolean Field_2_29; // 0xB7
	::UnityEngine::Vector3 Field_2_30; // 0xB8
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_31; // 0xC4
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_32; // 0xD4
	::System::Nullable_1<::System::Single> Field_2_33; // 0xE4
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_34; // 0xEC
	::System::Boolean Field_2_35; // 0xFC
	::System::Boolean Field_2_36; // 0xFD
	::System::Single Field_2_37; // 0x100
	::System::Single Field_2_38; // 0x104
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_39; // 0x108
	::System::Single Field_2_40; // 0x118
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_41; // 0x11C
	::UnityEngine::Vector2 Field_2_42; // 0x12C
	::UnityEngine::Vector3 Field_2_43; // 0x134
	::UnityEngine::Vector2 Field_2_44; // 0x140
	::System::Single Field_2_45; // 0x148
	::System::Single Field_2_46; // 0x14C
	::System::Nullable_1<::System::Single> Field_2_47; // 0x150
	::System::Single Field_2_48; // 0x158
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_49; // 0x15C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_50; // 0x16C
	::System::Single Field_2_51; // 0x17C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_52; // 0x180
	::System::Single Field_2_53; // 0x190
	::System::Single Field_2_54; // 0x194

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

	::System::Void Method_2_4AEE5A4C943256DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_4AEE5A4C943256DD_OFFSET))(this);
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

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_367A5F1ECD1BC1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D40D7B823C0E052E_METHOD_2_367A5F1ECD1BC1A2_OFFSET))(this);
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
