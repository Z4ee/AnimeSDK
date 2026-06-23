#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A.h"
#include "unitysdk/Class_2_0EAF9D2EC965AF17.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_33;
class Class_1_449B1BB2E3AA2D13;
class Class_1_8A318C1854372DA1;
class Class_1_CF69DA127BBBD8F0;
class Class_1_D9E0C80DACE89226;
class Class_2_11E43C7F4F662EE8_Class_1_9DAA8B18D8DB3992;
class Class_2_73836654F8931C75;
class Class_2_CD42631606067E6B;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::UniversalGame { class UIBigSceneDungeonResultPageContext; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_568600B6F5743120_METHOD_3_0A17961F2C7839AC_OFFSET UNITYSDK_OFFSET(0x162149B0)
#define CLASS_3_568600B6F5743120_METHOD_3_0CD1E239AC13EBB7_1_OFFSET UNITYSDK_OFFSET(0x162122A0)
#define CLASS_3_568600B6F5743120_METHOD_3_0CD1E239AC13EBB7_OFFSET UNITYSDK_OFFSET(0x16211D40)
#define CLASS_3_568600B6F5743120_METHOD_3_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x16211320)
#define CLASS_3_568600B6F5743120_METHOD_3_10D435BC3472D257_OFFSET UNITYSDK_OFFSET(0x16210840)
#define CLASS_3_568600B6F5743120_METHOD_3_130EF0DE2DF0C03B_OFFSET UNITYSDK_OFFSET(0x1620FF10)
#define CLASS_3_568600B6F5743120_METHOD_3_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1620F530)
#define CLASS_3_568600B6F5743120_METHOD_3_1E8795D37168E4BE_OFFSET UNITYSDK_OFFSET(0x16214040)
#define CLASS_3_568600B6F5743120_METHOD_3_1F6958AD3C17A168_OFFSET UNITYSDK_OFFSET(0x1620FEB0)
#define CLASS_3_568600B6F5743120_METHOD_3_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1620F9A0)
#define CLASS_3_568600B6F5743120_METHOD_3_245950D4F0985AD9_OFFSET UNITYSDK_OFFSET(0x162152E0)
#define CLASS_3_568600B6F5743120_METHOD_3_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1620EDE0)
#define CLASS_3_568600B6F5743120_METHOD_3_3783F0665AED1E64_OFFSET UNITYSDK_OFFSET(0x16213FC0)
#define CLASS_3_568600B6F5743120_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x162107E0)
#define CLASS_3_568600B6F5743120_METHOD_3_441BE69E17DDE155_OFFSET UNITYSDK_OFFSET(0x16212830)
#define CLASS_3_568600B6F5743120_METHOD_3_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x16212BE0)
#define CLASS_3_568600B6F5743120_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x16210CD0)
#define CLASS_3_568600B6F5743120_METHOD_3_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x162141F0)
#define CLASS_3_568600B6F5743120_METHOD_3_61C7A339716873D9_OFFSET UNITYSDK_OFFSET(0x162118D0)
#define CLASS_3_568600B6F5743120_METHOD_3_61F6FB308DDC9A8C_OFFSET UNITYSDK_OFFSET(0x162113B0)
#define CLASS_3_568600B6F5743120_METHOD_3_63BB0C5C73D7E321_OFFSET UNITYSDK_OFFSET(0x16214020)
#define CLASS_3_568600B6F5743120_METHOD_3_6BF6C04E05D122F5_OFFSET UNITYSDK_OFFSET(0x16211870)
#define CLASS_3_568600B6F5743120_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16211040)
#define CLASS_3_568600B6F5743120_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1620F330)
#define CLASS_3_568600B6F5743120_METHOD_3_91D31EB0AF87B529_OFFSET UNITYSDK_OFFSET(0x16214CB0)
#define CLASS_3_568600B6F5743120_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16214170)
#define CLASS_3_568600B6F5743120_METHOD_3_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x162144F0)
#define CLASS_3_568600B6F5743120_METHOD_3_98631775ED931D69_OFFSET UNITYSDK_OFFSET(0x1620F9F0)
#define CLASS_3_568600B6F5743120_METHOD_3_98DDB8E70E097A73_OFFSET UNITYSDK_OFFSET(0x16213CF0)
#define CLASS_3_568600B6F5743120_METHOD_3_9BFC01030FE9FD8B_OFFSET UNITYSDK_OFFSET(0x16214610)
#define CLASS_3_568600B6F5743120_METHOD_3_9F2B1BAC589A86DD_OFFSET UNITYSDK_OFFSET(0x16210320)
#define CLASS_3_568600B6F5743120_METHOD_3_A032203B68A61CDC_OFFSET UNITYSDK_OFFSET(0x16213730)
#define CLASS_3_568600B6F5743120_METHOD_3_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x16211170)
#define CLASS_3_568600B6F5743120_METHOD_3_A0C4A5F85F3CE1DD_OFFSET UNITYSDK_OFFSET(0x162115A0)
#define CLASS_3_568600B6F5743120_METHOD_3_A196A79592FE728E_OFFSET UNITYSDK_OFFSET(0x16211A30)
#define CLASS_3_568600B6F5743120_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x16214C20)
#define CLASS_3_568600B6F5743120_METHOD_3_B08AA37673A61377_OFFSET UNITYSDK_OFFSET(0x16215130)
#define CLASS_3_568600B6F5743120_METHOD_3_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x16214580)
#define CLASS_3_568600B6F5743120_METHOD_3_C0688C2E36BAE128_1_OFFSET UNITYSDK_OFFSET(0x16214B70)
#define CLASS_3_568600B6F5743120_METHOD_3_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x16214460)
#define CLASS_3_568600B6F5743120_METHOD_3_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x16213F30)
#define CLASS_3_568600B6F5743120_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162140E0)
#define CLASS_3_568600B6F5743120_METHOD_3_CD672FB13311723F_OFFSET UNITYSDK_OFFSET(0x162143C0)
#define CLASS_3_568600B6F5743120_METHOD_3_CE9C88E61BCE45FF_OFFSET UNITYSDK_OFFSET(0x1620EE40)
#define CLASS_3_568600B6F5743120_METHOD_3_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x16210450)
#define CLASS_3_568600B6F5743120_METHOD_3_D14715BFE4FFF4E1_OFFSET UNITYSDK_OFFSET(0x16212E10)
#define CLASS_3_568600B6F5743120_METHOD_3_D20BD6C944921F7A_OFFSET UNITYSDK_OFFSET(0x1620F8F0)
#define CLASS_3_568600B6F5743120_METHOD_3_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x16214030)
#define CLASS_3_568600B6F5743120_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x16210D60)
#define CLASS_3_568600B6F5743120_METHOD_3_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x162142A0)
#define CLASS_3_568600B6F5743120_METHOD_3_E37BAF92D63FCB76_OFFSET UNITYSDK_OFFSET(0x16211650)
#define CLASS_3_568600B6F5743120_METHOD_3_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x162149E0)
#define CLASS_3_568600B6F5743120_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x16214830)
#define CLASS_3_568600B6F5743120_METHOD_3_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x16214050)
#define CLASS_3_568600B6F5743120_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1620EDF0)
#define CLASS_3_568600B6F5743120_METHOD_3_EBAC71FBE1837205_1_OFFSET UNITYSDK_OFFSET(0x162112D0)
#define CLASS_3_568600B6F5743120_METHOD_3_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x16210FF0)
#define CLASS_3_568600B6F5743120_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16214810)
#define CLASS_3_568600B6F5743120_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x16214B60)
#define CLASS_3_568600B6F5743120_METHOD_3_F2B43F32A13B7F73_OFFSET UNITYSDK_OFFSET(0x16215200)
#define CLASS_3_568600B6F5743120_METHOD_3_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1620FE90)
#define CLASS_3_568600B6F5743120_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x162149C0)
#define CLASS_3_568600B6F5743120_METHOD_3_F626245813283B0B_OFFSET UNITYSDK_OFFSET(0x16214820)
#define CLASS_3_568600B6F5743120__CCTOR_OFFSET UNITYSDK_OFFSET(0x16213F10)
#define CLASS_3_568600B6F5743120__CTOR_OFFSET UNITYSDK_OFFSET(0x16213D50)

inline static constexpr unsigned int Class_3_568600B6F5743120_TypeDefinitionIndex = 78386;

class Class_3_568600B6F5743120 : public ::Class_2_0EAF9D2EC965AF17
{
public:
	static ::System::Boolean* StaticGet_Field_3_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF800);
	}
	static ::System::Boolean* StaticGet_Field_3_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF801);
	}
	static ::System::Boolean* StaticGet_Field_3_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF802);
	}
	static ::System::Boolean* StaticGet_Field_3_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF803);
	}
	static ::System::Boolean* StaticGet_Field_3_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF804);
	}
	static ::System::Boolean* StaticGet_Field_3_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF805);
	}
	static ::System::Boolean* StaticGet_Field_3_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF806);
	}
	static ::System::Boolean* StaticGet_Field_3_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF807);
	}
	static ::System::Boolean* StaticGet_Field_3_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF808);
	}
	static ::System::Boolean* StaticGet_Field_3_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF809);
	}
	static ::System::Boolean* StaticGet_Field_3_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF80A);
	}
	static ::System::Boolean* StaticGet_Field_3_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_568600B6F5743120_TypeDefinitionIndex)->GetStaticField(0xF80B);
	}
	// static const ::System::String* Field_3_20; // 0x0
	// static const ::System::String* Field_3_21; // 0x0
	// static const ::System::String* Field_3_22; // 0x0
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::String* Field_3_24; // 0x0
	::Class_2_11E43C7F4F662EE8_Class_1_9DAA8B18D8DB3992* Field_3_3; // 0xD0
	::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext* Field_3_19; // 0xD8
	::System::Collections::Generic::HashSet_1<::Class_1_D9E0C80DACE89226*>* Field_3_18; // 0xE0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_17; // 0xF0
	::System::Int32 Field_3_1; // 0xF8
	::System::Int32 Field_3_0; // 0xFC
	::System::Boolean Field_3_16; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120__CCTOR_OFFSET))();
	}

	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Method_3_2ACF2A61FB239D23()
	{
		return ((::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_8A318C1854372DA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A318C1854372DA1*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CE9C88E61BCE45FF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_CE9C88E61BCE45FF_OFFSET))(this, a1);
	}

	::System::Void Method_3_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_3_D20BD6C944921F7A(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_D20BD6C944921F7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_205A14011EEBDE57(::Enum_3_A6875CC70890641D& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_A6875CC70890641D&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_98631775ED931D69(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_98631775ED931D69_OFFSET))(this, a1);
	}

	::System::String* Method_3_130EF0DE2DF0C03B(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_130EF0DE2DF0C03B_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_9F2B1BAC589A86DD(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_9F2B1BAC589A86DD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_10D435BC3472D257(::Class_2_CD42631606067E6B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CD42631606067E6B*&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_10D435BC3472D257_OFFSET))(this, a1);
	}

	::System::Void Method_3_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_3_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_3_A0374C870A27A45B(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_3_61F6FB308DDC9A8C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_61F6FB308DDC9A8C_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_A0C4A5F85F3CE1DD(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_A0C4A5F85F3CE1DD_OFFSET))(this, a1);
	}

	::System::Void Method_3_E37BAF92D63FCB76(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_E37BAF92D63FCB76_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6BF6C04E05D122F5(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_6BF6C04E05D122F5_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_3_61C7A339716873D9()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_61C7A339716873D9_OFFSET))(this);
	}

	::System::Boolean Method_3_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_3_C50B93169B85DAEA(::Class_0_16E4307DCC419505_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_33*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_3_3783F0665AED1E64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_3783F0665AED1E64_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_3_0CD1E239AC13EBB7()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_0CD1E239AC13EBB7_OFFSET))(this);
	}

	::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext* Method_3_63BB0C5C73D7E321()
	{
		return ((::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_63BB0C5C73D7E321_OFFSET))(this);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_3_441BE69E17DDE155()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_441BE69E17DDE155_OFFSET))(this);
	}

	::System::Void Method_3_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_D56C1A4C75B97C47_OFFSET))(this);
	}

	::System::Void Method_3_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_102A1038C38883F3_OFFSET))(this);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_3_A196A79592FE728E()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_A196A79592FE728E_OFFSET))(this);
	}

	::System::Void Method_3_1E8795D37168E4BE(::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_1E8795D37168E4BE_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9_1(::Class_1_8A318C1854372DA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A318C1854372DA1*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*> Method_3_D14715BFE4FFF4E1(::Class_2_73836654F8931C75* a1)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*>(*)(::PVOID, ::Class_2_73836654F8931C75*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_D14715BFE4FFF4E1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_EBAC71FBE1837205_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_EBAC71FBE1837205_1_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_3_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Boolean Method_3_CD672FB13311723F(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_CD672FB13311723F_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_3_0CD1E239AC13EBB7_1()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_0CD1E239AC13EBB7_1_OFFSET))(this);
	}

	::System::Void Method_3_C0688C2E36BAE128(::Class_1_D9E0C80DACE89226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9E0C80DACE89226*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_3_98511BB23D2E3748(::Class_2_CD42631606067E6B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CD42631606067E6B*&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_98511BB23D2E3748_OFFSET))(this, a1);
	}

	static ::MoleMole::Config::TimePeriodType Method_3_1F6958AD3C17A168(::Enum_3_AB9CCA0B2E05A401 a1)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::Enum_3_AB9CCA0B2E05A401))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_1F6958AD3C17A168_OFFSET))(a1);
	}

	static ::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_84B92802FDAFF6C8_OFFSET))();
	}

	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* Method_3_A032203B68A61CDC(::Class_2_73836654F8931C75* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*(*)(::PVOID, ::Class_2_73836654F8931C75*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_A032203B68A61CDC_OFFSET))(this, a1);
	}

	::System::Void Method_3_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_3_9BFC01030FE9FD8B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_9BFC01030FE9FD8B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_11E43C7F4F662EE8_Class_1_9DAA8B18D8DB3992* Method_3_F626245813283B0B()
	{
		return ((::Class_2_11E43C7F4F662EE8_Class_1_9DAA8B18D8DB3992*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_F626245813283B0B_OFFSET))(this);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_3_0A17961F2C7839AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_0A17961F2C7839AC_OFFSET))(this);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_3_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_C0688C2E36BAE128_1(::Class_1_D9E0C80DACE89226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9E0C80DACE89226*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_C0688C2E36BAE128_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_3_91D31EB0AF87B529(::System::Boolean& a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_91D31EB0AF87B529_OFFSET))(this, a1);
	}

	::System::String* Method_3_B08AA37673A61377(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_B08AA37673A61377_OFFSET))(this, a1);
	}

	::System::Void Method_3_F2B43F32A13B7F73(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_F2B43F32A13B7F73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_245950D4F0985AD9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_245950D4F0985AD9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_3_98DDB8E70E097A73(::System::Boolean& a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_568600B6F5743120_METHOD_3_98DDB8E70E097A73_OFFSET))(this, a1);
	}
};
