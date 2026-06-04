#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CDAD1C4D78702C93;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ZoomModuleConfig; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_962C2B692370F38B_METHOD_2_01A29C25696297E1_OFFSET UNITYSDK_OFFSET(0x136748E0)
#define CLASS_2_962C2B692370F38B_METHOD_2_0C4A4A38CB1F61E5_OFFSET UNITYSDK_OFFSET(0x13674C10)
#define CLASS_2_962C2B692370F38B_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x136720D0)
#define CLASS_2_962C2B692370F38B_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x13672680)
#define CLASS_2_962C2B692370F38B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13674640)
#define CLASS_2_962C2B692370F38B_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x136747F0)
#define CLASS_2_962C2B692370F38B_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13672500)
#define CLASS_2_962C2B692370F38B_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x13674850)
#define CLASS_2_962C2B692370F38B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x136725E0)
#define CLASS_2_962C2B692370F38B_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x136746B0)
#define CLASS_2_962C2B692370F38B_METHOD_2_69EF1A548159A59E_OFFSET UNITYSDK_OFFSET(0x13671D00)
#define CLASS_2_962C2B692370F38B_METHOD_2_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x13673CA0)
#define CLASS_2_962C2B692370F38B_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x136745D0)
#define CLASS_2_962C2B692370F38B_METHOD_2_B01CE1525D970ACA_OFFSET UNITYSDK_OFFSET(0x13673ED0)
#define CLASS_2_962C2B692370F38B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13672030)
#define CLASS_2_962C2B692370F38B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13674730)
#define CLASS_2_962C2B692370F38B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13674790)
#define CLASS_2_962C2B692370F38B_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x13672890)
#define CLASS_2_962C2B692370F38B_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x13674530)
#define CLASS_2_962C2B692370F38B_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x13672810)
#define CLASS_2_962C2B692370F38B_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x13671E70)
#define CLASS_2_962C2B692370F38B_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x13674D00)
#define CLASS_2_962C2B692370F38B_METHOD_2_F2242F0282B1FE22_OFFSET UNITYSDK_OFFSET(0x13674400)
#define CLASS_2_962C2B692370F38B_METHOD_2_F762974E778A9B95_OFFSET UNITYSDK_OFFSET(0x136729C0)
#define CLASS_2_962C2B692370F38B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13671CD0)
#define CLASS_2_962C2B692370F38B__CTOR_OFFSET UNITYSDK_OFFSET(0x13671CC0)

inline static constexpr unsigned int Class_2_962C2B692370F38B_TypeDefinitionIndex = 65122;

class Class_2_962C2B692370F38B : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::Class_1_CDAD1C4D78702C93* Field_2_1; // 0x38
	::RPG::Client::ZoomModuleConfig* Field_2_2; // 0x40
	::UnityEngine::Camera* Field_2_3; // 0x48
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_4; // 0x50
	::System::Single Field_2_5; // 0x60
	::System::Nullable_1<::System::Single> Field_2_6; // 0x64
	::System::Single Field_2_7; // 0x6C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_8; // 0x70
	::System::Nullable_1<::System::Single> Field_2_9; // 0x80
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_10; // 0x88
	::System::Nullable_1<::System::Single> Field_2_11; // 0x98
	::System::Boolean Field_2_12; // 0xA0
	::System::Boolean Field_2_13; // 0xA1
	::System::Boolean Field_2_14; // 0xA2
	::System::Single Field_2_15; // 0xA4
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_16; // 0xA8
	::System::Nullable_1<::System::Single> Field_2_17; // 0xB8
	::UnityEngine::Vector3 Field_2_18; // 0xC0
	::System::Single Field_2_19; // 0xCC
	::System::Single Field_2_20; // 0xD0
	::System::Single Field_2_21; // 0xD4
	::System::Single Field_2_22; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_69EF1A548159A59E(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_69EF1A548159A59E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_95FC878EB184D294_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_2_B01CE1525D970ACA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_B01CE1525D970ACA_OFFSET))(this);
	}

	::System::Single Method_2_F2242F0282B1FE22(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_F2242F0282B1FE22_OFFSET))(this, a1);
	}

	::System::Void Method_2_F762974E778A9B95(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_F762974E778A9B95_OFFSET))(this, a1);
	}

	::System::Single Method_2_0C4A4A38CB1F61E5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_0C4A4A38CB1F61E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_01A29C25696297E1(::RPG::Client::Freelook3rdModuleConfig* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Freelook3rdModuleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_01A29C25696297E1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_962C2B692370F38B_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
