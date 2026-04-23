#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_905;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class RoamingModuleConfig; }
namespace System { class Object; }

#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x96E1860)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x96DF7E0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x96E0DC0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x96DE900)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x96E5EE0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x96E52C0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_49F1AE7F8430F7DF_OFFSET UNITYSDK_OFFSET(0x96E2D60)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x96E5E20)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_1_OFFSET UNITYSDK_OFFSET(0x96E13A0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x96E4570)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_6FA69752928E72EB_OFFSET UNITYSDK_OFFSET(0x96E3D40)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_9662C977574EE59F_OFFSET UNITYSDK_OFFSET(0x96E48D0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_AC3C859BC8298264_OFFSET UNITYSDK_OFFSET(0x96E5F70)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x96DE550)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0x96E2B10)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x96DC080)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0x96E2C50)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_1_OFFSET UNITYSDK_OFFSET(0x96DF1B0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x96DE190)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x96DBFD0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x96E2CA0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E479D644004B1729_OFFSET UNITYSDK_OFFSET(0x96E2700)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x96E1740)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E97FC8C27C810984_OFFSET UNITYSDK_OFFSET(0x96E24E0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0x96E28F0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x96E0520)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_FBF7F282112D67D9_OFFSET UNITYSDK_OFFSET(0x96E51A0)
#define CLASS_2_31C64CC68B35A0F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x96E6280)
#define CLASS_2_31C64CC68B35A0F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96DBF40)
#define CLASS_2_31C64CC68B35A0F7__CTOR_OFFSET UNITYSDK_OFFSET(0x96DBF00)

inline static constexpr unsigned int Class_2_31C64CC68B35A0F7_TypeDefinitionIndex = 64186;

class Class_2_31C64CC68B35A0F7 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x114D0);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x114D4);
	}
	// static const ::System::Int32 Field_2_14 = 0xA; // 0x0
	::Class_0_16E4307DCC419505_905* Field_2_1; // 0x38
	::RPG::Client::PhotoGraphSystem* Field_2_15; // 0x40
	::Il2CppArray<::System::Single>* Field_2_5; // 0x48
	::RPG::Client::RoamingModuleConfig* Field_2_2; // 0x50
	::UnityEngine::Vector3 Field_2_7; // 0x58
	::UnityEngine::Quaternion Field_2_16; // 0x64
	::System::Single Field_2_22; // 0x74
	::UnityEngine::Vector3 Field_2_8; // 0x78
	::System::Boolean Field_2_11; // 0x84
	::System::Boolean Field_2_9; // 0x85
	::System::Boolean Field_2_0; // 0x86
	::System::Boolean Field_2_10; // 0x87
	::System::Single Field_2_19; // 0x88
	::System::Single Field_2_23; // 0x8C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_13; // 0x90
	::System::Int32 Field_2_6; // 0xA0
	::System::Single Field_2_21; // 0xA4
	::System::Single Field_2_12; // 0xA8
	::UnityEngine::Vector3 Field_2_18; // 0xAC
	::System::Single Field_2_20; // 0xB8
	::UnityEngine::Vector3 Field_2_17; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_E97FC8C27C810984(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_E97FC8C27C810984_OFFSET))(this, a1);
	}

	::System::Void Method_2_E479D644004B1729(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_E479D644004B1729_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE97EFC752A55D2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_EE97EFC752A55D2E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA410EA09457B5C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_BA410EA09457B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE017E2A52468EF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_CE017E2A52468EF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_1_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_9662C977574EE59F(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_9662C977574EE59F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Single Method_2_FBF7F282112D67D9(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_FBF7F282112D67D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_AC3C859BC8298264(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_AC3C859BC8298264_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_6FA69752928E72EB(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_6FA69752928E72EB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_49F1AE7F8430F7DF(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_49F1AE7F8430F7DF_OFFSET))(this, a1);
	}

	::System::Single Method_2_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_1_OFFSET))(this);
	}
};
