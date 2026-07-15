#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"

class Class_0_16E4307DCC419505_425;
class Class_2_6D453965E755326A;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B71ACF974C8D4F21_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x16E92850)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_2A5728658D11952C_OFFSET UNITYSDK_OFFSET(0x16E92180)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_2FBFBCF7021F45DA_OFFSET UNITYSDK_OFFSET(0x16E90F70)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_41B0DC419524DD07_OFFSET UNITYSDK_OFFSET(0x16E929E0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x16E92330)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_2_OFFSET UNITYSDK_OFFSET(0x16E923F0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_3_OFFSET UNITYSDK_OFFSET(0x16E92480)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_4_OFFSET UNITYSDK_OFFSET(0x16E925F0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_5_OFFSET UNITYSDK_OFFSET(0x16E926C0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_6_OFFSET UNITYSDK_OFFSET(0x16E92790)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x16E922A0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_75D1D80E6A514E21_OFFSET UNITYSDK_OFFSET(0x16E91E20)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_77D3A713790E6153_OFFSET UNITYSDK_OFFSET(0x16E91CD0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_9357650FFF397494_OFFSET UNITYSDK_OFFSET(0x16E92240)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_AA85E3049519A98D_OFFSET UNITYSDK_OFFSET(0x16E91960)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x16E91030)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_CC355FE9517A09BB_OFFSET UNITYSDK_OFFSET(0x16E90E20)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_DEF2DE40AFA48D53_OFFSET UNITYSDK_OFFSET(0x16E929F0)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_E1E0872E0957BEE0_OFFSET UNITYSDK_OFFSET(0x16E92510)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_E75622EEC310B11F_OFFSET UNITYSDK_OFFSET(0x16E91860)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_FCF18F3CBCDFE6A7_1_OFFSET UNITYSDK_OFFSET(0x16E92990)
#define CLASS_2_B71ACF974C8D4F21_METHOD_2_FCF18F3CBCDFE6A7_OFFSET UNITYSDK_OFFSET(0x16E92940)
#define CLASS_2_B71ACF974C8D4F21_ONINIT_OFFSET UNITYSDK_OFFSET(0x16E8FD70)
#define CLASS_2_B71ACF974C8D4F21_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x16E908D0)
#define CLASS_2_B71ACF974C8D4F21__CTOR_OFFSET UNITYSDK_OFFSET(0x16E92A00)

inline static constexpr unsigned int Class_2_B71ACF974C8D4F21_TypeDefinitionIndex = 69983;

class Class_2_B71ACF974C8D4F21 : public ::Class_1_5BBB2050B3F3F683
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0x38
	::Class_2_6D453965E755326A* Field_2_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_2_7; // 0x48
	::RPG::GameCore::GameEntity* Field_2_8; // 0x50
	::System::Single Field_2_9; // 0x58
	::System::UInt32 Field_2_10; // 0x5C
	::System::UInt32 Field_2_11; // 0x60

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

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_2(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_3(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1E0872E0957BEE0(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_E1E0872E0957BEE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_4(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_5(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_6(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_5B0531D5B96D6B96_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_B71ACF974C8D4F21_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
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
