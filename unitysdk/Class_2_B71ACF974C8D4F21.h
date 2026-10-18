#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"

class Class_0_16E4307DCC419505_547;
class Class_2_A9706286F82822E7;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B71ACF974C8D4F21_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x15B75910)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_2A5728658D11952C_OFFSET UNITYSDK_OFFSET(0x15B75240)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_2FBFBCF7021F45DA_OFFSET UNITYSDK_OFFSET(0x15B74060)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_41B0DC419524DD07_OFFSET UNITYSDK_OFFSET(0x15B75AA0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x15B753F0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_2_OFFSET UNITYSDK_OFFSET(0x15B754B0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_3_OFFSET UNITYSDK_OFFSET(0x15B75540)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_4_OFFSET UNITYSDK_OFFSET(0x15B756B0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_5_OFFSET UNITYSDK_OFFSET(0x15B75780)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_6_OFFSET UNITYSDK_OFFSET(0x15B75850)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x15B75360)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_75D1D80E6A514E21_OFFSET UNITYSDK_OFFSET(0x15B74EE0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_77D3A713790E6153_OFFSET UNITYSDK_OFFSET(0x15B74D90)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_9357650FFF397494_OFFSET UNITYSDK_OFFSET(0x15B75300)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_AA85E3049519A98D_OFFSET UNITYSDK_OFFSET(0x15B74A20)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x15B74120)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_CC355FE9517A09BB_OFFSET UNITYSDK_OFFSET(0x15B73F10)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_DEF2DE40AFA48D53_OFFSET UNITYSDK_OFFSET(0x15B75AB0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_E1E0872E0957BEE0_OFFSET UNITYSDK_OFFSET(0x15B755D0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_E75622EEC310B11F_OFFSET UNITYSDK_OFFSET(0x15B74920)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_FCF18F3CBCDFE6A7_1_OFFSET UNITYSDK_OFFSET(0x15B75A50)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_FCF18F3CBCDFE6A7_OFFSET UNITYSDK_OFFSET(0x15B75A00)
#define CLASS_2_B71ACF974C8D4F21_ONINIT_OFFSET UNITYSDK_OFFSET(0x15B72E20)
#define CLASS_2_B71ACF974C8D4F21_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x15B739C0)
#define CLASS_2_B71ACF974C8D4F21__CTOR_OFFSET UNITYSDK_OFFSET(0x15B75AC0)

inline static constexpr unsigned int Class_2_B71ACF974C8D4F21_TypeDefinitionIndex = 73336;

class Class_2_B71ACF974C8D4F21 : public ::Class_1_5BBB2050B3F3F683
{
public:
	// static const ::System::String* CEJJPOBKHFC; // 0x0
	// static const ::System::String* PJPBKFLNFHE; // 0x0
	::RPG::GameCore::GameEntity* GIFFANEAEHP; // 0x20
	::Class_2_A9706286F82822E7* PFLOGEDPGJJ; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EDBCFFAHJBF; // 0x30
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* BAIFPLAOGNK; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JIAIKBBNHEC; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* GKCCIEKOBFA; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* GGONANOOJCL; // 0x50
	::System::UInt32 NHOEOLJECOA; // 0x58
	::System::Single JNEENKLEJNK; // 0x5C
	::System::UInt32 FOKCIMLGDPO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_CC355FE9517A09BB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterResourceLoadOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterResourceLoadOption))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_CC355FE9517A09BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2FBFBCF7021F45DA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_2FBFBCF7021F45DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E75622EEC310B11F(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_E75622EEC310B11F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AA85E3049519A98D(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_AA85E3049519A98D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_77D3A713790E6153(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_77D3A713790E6153_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2A5728658D11952C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_2A5728658D11952C_OFFSET))(this, a1);
	}

	::System::Void Method_2_75D1D80E6A514E21(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_75D1D80E6A514E21_OFFSET))(this, a1);
	}

	::System::Void Method_2_9357650FFF397494(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_9357650FFF397494_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_2(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_3(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1E0872E0957BEE0(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_E1E0872E0957BEE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_4(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_5(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_6(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCF18F3CBCDFE6A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_FCF18F3CBCDFE6A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCF18F3CBCDFE6A7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_FCF18F3CBCDFE6A7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Method_2_41B0DC419524DD07()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_41B0DC419524DD07_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* Method_2_DEF2DE40AFA48D53()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_DEF2DE40AFA48D53_OFFSET))(this);
	}
};
