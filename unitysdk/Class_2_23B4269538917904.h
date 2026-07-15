#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELookAtTargetSource.h"
#include "unitysdk/RPG/GameCore/ENpcLookAtMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_4C8316D252AABDF5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
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

#define CLASS_2_23B4269538917904_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1648E250)
#define CLASS_2_23B4269538917904_METHOD_2_018E23A6BFBE4F07_OFFSET UNITYSDK_OFFSET(0x1648E530)
#define CLASS_2_23B4269538917904_METHOD_2_04EE8ABA69EB21BB_OFFSET UNITYSDK_OFFSET(0x1648E140)
#define CLASS_2_23B4269538917904_METHOD_2_0B9466BF52112CE4_OFFSET UNITYSDK_OFFSET(0x1648E850)
#define CLASS_2_23B4269538917904_METHOD_2_1F57FDEB24E6C2F6_OFFSET UNITYSDK_OFFSET(0x1648EE50)
#define CLASS_2_23B4269538917904_METHOD_2_29835514E31C399D_OFFSET UNITYSDK_OFFSET(0x1648B940)
#define CLASS_2_23B4269538917904_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0x1648F7C0)
#define CLASS_2_23B4269538917904_METHOD_2_3A6BA667BEB66A7B_OFFSET UNITYSDK_OFFSET(0x1648EF80)
#define CLASS_2_23B4269538917904_METHOD_2_40608173835C5AA5_OFFSET UNITYSDK_OFFSET(0x1648B750)
#define CLASS_2_23B4269538917904_METHOD_2_40B753F9E3E20E10_OFFSET UNITYSDK_OFFSET(0x1648C7B0)
#define CLASS_2_23B4269538917904_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1648C040)
#define CLASS_2_23B4269538917904_METHOD_2_481AC0E4E3F3D73B_OFFSET UNITYSDK_OFFSET(0x1648CBC0)
#define CLASS_2_23B4269538917904_METHOD_2_50F388BA53C37D92_OFFSET UNITYSDK_OFFSET(0x1648FC50)
#define CLASS_2_23B4269538917904_METHOD_2_5906F1C536BB1219_OFFSET UNITYSDK_OFFSET(0x1648FC60)
#define CLASS_2_23B4269538917904_METHOD_2_5A87F8FB13D73250_OFFSET UNITYSDK_OFFSET(0x1648D420)
#define CLASS_2_23B4269538917904_METHOD_2_63FAECEB1EEA5E64_OFFSET UNITYSDK_OFFSET(0x1648CA00)
#define CLASS_2_23B4269538917904_METHOD_2_6A4B1A9448AB8226_OFFSET UNITYSDK_OFFSET(0x1648F130)
#define CLASS_2_23B4269538917904_METHOD_2_734F347EA184E6F8_OFFSET UNITYSDK_OFFSET(0x1648CDB0)
#define CLASS_2_23B4269538917904_METHOD_2_77A72C81AB95B330_OFFSET UNITYSDK_OFFSET(0x1648F8A0)
#define CLASS_2_23B4269538917904_METHOD_2_7E462A97DE7ACFDA_OFFSET UNITYSDK_OFFSET(0x1648F630)
#define CLASS_2_23B4269538917904_METHOD_2_883BD5293AE4AFF3_OFFSET UNITYSDK_OFFSET(0x1648E070)
#define CLASS_2_23B4269538917904_METHOD_2_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x1648FBB0)
#define CLASS_2_23B4269538917904_METHOD_2_B5CA07811A0FF93E_OFFSET UNITYSDK_OFFSET(0x1648EBA0)
#define CLASS_2_23B4269538917904_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1648FAC0)
#define CLASS_2_23B4269538917904_METHOD_2_C96949C4D04F3F2A_OFFSET UNITYSDK_OFFSET(0x1648E6E0)
#define CLASS_2_23B4269538917904_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1648E4C0)
#define CLASS_2_23B4269538917904_METHOD_2_D204CF5051E6CFF4_OFFSET UNITYSDK_OFFSET(0x1648E5C0)
#define CLASS_2_23B4269538917904_METHOD_2_E2B0E7FFB101B839_OFFSET UNITYSDK_OFFSET(0x1648CC20)
#define CLASS_2_23B4269538917904_METHOD_2_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x1648FB10)
#define CLASS_2_23B4269538917904_METHOD_2_EA2CC7B622AB6FF5_OFFSET UNITYSDK_OFFSET(0x1648C0D0)
#define CLASS_2_23B4269538917904_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1648FBA0)
#define CLASS_2_23B4269538917904_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1648B910)
#define CLASS_2_23B4269538917904_METHOD_2_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x1648C9A0)
#define CLASS_2_23B4269538917904_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1648E2D0)
#define CLASS_2_23B4269538917904_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1648E470)
#define CLASS_2_23B4269538917904_TICK_OFFSET UNITYSDK_OFFSET(0x1648BA50)
#define CLASS_2_23B4269538917904__CCTOR_OFFSET UNITYSDK_OFFSET(0x1648FC90)
#define CLASS_2_23B4269538917904__CTOR_OFFSET UNITYSDK_OFFSET(0x1648D610)

inline static constexpr unsigned int Class_2_23B4269538917904_TypeDefinitionIndex = 54741;

class Class_2_23B4269538917904 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_23B4269538917904_TypeDefinitionIndex)->GetStaticField(0x2CC60);
	}
	::RPG::GameCore::LevelLookAtPositionInfo* Field_2_1; // 0x18
	::RPG::GameCore::LevelNpcLookAtTargetInfo* Field_2_2; // 0x20
	::RPG::Client::CharacterMonoAvatar* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::System::Func_2<::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*, ::System::Boolean>*>* Field_2_4; // 0x30
	::Struct_2_4C8316D252AABDF5 Field_2_5; // 0x38
	::RPG::GameCore::CharacterAnimZone* Field_2_6; // 0x58
	::RPG::Client::LookAtIK* Field_2_7; // 0x60
	::RPG::GameCore::OnEventCallBack* Field_2_8; // 0x68
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*>* Field_2_9; // 0x70
	::System::Nullable_1<::Struct_2_4C8316D252AABDF5> Field_2_10; // 0x78
	::System::Single Field_2_11; // 0xA0
	::RPG::GameCore::ENpcLookAtMode Field_2_12; // 0xA4
	::System::Boolean Field_2_13; // 0xA8
	::System::Boolean Field_2_14; // 0xA9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904__CCTOR_OFFSET))();
	}

	::System::Void Method_2_40608173835C5AA5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_40608173835C5AA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_40B753F9E3E20E10(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_40B753F9E3E20E10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_63FAECEB1EEA5E64(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_63FAECEB1EEA5E64_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E2B0E7FFB101B839(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_E2B0E7FFB101B839_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_734F347EA184E6F8(::Class_2_23B4269538917904* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_23B4269538917904*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_734F347EA184E6F8_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_29835514E31C399D(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_29835514E31C399D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_5A87F8FB13D73250(::RPG::GameCore::ELookAtTargetSource a1, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::ELookAtTargetSource, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_5A87F8FB13D73250_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_883BD5293AE4AFF3(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_883BD5293AE4AFF3_OFFSET))(this, a1);
	}

	::System::Void Method_2_04EE8ABA69EB21BB(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_04EE8ABA69EB21BB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_018E23A6BFBE4F07(::System::Nullable_1<::Struct_2_4C8316D252AABDF5> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_4C8316D252AABDF5>))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_018E23A6BFBE4F07_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D204CF5051E6CFF4(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_D204CF5051E6CFF4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B9466BF52112CE4(::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_4C8316D252AABDF5>*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_0B9466BF52112CE4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C96949C4D04F3F2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_C96949C4D04F3F2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B5CA07811A0FF93E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_B5CA07811A0FF93E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1F57FDEB24E6C2F6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_1F57FDEB24E6C2F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA2CC7B622AB6FF5(::System::Nullable_1<::Struct_2_4C8316D252AABDF5> a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_4C8316D252AABDF5>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_EA2CC7B622AB6FF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7E462A97DE7ACFDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_7E462A97DE7ACFDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A6BA667BEB66A7B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_3A6BA667BEB66A7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A4B1A9448AB8226(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_6A4B1A9448AB8226_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_77A72C81AB95B330(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_77A72C81AB95B330_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::RPG::Client::LookAtIK* Method_2_50F388BA53C37D92()
	{
		return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_50F388BA53C37D92_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_4C8316D252AABDF5> Method_2_5906F1C536BB1219()
	{
		return ((::System::Nullable_1<::Struct_2_4C8316D252AABDF5>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_5906F1C536BB1219_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_FEDE09C198114DBE_OFFSET))(this);
	}

	::RPG::GameCore::ELookAtTargetSource Method_2_481AC0E4E3F3D73B()
	{
		return ((::RPG::GameCore::ELookAtTargetSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_481AC0E4E3F3D73B_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B4269538917904_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
