#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2B55159CDDD73374;
class Class_1_30B5FE4AA7ABAB8C;
class Class_1_7C0A6A60765B387C;
class Class_1_99663460B1F191F7;
class Class_1_9A3A8BCA46EF129A;
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

#define CLASS_2_3CB81C324048F9A5_METHOD_2_017B19A14C8B4D7B_OFFSET UNITYSDK_OFFSET(0x119F5590)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_022B0D58A3077BF2_1_OFFSET UNITYSDK_OFFSET(0x119FA6E0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x119FA600)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x119F51B0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x119F0CC0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_0780589A94992891_OFFSET UNITYSDK_OFFSET(0x119F9DF0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x119F5370)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_08AD9EEED041FFE7_OFFSET UNITYSDK_OFFSET(0x119F09C0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x119FBE50)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x119FB120)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_26A075091CE210E1_OFFSET UNITYSDK_OFFSET(0x119FBB00)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x119F0C00)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_2F6A0626FD25F736_OFFSET UNITYSDK_OFFSET(0x119F5510)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x119FB870)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x119F8750)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_3BD4447E4B5CA6EC_OFFSET UNITYSDK_OFFSET(0x119FADC0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x119F10F0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x119F6B50)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_428E0C3D6F077E99_OFFSET UNITYSDK_OFFSET(0x119F9F00)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_472EBD1C5B8718BA_OFFSET UNITYSDK_OFFSET(0x119F6CA0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0x119F65A0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_4CCCD921F4850452_OFFSET UNITYSDK_OFFSET(0x119FAD40)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x119F92A0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x119FD130)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_5AB7337B1B1DD487_OFFSET UNITYSDK_OFFSET(0x119FCCF0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_65115CD0067642FB_OFFSET UNITYSDK_OFFSET(0x119FD0C0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_6A46186F77BC60EE_OFFSET UNITYSDK_OFFSET(0x119F7790)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x119F4660)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_705E1030C5B6CA03_OFFSET UNITYSDK_OFFSET(0x119F9460)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_794A5D20268719ED_OFFSET UNITYSDK_OFFSET(0x119FCDD0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_7CB6E94FD1AB71A1_OFFSET UNITYSDK_OFFSET(0x119F8010)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x119FCD80)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x119F93C0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_823561FB3763DD2D_OFFSET UNITYSDK_OFFSET(0x119F40B0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x119F7F50)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_89EAE04B3866DD06_OFFSET UNITYSDK_OFFSET(0x119F5BD0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x119FCC50)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x119F49B0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0x119F4450)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_A4F3D407B322D681_OFFSET UNITYSDK_OFFSET(0x119F8670)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x119F1140)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_AE1D4E1BB8A004B2_OFFSET UNITYSDK_OFFSET(0x119FB3E0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x119F7230)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x119FD020)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x119F50C0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_B20B7E3C4B2FE7E2_OFFSET UNITYSDK_OFFSET(0x119FB950)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_C381360AAECDB692_OFFSET UNITYSDK_OFFSET(0x119FC010)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x119FBFB0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_D023CA2AF3DEB8D3_OFFSET UNITYSDK_OFFSET(0x119F9170)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x119F4A30)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0x119FCB80)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x119F64E0)
#define CLASS_2_3CB81C324048F9A5_METHOD_2_F8DF42CBF53194D1_OFFSET UNITYSDK_OFFSET(0x119F83D0)
#define CLASS_2_3CB81C324048F9A5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x119F08F0)
#define CLASS_2_3CB81C324048F9A5__CTOR_OFFSET UNITYSDK_OFFSET(0x119F0860)

inline static constexpr unsigned int Class_2_3CB81C324048F9A5_TypeDefinitionIndex = 64169;

class Class_2_3CB81C324048F9A5 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	// static const ::System::Single Field_2_26; // 0x0
	// static const ::System::Single Field_2_27; // 0x0
	// static const ::System::Single Field_2_29; // 0x0
	// static const ::System::Single Field_2_30; // 0x0
	::Class_1_CDAD1C4D78702C93* Field_2_7; // 0x38
	::RPG::Client::CameraLookAtConfigData* Field_2_40; // 0x40
	::Class_1_CDAD1C4D78702C93* Field_2_8; // 0x48
	::Class_1_7C0A6A60765B387C* Field_2_0; // 0x50
	::RPG::Client::CameraBlendCurve* Field_2_50; // 0x58
	::RPG::Client::CameraFreelook3rdConfigData* Field_2_12; // 0x60
	::RPG::GameCore::GameEntity* Field_2_9; // 0x68
	::Class_1_99663460B1F191F7* Field_2_24; // 0x70
	::RPG::Client::Freelook3rdModuleConfig* Field_2_10; // 0x78
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_36; // 0x80
	::Class_1_E990AB1287569416* Field_2_1; // 0x88
	::Class_1_9A3A8BCA46EF129A* Field_2_13; // 0x90
	::System::Single Field_2_32; // 0x98
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_18; // 0x9C
	::System::Single Field_2_52; // 0xAC
	::UnityEngine::Vector2 Field_2_42; // 0xB0
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_22; // 0xB8
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_17; // 0xC8
	::System::Boolean Field_2_47; // 0xD8
	::System::Boolean Field_2_16; // 0xD9
	::System::Boolean Field_2_46; // 0xDA
	::System::Boolean Field_2_5; // 0xDB
	::System::Single Field_2_37; // 0xDC
	::System::Boolean Field_2_48; // 0xE0
	::System::Boolean Field_2_3; // 0xE1
	::System::Boolean Field_2_49; // 0xE2
	::System::Boolean Field_2_4; // 0xE3
	::System::Single Field_2_41; // 0xE4
	::System::Nullable_1<::System::Single> Field_2_15; // 0xE8
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_11; // 0xF0
	::UnityEngine::Vector3 Field_2_44; // 0x100
	::System::Nullable_1<::System::Single> Field_2_38; // 0x10C
	::System::Single Field_2_34; // 0x114
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_20; // 0x118
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_23; // 0x128
	::System::Single Field_2_51; // 0x138
	::UnityEngine::Vector3 Field_2_43; // 0x13C
	::System::Single Field_2_53; // 0x148
	::System::Single Field_2_33; // 0x14C
	::System::Single Field_2_31; // 0x150
	::System::Boolean Field_2_2; // 0x154
	::System::Boolean Field_2_6; // 0x155
	::System::Boolean Field_2_45; // 0x156
	::System::Boolean Field_2_25; // 0x157
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_19; // 0x158
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_21; // 0x168
	::UnityEngine::Vector3 Field_2_35; // 0x178
	::UnityEngine::Vector2 Field_2_39; // 0x184
	::System::Nullable_1<::System::Single> Field_2_14; // 0x18C
	::System::Boolean Field_2_28; // 0x194

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_08AD9EEED041FFE7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_08AD9EEED041FFE7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::System::Void Method_2_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_3BE5DBAE268F9022_OFFSET))(this);
	}

	::System::Void Method_2_823561FB3763DD2D(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_823561FB3763DD2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_D023CA2AF3DEB8D3(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_D023CA2AF3DEB8D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_9A7B1D406C8D78E8(::Class_1_CDAD1C4D78702C93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_9A7B1D406C8D78E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::RPG::Client::CameraFreelook3rdConfigData* Method_2_2F6A0626FD25F736()
	{
		return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_2F6A0626FD25F736_OFFSET))(this);
	}

	::System::Void Method_2_017B19A14C8B4D7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_017B19A14C8B4D7B_OFFSET))(this);
	}

	::System::Void Method_2_89EAE04B3866DD06(::RPG::Client::CameraFreelook3rdConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_89EAE04B3866DD06_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_4AEE5A4C943256DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_4AEE5A4C943256DD_OFFSET))(this);
	}

	::System::Void Method_2_0780589A94992891(::RPG::Client::CameraFreelook3rdConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_0780589A94992891_OFFSET))(this, a1);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_A4F3D407B322D681(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_A4F3D407B322D681_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7CB6E94FD1AB71A1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_7CB6E94FD1AB71A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_428E0C3D6F077E99(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_428E0C3D6F077E99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_472EBD1C5B8718BA(::Class_1_2B55159CDDD73374* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B55159CDDD73374*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_472EBD1C5B8718BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_022B0D58A3077BF2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_AE1D4E1BB8A004B2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_AE1D4E1BB8A004B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::RPG::Client::CameraLookAtConfigData* Method_2_4CCCD921F4850452()
	{
		return ((::RPG::Client::CameraLookAtConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_4CCCD921F4850452_OFFSET))(this);
	}

	::System::Boolean Method_2_3BD4447E4B5CA6EC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_3BD4447E4B5CA6EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B20B7E3C4B2FE7E2(::RPG::GameCore::CameraLookAtScreenRange* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CameraLookAtScreenRange*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_B20B7E3C4B2FE7E2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_26A075091CE210E1(::RPG::GameCore::CameraLookAtScreenRange* a1, ::RPG::GameCore::CameraLookAtScreenRange* a2, ::RPG::Client::CameraBlendCurve* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::CameraLookAtScreenRange*, ::RPG::GameCore::CameraLookAtScreenRange*, ::RPG::Client::CameraBlendCurve*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_26A075091CE210E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_705E1030C5B6CA03(::Class_1_CDAD1C4D78702C93* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::CameraBlendCurve* a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_705E1030C5B6CA03_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_6A46186F77BC60EE(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_6A46186F77BC60EE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AB7337B1B1DD487(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_5AB7337B1B1DD487_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Vector3 Method_2_F8DF42CBF53194D1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_F8DF42CBF53194D1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_2_C381360AAECDB692(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_C381360AAECDB692_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_D2038C9A874038B4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_D2038C9A874038B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_794A5D20268719ED(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_794A5D20268719ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_65115CD0067642FB(::Class_1_30B5FE4AA7ABAB8C* P0, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_65115CD0067642FB_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB81C324048F9A5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
