#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EB67B065A0CE0512_SuperEventState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ElfNormalEventChanceConfig; }
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EB67B065A0CE0512_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F7C380)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_02420BB978CB093F_OFFSET UNITYSDK_OFFSET(0x18F7CFC0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_04965A8EE891B708_OFFSET UNITYSDK_OFFSET(0x18F7FB30)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_1FA3CEF14A2C4561_OFFSET UNITYSDK_OFFSET(0x18F7F210)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_214A0CD55BF5F2ED_OFFSET UNITYSDK_OFFSET(0x18F7C710)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_345C78EBB404731F_OFFSET UNITYSDK_OFFSET(0x18F7E9E0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x18F7D7E0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18F7C8F0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18F7C1E0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x18F7FA40)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x18F7C940)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x18F7DA60)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x18F7F950)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0x18F7FAC0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x18F7F5D0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x18F7D3B0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_8C7BAED46B9C7D65_OFFSET UNITYSDK_OFFSET(0x18F7F7F0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_8E0F13CE9596D9FD_OFFSET UNITYSDK_OFFSET(0x18F7E980)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_94F0450E73AB7B0B_OFFSET UNITYSDK_OFFSET(0x18F7F3F0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x18F7F9F0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18F7F740)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_ABE7715DB28B2DD1_1_OFFSET UNITYSDK_OFFSET(0x18F7DDB0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x18F7CA50)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_AC72D0112BCC7BF7_OFFSET UNITYSDK_OFFSET(0x18F7C9F0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18F7E500)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_B64E6D35718AD10A_OFFSET UNITYSDK_OFFSET(0x18F7C530)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x18F7EAC0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x18F7FB90)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_E611007E61AEC965_OFFSET UNITYSDK_OFFSET(0x18F7E580)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x18F7D2F0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_F2D815940C668A94_OFFSET UNITYSDK_OFFSET(0x18F7CE20)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x18F7F8B0)
#define CLASS_1_EB67B065A0CE0512__CTOR_OFFSET UNITYSDK_OFFSET(0x18F7C0A0)

inline static constexpr unsigned int Class_1_EB67B065A0CE0512_TypeDefinitionIndex = 73307;

class Class_1_EB67B065A0CE0512 : public ::System::Object
{
public:
	::Class_2_80F8710F847F1248* Field_1_0; // 0x10
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_1; // 0x18
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_2; // 0x20
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_3; // 0x28
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x40
	::Class_3_F4528A5C0F861AF2* Field_1_7; // 0x48
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_8; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1*>* Field_1_9; // 0x58
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_10; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_11; // 0x68
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_12; // 0x70
	::RPG::GameCore::ElfSuperEventTypeConfig* Field_1_13; // 0x78
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_14; // 0x80
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_1_15; // 0x88
	::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantNormalEventType>* Field_1_16; // 0x90
	::System::Int32 Field_1_17; // 0x98
	::System::Single Field_1_18; // 0x9C
	::System::Single Field_1_19; // 0xA0
	::RPG::GameCore::RestaurantSuperEventType Field_1_20; // 0xA4
	::System::Int32 Field_1_21; // 0xA8
	::System::Int32 Field_1_22; // 0xAC
	::System::Int32 Field_1_23; // 0xB0
	::System::Int32 Field_1_24; // 0xB4
	::System::Single Field_1_25; // 0xB8
	::Class_1_EB67B065A0CE0512_SuperEventState Field_1_26; // 0xBC
	::System::Int32 Field_1_27; // 0xC0
	::System::Single Field_1_28; // 0xC4
	::System::Int32 Field_1_29; // 0xC8

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_80F8710F847F1248* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_80F8710F847F1248*))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B64E6D35718AD10A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_B64E6D35718AD10A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::String* Method_1_214A0CD55BF5F2ED(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_214A0CD55BF5F2ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::String* Method_1_F2D815940C668A94()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_F2D815940C668A94_OFFSET))(this);
	}

	::System::Void Method_1_02420BB978CB093F(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_02420BB978CB093F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_80313B77C31AD02B_OFFSET))(this);
	}

	::System::Void Method_1_ABE7715DB28B2DD1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_ABE7715DB28B2DD1_1_OFFSET))(this);
	}

	::System::Void Method_1_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_35A1A641353400E6_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RPG::GameCore::RestaurantEmployeeType Method_1_8E0F13CE9596D9FD(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::RPG::GameCore::RestaurantEmployeeType(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_8E0F13CE9596D9FD_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameEntityType Method_1_345C78EBB404731F(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::RPG::GameCore::LittleGameEntityType(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_345C78EBB404731F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E611007E61AEC965(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_E611007E61AEC965_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD28994AFE636FFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_CD28994AFE636FFF_OFFSET))(this);
	}

	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Method_1_1FA3CEF14A2C4561(::RPG::GameCore::ElfNormalEventChanceConfig* a1, ::System::Single a2)
	{
		return ((::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1*(*)(::PVOID, ::RPG::GameCore::ElfNormalEventChanceConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_1FA3CEF14A2C4561_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_94F0450E73AB7B0B(::RPG::GameCore::RestaurantNormalEventType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_94F0450E73AB7B0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_8C7BAED46B9C7D65(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_8C7BAED46B9C7D65_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_AC72D0112BCC7BF7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_AC72D0112BCC7BF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04965A8EE891B708(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_04965A8EE891B708_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}
};
