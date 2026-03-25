#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELookAtTargetSource.h"
#include "unitysdk/RPG/GameCore/ENpcLookAtMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_4C8316D252AABDF5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class CharacterAnimZone; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLookAtPositionInfo; }
namespace RPG::GameCore { class LevelNpcLookAtTargetInfo; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1B29DD4FD6D3A6AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AF5840)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_018E23A6BFBE4F07_OFFSET UNITYSDK_OFFSET(0x8AF5B20)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_0D64676477D5996D_OFFSET UNITYSDK_OFFSET(0x8AF5E30)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x8AF6DD0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_1AC289536ACFCBF7_OFFSET UNITYSDK_OFFSET(0x8AF6430)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_22C031C2E2271C85_OFFSET UNITYSDK_OFFSET(0x8AF6160)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0x8AF6CF0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_2F2AAD4F857EEAF2_OFFSET UNITYSDK_OFFSET(0x8AF43B0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_3A6BA667BEB66A7B_OFFSET UNITYSDK_OFFSET(0x8AF6570)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_40608173835C5AA5_OFFSET UNITYSDK_OFFSET(0x8AF2F30)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x8AF36A0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_481AC0E4E3F3D73B_OFFSET UNITYSDK_OFFSET(0x8AF4190)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_50F388BA53C37D92_OFFSET UNITYSDK_OFFSET(0x8AF7190)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_512D0C099C5FEC54_OFFSET UNITYSDK_OFFSET(0x8AF54E0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_52C78C4FB0FA67B1_OFFSET UNITYSDK_OFFSET(0x8AF3730)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_56E5DB6CD9DEE332_OFFSET UNITYSDK_OFFSET(0x8AF5760)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_5906F1C536BB1219_OFFSET UNITYSDK_OFFSET(0x8AF71A0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_594946548B397366_OFFSET UNITYSDK_OFFSET(0x8AF5BB0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_6296A4FDF807C4BF_OFFSET UNITYSDK_OFFSET(0x8AF5CC0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_7E462A97DE7ACFDA_OFFSET UNITYSDK_OFFSET(0x8AF6B90)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_86C481A3D49D6F8C_OFFSET UNITYSDK_OFFSET(0x8AF6710)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x8AF70E0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_B7B7628F0F1CBB5D_OFFSET UNITYSDK_OFFSET(0x8AF3DA0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x8AF6FF0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8AF5AB0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_D99F7A1200193152_OFFSET UNITYSDK_OFFSET(0x8AF4000)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_DFC952E721F9A35E_OFFSET UNITYSDK_OFFSET(0x8AF41E0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x8AF7040)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_E647A07FFD9E8CA5_OFFSET UNITYSDK_OFFSET(0x8AF4D50)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8AF70D0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8AF3080)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_F735CB8DA6A8EFD7_OFFSET UNITYSDK_OFFSET(0x8AF30B0)
#define CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x8AF3FB0)
#define CLASS_2_1B29DD4FD6D3A6AB_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x8AF58C0)
#define CLASS_2_1B29DD4FD6D3A6AB_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x8AF5A60)
#define CLASS_2_1B29DD4FD6D3A6AB_TICK_OFFSET UNITYSDK_OFFSET(0x8AF3150)
#define CLASS_2_1B29DD4FD6D3A6AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x8AF71C0)
#define CLASS_2_1B29DD4FD6D3A6AB__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF4E60)
#define CLASS_2_1B29DD4FD6D3A6AB___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8AF7270)

inline static constexpr unsigned int Class_2_1B29DD4FD6D3A6AB_TypeDefinitionIndex = 46155;

class Class_2_1B29DD4FD6D3A6AB : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1B29DD4FD6D3A6AB_TypeDefinitionIndex)->GetStaticField(0x46AD0);
	}
	::RPG::GameCore::LevelNpcLookAtTargetInfo* Field_2_2; // 0x18
	::RPG::Client::LookAtIK* Field_2_6; // 0x20
	::System::Nullable_1<::Struct_2_4C8316D252AABDF5> Field_2_9; // 0x28
	::RPG::GameCore::LevelLookAtPositionInfo* Field_2_3; // 0x50
	::RPG::GameCore::CharacterAnimZone* Field_2_5; // 0x58
	::RPG::GameCore::OnEventCallBack* Field_2_13; // 0x60
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*>* Field_2_10; // 0x68
	::System::Collections::Generic::List_1<::System::Func_2<::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*, ::System::Boolean>*>* Field_2_12; // 0x70
	::Struct_2_4C8316D252AABDF5 Field_2_14; // 0x78
	::RPG::Client::CharacterMonoAvatar* Field_2_7; // 0x98
	::System::Boolean Field_2_4; // 0xA0
	::System::Boolean Field_2_11; // 0xA1
	::RPG::GameCore::ENpcLookAtMode Field_2_1; // 0xA4
	::System::Single Field_2_8; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB__CCTOR_OFFSET))();
	}

	::System::Void Method_2_40608173835C5AA5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_40608173835C5AA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_B7B7628F0F1CBB5D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_B7B7628F0F1CBB5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D99F7A1200193152(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_D99F7A1200193152_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DFC952E721F9A35E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_DFC952E721F9A35E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F2AAD4F857EEAF2(::Class_2_1B29DD4FD6D3A6AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1B29DD4FD6D3A6AB*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_2F2AAD4F857EEAF2_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F735CB8DA6A8EFD7(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_F735CB8DA6A8EFD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_E647A07FFD9E8CA5(::RPG::GameCore::ELookAtTargetSource a1, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::ELookAtTargetSource, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_E647A07FFD9E8CA5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_512D0C099C5FEC54(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_512D0C099C5FEC54_OFFSET))(this, a1);
	}

	::System::Void Method_2_56E5DB6CD9DEE332(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_56E5DB6CD9DEE332_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_018E23A6BFBE4F07(::System::Nullable_1<::Struct_2_4C8316D252AABDF5> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_4C8316D252AABDF5>))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_018E23A6BFBE4F07_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_594946548B397366(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_594946548B397366_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0D64676477D5996D(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_0D64676477D5996D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6296A4FDF807C4BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_6296A4FDF807C4BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_22C031C2E2271C85()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_22C031C2E2271C85_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1AC289536ACFCBF7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_1AC289536ACFCBF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_52C78C4FB0FA67B1(::System::Nullable_1<::Struct_2_4C8316D252AABDF5> a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_4C8316D252AABDF5>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_52C78C4FB0FA67B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7E462A97DE7ACFDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_7E462A97DE7ACFDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A6BA667BEB66A7B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_3A6BA667BEB66A7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_86C481A3D49D6F8C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_86C481A3D49D6F8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FA0973E87FBD363(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::RPG::Client::LookAtIK* Method_2_50F388BA53C37D92()
	{
		return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_50F388BA53C37D92_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_4C8316D252AABDF5> Method_2_5906F1C536BB1219()
	{
		return ((::System::Nullable_1<::Struct_2_4C8316D252AABDF5>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_5906F1C536BB1219_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_FEDE09C198114DBE_OFFSET))(this);
	}

	::RPG::GameCore::ELookAtTargetSource Method_2_481AC0E4E3F3D73B()
	{
		return ((::RPG::GameCore::ELookAtTargetSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_481AC0E4E3F3D73B_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B29DD4FD6D3A6AB___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
