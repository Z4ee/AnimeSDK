#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_799;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class RoamingModuleConfig; }
namespace System { class Object; }

#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x10B04500)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x10B02490)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x10B015B0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x10B08C60)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x10B08030)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x10B03A70)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_49F1AE7F8430F7DF_OFFSET UNITYSDK_OFFSET(0x10B05AE0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x10B08BA0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_1_OFFSET UNITYSDK_OFFSET(0x10B04040)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x10B07300)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_6FA69752928E72EB_OFFSET UNITYSDK_OFFSET(0x10B06AC0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x10AFEBE0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_9662C977574EE59F_OFFSET UNITYSDK_OFFSET(0x10B07650)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_A77870C566864FEA_OFFSET UNITYSDK_OFFSET(0x10B05270)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_AC3C859BC8298264_OFFSET UNITYSDK_OFFSET(0x10B08CF0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x10B01200)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0x10B05890)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0x10B059D0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_1_OFFSET UNITYSDK_OFFSET(0x10B01E60)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x10B00E40)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x10AFEB30)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x10B05A20)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E479D644004B1729_OFFSET UNITYSDK_OFFSET(0x10B05490)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x10B043E0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0x10B05680)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x10B031D0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_FBF7F282112D67D9_OFFSET UNITYSDK_OFFSET(0x10B07F10)
#define CLASS_2_31C64CC68B35A0F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B09000)
#define CLASS_2_31C64CC68B35A0F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10AFEAA0)
#define CLASS_2_31C64CC68B35A0F7__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFEA60)

inline static constexpr unsigned int Class_2_31C64CC68B35A0F7_TypeDefinitionIndex = 56936;

class Class_2_31C64CC68B35A0F7 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x12750);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x12754);
	}
	// static const ::System::Int32 Field_2_14 = 0xA; // 0x0
	::RPG::Client::RoamingModuleConfig* Field_2_2; // 0x38
	::Class_0_16E4307DCC419505_799* Field_2_1; // 0x40
	::Il2CppArray<::System::Single>* Field_2_5; // 0x48
	::RPG::Client::PhotoGraphSystem* Field_2_15; // 0x50
	::System::Single Field_2_19; // 0x58
	::System::Int32 Field_2_6; // 0x5C
	::System::Single Field_2_21; // 0x60
	::System::Single Field_2_23; // 0x64
	::System::Single Field_2_12; // 0x68
	::UnityEngine::Vector3 Field_2_7; // 0x6C
	::UnityEngine::Vector3 Field_2_18; // 0x78
	::UnityEngine::Vector3 Field_2_8; // 0x84
	::UnityEngine::Vector3 Field_2_17; // 0x90
	::UnityEngine::Quaternion Field_2_16; // 0x9C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_13; // 0xAC
	::System::Boolean Field_2_9; // 0xBC
	::System::Boolean Field_2_10; // 0xBD
	::System::Boolean Field_2_0; // 0xBE
	::System::Boolean Field_2_11; // 0xBF
	::System::Single Field_2_20; // 0xC0
	::System::Single Field_2_22; // 0xC4

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

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_2_A77870C566864FEA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_A77870C566864FEA_OFFSET))(this, a1);
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

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_41AA181104E03F2C_OFFSET))(this);
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
