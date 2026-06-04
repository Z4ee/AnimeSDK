#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_955;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class RoamingModuleConfig; }
namespace System { class Object; }

#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA95F830)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xA95C790)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0xA95EDB0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0xA95F380)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_67E6AD6068AEB682_OFFSET UNITYSDK_OFFSET(0xA960D70)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xA95D680)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_6FA69752928E72EB_OFFSET UNITYSDK_OFFSET(0xA961EC0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0xA9640A0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_8EBC895BFDF8F242_OFFSET UNITYSDK_OFFSET(0xA963470)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xA9626E0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0xA963FE0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_AC3C859BC8298264_OFFSET UNITYSDK_OFFSET(0xA964140)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xA95C3E0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_B3B2D5FDFAB8D084_OFFSET UNITYSDK_OFFSET(0xA962A90)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0xA960B30)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xA959CC0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0xA960C60)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D387167BF4B7D4F3_OFFSET UNITYSDK_OFFSET(0xA9604F0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_1_OFFSET UNITYSDK_OFFSET(0xA95D040)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xA95BFD0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0xA959C10)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xA960CB0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E479D644004B1729_OFFSET UNITYSDK_OFFSET(0xA960710)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0xA95F710)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0xA960900)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xA95E3D0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_FBF7F282112D67D9_OFFSET UNITYSDK_OFFSET(0xA963350)
#define CLASS_2_31C64CC68B35A0F7__CCTOR_OFFSET UNITYSDK_OFFSET(0xA964450)
#define CLASS_2_31C64CC68B35A0F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA959B80)
#define CLASS_2_31C64CC68B35A0F7__CTOR_OFFSET UNITYSDK_OFFSET(0xA959B40)

inline static constexpr unsigned int Class_2_31C64CC68B35A0F7_TypeDefinitionIndex = 65107;

class Class_2_31C64CC68B35A0F7 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x14020);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x14024);
	}
	// static const ::System::Int32 Field_2_2 = 0xA; // 0x0
	::Class_0_16E4307DCC419505_955* Field_2_3; // 0x38
	::RPG::Client::PhotoGraphSystem* Field_2_4; // 0x40
	::RPG::Client::RoamingModuleConfig* Field_2_5; // 0x48
	::Il2CppArray<::System::Single>* Field_2_6; // 0x50
	::System::Single Field_2_7; // 0x58
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_8; // 0x5C
	::System::Single Field_2_9; // 0x6C
	::System::Boolean Field_2_10; // 0x70
	::System::Boolean Field_2_11; // 0x71
	::System::Boolean Field_2_12; // 0x72
	::System::Boolean Field_2_13; // 0x73
	::UnityEngine::Vector3 Field_2_14; // 0x74
	::UnityEngine::Quaternion Field_2_15; // 0x80
	::UnityEngine::Vector3 Field_2_16; // 0x90
	::System::Single Field_2_17; // 0x9C
	::System::Single Field_2_18; // 0xA0
	::System::Single Field_2_19; // 0xA4
	::UnityEngine::Vector3 Field_2_20; // 0xA8
	::System::Int32 Field_2_21; // 0xB4
	::UnityEngine::Vector3 Field_2_22; // 0xB8
	::System::Single Field_2_23; // 0xC4

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

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_D387167BF4B7D4F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D387167BF4B7D4F3_OFFSET))(this, a1);
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

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_B3B2D5FDFAB8D084(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_B3B2D5FDFAB8D084_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8EBC895BFDF8F242(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_8EBC895BFDF8F242_OFFSET))(this, a1);
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

	::UnityEngine::Vector3 Method_2_67E6AD6068AEB682(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_67E6AD6068AEB682_OFFSET))(this, a1);
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

	::System::Void Method_2_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_85F9AAEEA394BE31_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_9F59C088ACADFAC2_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}
};
