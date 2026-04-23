#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/SummonUnitFetchType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_6EE00E0FDA2B5B41.h"
#include "unitysdk/Struct_2_889E0D38E74661B7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_1F7B5F5E8BAE0D03;
class Class_1_2A28EC932DCA9FCF;
class Class_1_2CAAA2FDF9170110;
class Class_1_75C90DAFEEA96564;
class Class_2_D905714C1E15C1C8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_EAB32D6999AE04E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x966AB40)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_011527D8FB36A26F_OFFSET UNITYSDK_OFFSET(0x966D460)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x966EAB0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_0DF667B874E73355_OFFSET UNITYSDK_OFFSET(0x966CD60)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x966AF50)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_42073E1316C51A78_OFFSET UNITYSDK_OFFSET(0x966D750)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_446BE43D2AA5DB95_OFFSET UNITYSDK_OFFSET(0x966CA70)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_4AC6D299A307F0A8_OFFSET UNITYSDK_OFFSET(0x966E1F0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_4D893334E94C0148_OFFSET UNITYSDK_OFFSET(0x966AEF0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x966E060)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x966E1A0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x966D9A0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_6E7A8D76E6B5F951_OFFSET UNITYSDK_OFFSET(0x966D240)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x966EAA0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_84A90E474A745F6B_OFFSET UNITYSDK_OFFSET(0x966C610)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_9DBD959D061F1728_OFFSET UNITYSDK_OFFSET(0x966D880)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_A0E9059343D7DE00_OFFSET UNITYSDK_OFFSET(0x966D620)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_A65C34EBF50A1059_OFFSET UNITYSDK_OFFSET(0x966E660)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_B1476C314B32BFD8_OFFSET UNITYSDK_OFFSET(0x966E360)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0x966B000)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_B5DEAF67944C17D4_OFFSET UNITYSDK_OFFSET(0x966B1A0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_B7C427C510E7A2B8_OFFSET UNITYSDK_OFFSET(0x966DD60)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_B8DD1B0B439A4612_OFFSET UNITYSDK_OFFSET(0x966DC10)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_BBA19DBD2F09BBC3_OFFSET UNITYSDK_OFFSET(0x966CE40)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_C53DCE734C5CA1D1_OFFSET UNITYSDK_OFFSET(0x966DAD0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_DC59AEFB5515A284_OFFSET UNITYSDK_OFFSET(0x966EA90)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_DD31CDA05C0A797A_OFFSET UNITYSDK_OFFSET(0x966E410)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_E4AF744F07A32163_OFFSET UNITYSDK_OFFSET(0x966BDA0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x966E110)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_EEB7AD9AD74B5FBF_OFFSET UNITYSDK_OFFSET(0x966DF30)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_F426129AA7BE89D9_OFFSET UNITYSDK_OFFSET(0x966C4C0)
#define CLASS_1_EAB32D6999AE04E3_METHOD_1_FEAB37832CDA8227_OFFSET UNITYSDK_OFFSET(0x966DEA0)
#define CLASS_1_EAB32D6999AE04E3__CTOR_OFFSET UNITYSDK_OFFSET(0x966A850)

inline static constexpr unsigned int Class_1_EAB32D6999AE04E3_TypeDefinitionIndex = 56035;

class Class_1_EAB32D6999AE04E3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_889E0D38E74661B7>* Field_1_4; // 0x18
	::Il2CppArray<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::Class_1_75C90DAFEEA96564*>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_2A28EC932DCA9FCF*>* Field_1_3; // 0x38
	::RPG::GameCore::GameWorld* Field_1_0; // 0x40
	::System::Collections::Generic::Queue_1<::RPG::GameCore::GameEntity*>* Field_1_7; // 0x48
	::Struct_2_6EE00E0FDA2B5B41 Field_1_9; // 0x50
	::System::UInt32 Field_1_8; // 0x64

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4D893334E94C0148(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_4D893334E94C0148_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B5DEAF67944C17D4(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::MVector3 a9, ::Class_2_D905714C1E15C1C8* a10, ::System::Action_1<::RPG::GameCore::GameEntity*>* a11, ::RPG::GameCore::EntityClassifyType a12, ::System::Boolean a13, ::Class_1_2CAAA2FDF9170110* a14)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::Class_2_D905714C1E15C1C8*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityClassifyType, ::System::Boolean, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_B5DEAF67944C17D4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Boolean Method_1_F426129AA7BE89D9(::Class_2_D905714C1E15C1C8* a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D905714C1E15C1C8*, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_F426129AA7BE89D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84A90E474A745F6B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_84A90E474A745F6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E4AF744F07A32163(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_E4AF744F07A32163_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_446BE43D2AA5DB95()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_446BE43D2AA5DB95_OFFSET))(this);
	}

	::System::Void Method_1_0DF667B874E73355(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SummonUnitFetchType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitFetchType))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_0DF667B874E73355_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_1F7B5F5E8BAE0D03* Method_1_6E7A8D76E6B5F951(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6)
	{
		return ((::Class_1_1F7B5F5E8BAE0D03*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_6E7A8D76E6B5F951_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_011527D8FB36A26F(::Class_1_1F7B5F5E8BAE0D03* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1F7B5F5E8BAE0D03*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_011527D8FB36A26F_OFFSET))(this, a1);
	}

	::Class_1_1F7B5F5E8BAE0D03* Method_1_A0E9059343D7DE00(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_1F7B5F5E8BAE0D03*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_A0E9059343D7DE00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_42073E1316C51A78(::Class_1_1F7B5F5E8BAE0D03* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1F7B5F5E8BAE0D03*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_42073E1316C51A78_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9DBD959D061F1728(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_9DBD959D061F1728_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_1F7B5F5E8BAE0D03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F7B5F5E8BAE0D03*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C53DCE734C5CA1D1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_C53DCE734C5CA1D1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_B8DD1B0B439A4612(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_B8DD1B0B439A4612_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_1_BBA19DBD2F09BBC3(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SummonUnitFetchType a3)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitFetchType))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_BBA19DBD2F09BBC3_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntityList* Method_1_B7C427C510E7A2B8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_B7C427C510E7A2B8_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FEAB37832CDA8227(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_FEAB37832CDA8227_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEB7AD9AD74B5FBF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_EEB7AD9AD74B5FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_75C90DAFEEA96564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90DAFEEA96564*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_75C90DAFEEA96564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90DAFEEA96564*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4AC6D299A307F0A8(::RPG::Client::GamePlayLockTarget a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePlayLockTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_4AC6D299A307F0A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1476C314B32BFD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_B1476C314B32BFD8_OFFSET))(this);
	}

	::System::Void Method_1_DD31CDA05C0A797A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_DD31CDA05C0A797A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A65C34EBF50A1059(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_A65C34EBF50A1059_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_B15E763C95CF0A5B_OFFSET))(this);
	}

	::RPG::GameCore::GameWorld* Method_1_DC59AEFB5515A284()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_DC59AEFB5515A284_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_70ABAF7F0B6E54DF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_70ABAF7F0B6E54DF_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};
