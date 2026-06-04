#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/Class_2_8B39B895BD505A99_DitherProcessType.h"
#include "unitysdk/Class_2_8B39B895BD505A99_DitherRayType.h"
#include "unitysdk/Class_2_8B39B895BD505A99_Struct_2_85063606A63F5E3F.h"
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

#define CLASS_2_8B39B895BD505A99_METHOD_2_018BA1AE137EB2E2_OFFSET UNITYSDK_OFFSET(0xFF56580)
#define CLASS_2_8B39B895BD505A99_METHOD_2_0771D49DA3FB00C8_OFFSET UNITYSDK_OFFSET(0xFF5B6D0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_0C33F505B0136D59_OFFSET UNITYSDK_OFFSET(0xFF50020)
#define CLASS_2_8B39B895BD505A99_METHOD_2_285455287DDF5885_OFFSET UNITYSDK_OFFSET(0xFF580F0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_29A716D479D072FB_OFFSET UNITYSDK_OFFSET(0xFF4E4E0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_2A5E1D51A3926216_OFFSET UNITYSDK_OFFSET(0xFF58E10)
#define CLASS_2_8B39B895BD505A99_METHOD_2_2A8B73C445B86D1A_OFFSET UNITYSDK_OFFSET(0xFF4EDA0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xFF50630)
#define CLASS_2_8B39B895BD505A99_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xFF507B0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xFF50B30)
#define CLASS_2_8B39B895BD505A99_METHOD_2_41F4CE36A1B62620_OFFSET UNITYSDK_OFFSET(0xFF579C0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xFF50730)
#define CLASS_2_8B39B895BD505A99_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0xFF562D0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_5B22DB54B1086561_OFFSET UNITYSDK_OFFSET(0xFF4E5E0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_6011BBCAB21C4BB7_OFFSET UNITYSDK_OFFSET(0xFF54520)
#define CLASS_2_8B39B895BD505A99_METHOD_2_6827D1B56D40B805_OFFSET UNITYSDK_OFFSET(0xFF5AFF0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xFF514A0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0xFF57320)
#define CLASS_2_8B39B895BD505A99_METHOD_2_7563DE394764FC23_OFFSET UNITYSDK_OFFSET(0xFF56B50)
#define CLASS_2_8B39B895BD505A99_METHOD_2_756730F92EDD4D05_OFFSET UNITYSDK_OFFSET(0xFF55790)
#define CLASS_2_8B39B895BD505A99_METHOD_2_7AFEA59B9600CEDE_OFFSET UNITYSDK_OFFSET(0xFF5B500)
#define CLASS_2_8B39B895BD505A99_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0xFF5B3A0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_7DD84EAFF333A1E4_2_OFFSET UNITYSDK_OFFSET(0xFF5B3F0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xFF5B350)
#define CLASS_2_8B39B895BD505A99_METHOD_2_8E06DC2FCAF9CF15_OFFSET UNITYSDK_OFFSET(0xFF56810)
#define CLASS_2_8B39B895BD505A99_METHOD_2_94269078D81A21CF_OFFSET UNITYSDK_OFFSET(0xFF4F350)
#define CLASS_2_8B39B895BD505A99_METHOD_2_95314DF65480272A_OFFSET UNITYSDK_OFFSET(0xFF59980)
#define CLASS_2_8B39B895BD505A99_METHOD_2_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0xFF5B440)
#define CLASS_2_8B39B895BD505A99_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xFF570F0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_9A780F8350D6EDAD_OFFSET UNITYSDK_OFFSET(0xFF5AC90)
#define CLASS_2_8B39B895BD505A99_METHOD_2_9CA5B8EAFA637D51_OFFSET UNITYSDK_OFFSET(0xFF5A110)
#define CLASS_2_8B39B895BD505A99_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xFF516A0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0xFF5B200)
#define CLASS_2_8B39B895BD505A99_METHOD_2_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xFF4EF30)
#define CLASS_2_8B39B895BD505A99_METHOD_2_AE78545BF133B193_OFFSET UNITYSDK_OFFSET(0xFF4DC90)
#define CLASS_2_8B39B895BD505A99_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xFF57070)
#define CLASS_2_8B39B895BD505A99_METHOD_2_B41BA821E1AB097D_OFFSET UNITYSDK_OFFSET(0xFF55D60)
#define CLASS_2_8B39B895BD505A99_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xFF571B0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_BAAC2ACB8349B67B_OFFSET UNITYSDK_OFFSET(0xFF578A0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_BD10988DC230240A_OFFSET UNITYSDK_OFFSET(0xFF59BE0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_BF4863B00516ACD3_OFFSET UNITYSDK_OFFSET(0xFF56FC0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_CE0A9F9763D4569D_OFFSET UNITYSDK_OFFSET(0xFF54D10)
#define CLASS_2_8B39B895BD505A99_METHOD_2_CE175582DA72734C_OFFSET UNITYSDK_OFFSET(0xFF502B0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xFF52960)
#define CLASS_2_8B39B895BD505A99_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xFF50820)
#define CLASS_2_8B39B895BD505A99_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0xFF5B640)
#define CLASS_2_8B39B895BD505A99_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xFF57BB0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_E6AAB30867A40537_OFFSET UNITYSDK_OFFSET(0xFF5B5F0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_E7459211B18143CF_OFFSET UNITYSDK_OFFSET(0xFF554D0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_ECC2F69147EC10D3_OFFSET UNITYSDK_OFFSET(0xFF519B0)
#define CLASS_2_8B39B895BD505A99_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xFF5AF80)
#define CLASS_2_8B39B895BD505A99_METHOD_2_F730CA6BB5767C9C_OFFSET UNITYSDK_OFFSET(0xFF54710)
#define CLASS_2_8B39B895BD505A99_METHOD_2_FC698171EE0CC0FE_OFFSET UNITYSDK_OFFSET(0xFF5ADF0)
#define CLASS_2_8B39B895BD505A99__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFF4DBB0)
#define CLASS_2_8B39B895BD505A99__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4DB10)

inline static constexpr unsigned int Class_2_8B39B895BD505A99_TypeDefinitionIndex = 65082;

class Class_2_8B39B895BD505A99 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	// static const ::System::Int32 Field_2_0 = 0xA; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_4; // 0x38
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_5; // 0x40
	::Il2CppArray<::UnityEngine::Ray>* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_7; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_8; // 0x58
	::System::Collections::Generic::List_1<::Class_2_8B39B895BD505A99_Struct_2_85063606A63F5E3F>* Field_2_9; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_10; // 0x68
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_11; // 0x70
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_12; // 0x78
	::Il2CppArray<::System::Single>* Field_2_13; // 0x80
	::RPG::GameCore::GameEntity* Field_2_14; // 0x88
	::RPG::GameCore::GameEntity* Field_2_15; // 0x90
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_16; // 0x98
	::RPG::Client::DitherModuleConfig* Field_2_17; // 0xA0
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_18; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_19; // 0xB0
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_20; // 0xB8
	::RPG::GameCore::GameEntity* Field_2_21; // 0xC0
	::RPG::GameCore::GameEntity* Field_2_22; // 0xC8
	::Il2CppArray<::UnityEngine::Ray>* Field_2_23; // 0xD0
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_24; // 0xD8
	::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_2_25; // 0xE0
	::System::Single Field_2_26; // 0xE8
	::System::Single Field_2_27; // 0xEC
	::System::Single Field_2_28; // 0xF0
	::System::Single Field_2_29; // 0xF4
	::System::Single Field_2_30; // 0xF8
	::System::Single Field_2_31; // 0xFC
	::System::Boolean Field_2_32; // 0x100
	::System::Boolean Field_2_33; // 0x101
	::System::Int32 Field_2_34; // 0x104
	::System::Single Field_2_35; // 0x108
	::System::Int32 Field_2_36; // 0x10C
	::System::Single Field_2_37; // 0x110
	::System::Int32 Field_2_38; // 0x114
	::System::Single Field_2_39; // 0x118
	::System::Int32 Field_2_40; // 0x11C
	::System::Boolean Field_2_41; // 0x120
	::System::Boolean Field_2_42; // 0x121
	::System::Boolean Field_2_43; // 0x122
	::System::Boolean Field_2_44; // 0x123
	::System::Single Field_2_45; // 0x124
	::Class_2_8B39B895BD505A99_DitherProcessType Field_2_46; // 0x128
	::System::Single Field_2_47; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE78545BF133B193(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_AE78545BF133B193_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_29A716D479D072FB(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_29A716D479D072FB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B22DB54B1086561()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_5B22DB54B1086561_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_2_6011BBCAB21C4BB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_6011BBCAB21C4BB7_OFFSET))(this);
	}

	::System::Boolean Method_2_ECC2F69147EC10D3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_ECC2F69147EC10D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_2_CE0A9F9763D4569D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_CE0A9F9763D4569D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_94269078D81A21CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_94269078D81A21CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_7563DE394764FC23(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_7563DE394764FC23_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8E06DC2FCAF9CF15(::UnityEngine::Transform* a1, ::Class_2_BF927CBEA754F6BE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_8E06DC2FCAF9CF15_OFFSET))(this, a1, a2);
	}

	::Class_2_8B39B895BD505A99_Struct_2_85063606A63F5E3F Method_2_BF4863B00516ACD3(::System::Int32 a1)
	{
		return ((::Class_2_8B39B895BD505A99_Struct_2_85063606A63F5E3F(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_BF4863B00516ACD3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C33F505B0136D59(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_0C33F505B0136D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Int32 Method_2_BAAC2ACB8349B67B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_BAAC2ACB8349B67B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7459211B18143CF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_E7459211B18143CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F4CE36A1B62620(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Class_2_BF927CBEA754F6BE* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_41F4CE36A1B62620_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B41BA821E1AB097D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_B41BA821E1AB097D_OFFSET))(this, a1);
	}

	::System::Void Method_2_018BA1AE137EB2E2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_018BA1AE137EB2E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Ray>* Method_2_285455287DDF5885()
	{
		return ((::Il2CppArray<::UnityEngine::Ray>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_285455287DDF5885_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Ray>* Method_2_2A5E1D51A3926216(::System::Int32 a1)
	{
		return ((::Il2CppArray<::UnityEngine::Ray>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_2A5E1D51A3926216_OFFSET))(this, a1);
	}

	::System::Void Method_2_95314DF65480272A(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_95314DF65480272A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_2_BD10988DC230240A(::Il2CppArray<::UnityEngine::Ray>* a1, ::System::Int32 a2, ::Class_2_8B39B895BD505A99_DitherRayType a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Ray>*, ::System::Int32, ::Class_2_8B39B895BD505A99_DitherRayType))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_BD10988DC230240A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9CA5B8EAFA637D51(::System::Int32 a1, ::System::Boolean a2, ::Class_2_8B39B895BD505A99_DitherRayType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::Class_2_8B39B895BD505A99_DitherRayType))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_9CA5B8EAFA637D51_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F730CA6BB5767C9C(::RPG::Client::BaseShaderPropertyTransition* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_F730CA6BB5767C9C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_2A8B73C445B86D1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_2A8B73C445B86D1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Single Method_2_FC698171EE0CC0FE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_FC698171EE0CC0FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CE175582DA72734C(::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_CE175582DA72734C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_756730F92EDD4D05()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_756730F92EDD4D05_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::UnityEngine::Ray Method_2_9A780F8350D6EDAD(::UnityEngine::Ray a1, ::System::Single a2)
	{
		return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_9A780F8350D6EDAD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6827D1B56D40B805(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_6827D1B56D40B805_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_7DD84EAFF333A1E4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFEA59B9600CEDE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_7AFEA59B9600CEDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6AAB30867A40537(::Il2CppArray<::UnityEngine::Ray>* a1, ::Il2CppArray<::UnityEngine::Ray>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Ray>*, ::Il2CppArray<::UnityEngine::Ray>*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_E6AAB30867A40537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0771D49DA3FB00C8(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_8B39B895BD505A99_METHOD_2_0771D49DA3FB00C8_OFFSET))(this, a1, a2);
	}
};
