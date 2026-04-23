#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_75C90E178B164D38;
class Class_1_867B6CE75953535A;
class Class_1_CED0702510CFFDAF;
class Class_1_EBA383B8D63056FF;
class Class_2_C386A74518D39C8B;
class Class_3_F28E9D8B5D95EC97;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TRFCameraComponentConfig; }
namespace RPG::GameCore { class TimeRelayFlameGameConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_916CB42418747827_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x10AEDCA0)
#define CLASS_2_916CB42418747827_METHOD_2_2CC631B339284766_OFFSET UNITYSDK_OFFSET(0x10AECC50)
#define CLASS_2_916CB42418747827_METHOD_2_33BF78C75F854546_OFFSET UNITYSDK_OFFSET(0x10AF00E0)
#define CLASS_2_916CB42418747827_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x10AEE330)
#define CLASS_2_916CB42418747827_METHOD_2_3A5C6F704296ADFC_OFFSET UNITYSDK_OFFSET(0x10AEEE70)
#define CLASS_2_916CB42418747827_METHOD_2_45C6EE7274A71C4B_OFFSET UNITYSDK_OFFSET(0x10AEFB70)
#define CLASS_2_916CB42418747827_METHOD_2_47AA2E710E0EED0A_OFFSET UNITYSDK_OFFSET(0x10AEF280)
#define CLASS_2_916CB42418747827_METHOD_2_4A92540D4374B8D9_OFFSET UNITYSDK_OFFSET(0x10AECA40)
#define CLASS_2_916CB42418747827_METHOD_2_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0x10AEFE60)
#define CLASS_2_916CB42418747827_METHOD_2_5DC9989DD20A6DEF_OFFSET UNITYSDK_OFFSET(0x10AEFC50)
#define CLASS_2_916CB42418747827_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x10AEF1C0)
#define CLASS_2_916CB42418747827_METHOD_2_A12DAB7A1C07C3DA_OFFSET UNITYSDK_OFFSET(0x10AEFBE0)
#define CLASS_2_916CB42418747827_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x10AEE730)
#define CLASS_2_916CB42418747827_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x10AEFF40)
#define CLASS_2_916CB42418747827_METHOD_2_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x10AEFF90)
#define CLASS_2_916CB42418747827_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x10AEFEF0)
#define CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_1_OFFSET UNITYSDK_OFFSET(0x10AEFA20)
#define CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_2_OFFSET UNITYSDK_OFFSET(0x10AEFA90)
#define CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_3_OFFSET UNITYSDK_OFFSET(0x10AEFB00)
#define CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_OFFSET UNITYSDK_OFFSET(0x10AEF9B0)
#define CLASS_2_916CB42418747827_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x10AEF340)
#define CLASS_2_916CB42418747827_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10AEF6E0)
#define CLASS_2_916CB42418747827_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10AEC950)
#define CLASS_2_916CB42418747827_METHOD_2_CA20A96113B135EC_1_OFFSET UNITYSDK_OFFSET(0x10AF02E0)
#define CLASS_2_916CB42418747827_METHOD_2_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x10AF0180)
#define CLASS_2_916CB42418747827_METHOD_2_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x10AED8C0)
#define CLASS_2_916CB42418747827_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x10AEFFE0)
#define CLASS_2_916CB42418747827_METHOD_2_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x10AEF130)
#define CLASS_2_916CB42418747827_METHOD_2_F62A76C6284AD01E_OFFSET UNITYSDK_OFFSET(0x10AEF810)
#define CLASS_2_916CB42418747827_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x10AEFD70)
#define CLASS_2_916CB42418747827__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10AEE210)
#define CLASS_2_916CB42418747827__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AF0600)
#define CLASS_2_916CB42418747827__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF0440)
#define CLASS_2_916CB42418747827__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x10AED350)
#define CLASS_2_916CB42418747827__ONINIT_OFFSET UNITYSDK_OFFSET(0x10AEC1B0)
#define CLASS_2_916CB42418747827__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10AEE250)
#define CLASS_2_916CB42418747827__ONTICK_OFFSET UNITYSDK_OFFSET(0x10AEDA50)
#define CLASS_2_916CB42418747827___IFIXBASEPROXY__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10AF0780)
#define CLASS_2_916CB42418747827___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x10AF06B0)
#define CLASS_2_916CB42418747827___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x10AF0640)
#define CLASS_2_916CB42418747827___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10AF07F0)
#define CLASS_2_916CB42418747827___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10AF0710)

inline static constexpr unsigned int Class_2_916CB42418747827_TypeDefinitionIndex = 55719;

class Class_2_916CB42418747827 : public ::Class_1_151B93D9C4BBDCA4
{
public:
	static ::RPG::GameCore::TimeRelayFlameGameConfig** StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::TimeRelayFlameGameConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_916CB42418747827_TypeDefinitionIndex)->GetStaticField(0x15280);
	}
	static ::System::String** StaticGet_Field_2_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_916CB42418747827_TypeDefinitionIndex)->GetStaticField(0x15288);
	}
	::Class_1_867B6CE75953535A* Field_2_1; // 0x78
	::System::Collections::Generic::List_1<::Class_1_EBA383B8D63056FF*>* Field_2_4; // 0x80
	::RPG::Client::AchievementData* Field_2_23; // 0x88
	::RPG::Client::LuaUIController* Field_2_5; // 0x90
	::Class_3_F28E9D8B5D95EC97* Field_2_3; // 0x98
	::Class_2_C386A74518D39C8B* Field_2_2; // 0xA0
	::RPG::Client::AchievementData* Field_2_24; // 0xA8
	::RPG::GameCore::TRFCameraComponentConfig* Field_2_12; // 0xB0
	::Class_1_CED0702510CFFDAF* Field_2_7; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_21; // 0xC0
	::System::Single Field_2_14; // 0xC8
	::System::Nullable_1<::System::Single> Field_2_8; // 0xCC
	::System::Single Field_2_13; // 0xD4
	::System::Int32 Field_2_19; // 0xD8
	::UnityEngine::Vector3 Field_2_10; // 0xDC
	::System::Int32 Field_2_16; // 0xE8
	::System::Nullable_1<::System::Single> Field_2_9; // 0xEC
	::System::UInt32 Field_2_17; // 0xF4
	::System::UInt32 Field_2_18; // 0xF8
	::System::Single Field_2_15; // 0xFC
	::System::Boolean Field_2_20; // 0x100
	::System::Boolean Field_2_6; // 0x101
	::UnityEngine::Vector3 Field_2_11; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__CCTOR_OFFSET))();
	}

	::System::Void _OnInit(::Class_1_75C90E178B164D38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A5C6F704296ADFC(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_3A5C6F704296ADFC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_EC61075536D10822(::Class_1_EBA383B8D63056FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBA383B8D63056FF*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_EBA383B8D63056FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBA383B8D63056FF*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F62A76C6284AD01E(::RPG::Client::AchievementData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_F62A76C6284AD01E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_47AA2E710E0EED0A(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_47AA2E710E0EED0A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A77870C566864FEA_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_45C6EE7274A71C4B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_45C6EE7274A71C4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A12DAB7A1C07C3DA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A12DAB7A1C07C3DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_5DC9989DD20A6DEF(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_5DC9989DD20A6DEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_2_4A92540D4374B8D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_4A92540D4374B8D9_OFFSET))(this);
	}

	::System::Void Method_2_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_2_2CC631B339284766(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_2CC631B339284766_OFFSET))(this, a1);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_2_5CC589A90C8895C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_5CC589A90C8895C1_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_A36150C5DCC8409E_2_OFFSET))(this);
	}

	::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_33BF78C75F854546(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_33BF78C75F854546_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA20A96113B135EC_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827_METHOD_2_CA20A96113B135EC_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_75C90E178B164D38* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827___IFIXBASEPROXY__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916CB42418747827___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, P0);
	}
};
