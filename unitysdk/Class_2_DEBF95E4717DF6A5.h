#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/Class_2_DEBF95E4717DF6A5_DitherProcessType.h"
#include "unitysdk/Class_2_DEBF95E4717DF6A5_DitherRayType.h"
#include "unitysdk/Class_2_DEBF95E4717DF6A5_Struct_2_85063606A63F5E3F.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_30B5FE4AA7ABAB8C;
class Class_2_BF927CBEA754F6BE;
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class DitherModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x116D1A50)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_285455287DDF5885_OFFSET UNITYSDK_OFFSET(0x116D8710)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_2AF4BBCE279B5419_OFFSET UNITYSDK_OFFSET(0x116D5700)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0x116D39F0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_2FDC69A366F3E642_OFFSET UNITYSDK_OFFSET(0x116D7B40)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x116D1860)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x116D7820)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_39D49E192BA358BE_OFFSET UNITYSDK_OFFSET(0x116D8060)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_4178277FA7D98DA0_OFFSET UNITYSDK_OFFSET(0x116D6E70)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x116D26D0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_4C72C009A62F0A13_OFFSET UNITYSDK_OFFSET(0x116D0110)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x116D1960)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_50884B570C30FEE7_OFFSET UNITYSDK_OFFSET(0x116DBA10)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x116D6BC0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0x116DB4A0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_64FD61799B46AFDC_OFFSET UNITYSDK_OFFSET(0x116CF0E0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_65115CD0067642FB_OFFSET UNITYSDK_OFFSET(0x116DBBF0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_756730F92EDD4D05_OFFSET UNITYSDK_OFFSET(0x116D6190)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_77FCB024B7A6EA65_OFFSET UNITYSDK_OFFSET(0x116D5110)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0x116DB8B0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_7DD84EAFF333A1E4_2_OFFSET UNITYSDK_OFFSET(0x116DB900)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x116DB860)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x116D19E0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x116D78C0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x116D79A0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_94269078D81A21CF_OFFSET UNITYSDK_OFFSET(0x116D0680)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_95314DF65480272A_OFFSET UNITYSDK_OFFSET(0x116D9FA0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_9A780F8350D6EDAD_OFFSET UNITYSDK_OFFSET(0x116DB140)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x116D4FA0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_9C18BABEC7730D21_OFFSET UNITYSDK_OFFSET(0x116CF8C0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_9CA5B8EAFA637D51_OFFSET UNITYSDK_OFFSET(0x116DA7A0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x116D28C0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_A97107D69EC6875F_OFFSET UNITYSDK_OFFSET(0x116CF990)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0x116D82B0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_AD26695B94274D03_OFFSET UNITYSDK_OFFSET(0x116D7090)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x116DBB50)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_B41BA821E1AB097D_OFFSET UNITYSDK_OFFSET(0x116D6730)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_B48520FA811C96D8_OFFSET UNITYSDK_OFFSET(0x116D9470)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_BAAC2ACB8349B67B_OFFSET UNITYSDK_OFFSET(0x116D7F40)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_BD10988DC230240A_OFFSET UNITYSDK_OFFSET(0x116DA230)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_C205462335B75E65_OFFSET UNITYSDK_OFFSET(0x116D1560)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x116DB950)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_C6381D02B1458AD8_OFFSET UNITYSDK_OFFSET(0x116D5EE0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x116D1D50)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_C9278FAA2407336D_OFFSET UNITYSDK_OFFSET(0x116D1280)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_DEC3661D6348B22C_OFFSET UNITYSDK_OFFSET(0x116D2B70)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x116DB6A0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_E6560EEBA2D07806_OFFSET UNITYSDK_OFFSET(0x116D7330)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_E6AAB30867A40537_OFFSET UNITYSDK_OFFSET(0x116DBB00)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x116D02A0)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x116DB430)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_F6995686B15A18E5_OFFSET UNITYSDK_OFFSET(0x116D7780)
#define CLASS_2_DEBF95E4717DF6A5_METHOD_2_FC698171EE0CC0FE_OFFSET UNITYSDK_OFFSET(0x116DB2A0)
#define CLASS_2_DEBF95E4717DF6A5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x116CF020)
#define CLASS_2_DEBF95E4717DF6A5__CTOR_OFFSET UNITYSDK_OFFSET(0x116CEFB0)

inline static constexpr unsigned int Class_2_DEBF95E4717DF6A5_TypeDefinitionIndex = 56911;

class Class_2_DEBF95E4717DF6A5 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	// static const ::System::Int32 Field_2_1 = 0xA; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	::RPG::GameCore::GameEntity* Field_2_24; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_30; // 0x40
	::Il2CppArray<::System::Single>* Field_2_29; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_36; // 0x50
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_0; // 0x58
	::RPG::GameCore::GameEntity* Field_2_42; // 0x60
	::RPG::Client::DitherModuleConfig* Field_2_47; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_35; // 0x70
	::RPG::GameCore::GameEntity* Field_2_46; // 0x78
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_39; // 0x80
	::Il2CppArray<::UnityEngine::Ray>* Field_2_27; // 0x88
	::Il2CppArray<::UnityEngine::Ray>* Field_2_28; // 0x90
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_32; // 0x98
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_33; // 0xA0
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_31; // 0xA8
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_34; // 0xB0
	::RPG::GameCore::GameEntity* Field_2_45; // 0xB8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_40; // 0xC0
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_26; // 0xC8
	::RPG::GameCore::GameEntity* Field_2_44; // 0xD0
	::System::Collections::Generic::List_1<::Class_2_DEBF95E4717DF6A5_Struct_2_85063606A63F5E3F>* Field_2_37; // 0xD8
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_38; // 0xE0
	::System::Single Field_2_5; // 0xE8
	::System::Int32 Field_2_14; // 0xEC
	::System::Int32 Field_2_23; // 0xF0
	::System::Single Field_2_9; // 0xF4
	::System::Single Field_2_13; // 0xF8
	::Class_2_DEBF95E4717DF6A5_DitherProcessType Field_2_22; // 0xFC
	::System::Boolean Field_2_19; // 0x100
	::System::Boolean Field_2_18; // 0x101
	::System::Boolean Field_2_43; // 0x102
	::System::Boolean Field_2_41; // 0x103
	::System::Boolean Field_2_20; // 0x104
	::System::Boolean Field_2_21; // 0x105
	::System::Single Field_2_17; // 0x108
	::System::Single Field_2_16; // 0x10C
	::System::Single Field_2_11; // 0x110
	::System::Int32 Field_2_25; // 0x114
	::System::Single Field_2_10; // 0x118
	::System::Int32 Field_2_15; // 0x11C
	::System::Single Field_2_8; // 0x120
	::System::Single Field_2_12; // 0x124
	::System::Single Field_2_7; // 0x128
	::System::Single Field_2_6; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_64FD61799B46AFDC(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_64FD61799B46AFDC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9C18BABEC7730D21(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_9C18BABEC7730D21_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A97107D69EC6875F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_A97107D69EC6875F_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_9B1F2653496E5C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_9B1F2653496E5C47_OFFSET))(this);
	}

	::System::Boolean Method_2_DEC3661D6348B22C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_DEC3661D6348B22C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B85C1969225764F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_2B85C1969225764F_OFFSET))(this);
	}

	::System::Void Method_2_2AF4BBCE279B5419(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_2AF4BBCE279B5419_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_94269078D81A21CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_94269078D81A21CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6560EEBA2D07806(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_E6560EEBA2D07806_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD26695B94274D03(::UnityEngine::Transform* a1, ::Class_2_BF927CBEA754F6BE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_AD26695B94274D03_OFFSET))(this, a1, a2);
	}

	::Class_2_DEBF95E4717DF6A5_Struct_2_85063606A63F5E3F Method_2_F6995686B15A18E5(::System::Int32 a1)
	{
		return ((::Class_2_DEBF95E4717DF6A5_Struct_2_85063606A63F5E3F(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_F6995686B15A18E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C9278FAA2407336D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_C9278FAA2407336D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Int32 Method_2_BAAC2ACB8349B67B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_BAAC2ACB8349B67B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6381D02B1458AD8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_C6381D02B1458AD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_39D49E192BA358BE(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Class_2_BF927CBEA754F6BE* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_39D49E192BA358BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B41BA821E1AB097D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_B41BA821E1AB097D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4178277FA7D98DA0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_4178277FA7D98DA0_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_2_2FDC69A366F3E642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_2FDC69A366F3E642_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Ray>* Method_2_285455287DDF5885()
	{
		return ((::Il2CppArray<::UnityEngine::Ray>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_285455287DDF5885_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Ray>* Method_2_B48520FA811C96D8(::System::Int32 a1)
	{
		return ((::Il2CppArray<::UnityEngine::Ray>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_B48520FA811C96D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_95314DF65480272A(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_95314DF65480272A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_BD10988DC230240A(::Il2CppArray<::UnityEngine::Ray>* a1, ::System::Int32 a2, ::Class_2_DEBF95E4717DF6A5_DitherRayType a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Ray>*, ::System::Int32, ::Class_2_DEBF95E4717DF6A5_DitherRayType))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_BD10988DC230240A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9CA5B8EAFA637D51(::System::Int32 a1, ::System::Boolean a2, ::Class_2_DEBF95E4717DF6A5_DitherRayType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::Class_2_DEBF95E4717DF6A5_DitherRayType))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_9CA5B8EAFA637D51_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_77FCB024B7A6EA65(::RPG::Client::BaseShaderPropertyTransition* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_77FCB024B7A6EA65_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_4C72C009A62F0A13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_4C72C009A62F0A13_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Single Method_2_FC698171EE0CC0FE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_FC698171EE0CC0FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C205462335B75E65(::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_C205462335B75E65_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_756730F92EDD4D05()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_756730F92EDD4D05_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::UnityEngine::Ray Method_2_9A780F8350D6EDAD(::UnityEngine::Ray a1, ::System::Single a2)
	{
		return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_9A780F8350D6EDAD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6096CA3BC11444EA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_6096CA3BC11444EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_7DD84EAFF333A1E4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_50884B570C30FEE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_50884B570C30FEE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6AAB30867A40537(::Il2CppArray<::UnityEngine::Ray>* a1, ::Il2CppArray<::UnityEngine::Ray>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Ray>*, ::Il2CppArray<::UnityEngine::Ray>*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_E6AAB30867A40537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_65115CD0067642FB(::Class_1_30B5FE4AA7ABAB8C* P0, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_DEBF95E4717DF6A5_METHOD_2_65115CD0067642FB_OFFSET))(this, P0, P1);
	}
};
