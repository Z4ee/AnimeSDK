#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1059;
class Class_1_9CAA42EF32347EE5_4;
class Class_1_F41834AAE9ED4443;
class Class_2_DDCE80A560ADC71B_1;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_0A4471CBCF67C562_OFFSET UNITYSDK_OFFSET(0x15086D60)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x15086480)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_16B3FD5FE001E553_OFFSET UNITYSDK_OFFSET(0x15085D60)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_1E0EA1AC7E2D9526_OFFSET UNITYSDK_OFFSET(0x150868B0)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x15086900)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0x15086C40)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0x150866B0)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_3DCAF09BEB5CADD1_OFFSET UNITYSDK_OFFSET(0x150865B0)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x15086000)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x15086430)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0x15086560)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x15086A60)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15086960)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0x15086820)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_D5DAA0189AB561CA_OFFSET UNITYSDK_OFFSET(0x15086780)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x15086A10)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_FC21FC07A06ACCCD_OFFSET UNITYSDK_OFFSET(0x15086B00)
#define CLASS_2_F52F198CBBF4B801_1_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15086EB0)
#define CLASS_2_F52F198CBBF4B801_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15086F60)
#define CLASS_2_F52F198CBBF4B801_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x15085F70)

inline static constexpr unsigned int Class_2_F52F198CBBF4B801_1_TypeDefinitionIndex = 68732;

class Class_2_F52F198CBBF4B801_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::RPG::Client::UISkillIndex Field_2_0; // 0x0
	// static const ::RPG::Client::UISkillIndex Field_2_1; // 0x0
	::RPG::GameCore::GameEntity* Field_2_2; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_3; // 0x68
	::Class_2_DDCE80A560ADC71B_1* Field_2_4; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_1059*>* Field_2_5; // 0x78
	::UnityEngine::Animator* Field_2_6; // 0x80
	::RPG::Client::LocalizedText* Field_2_7; // 0x88
	::Class_2_DDCE80A560ADC71B_1* Field_2_8; // 0x90
	::System::Int32 Field_2_9; // 0x98
	::System::Boolean Field_2_10; // 0x9C
	::System::Int32 Field_2_11; // 0xA0
	::System::Int32 Field_2_12; // 0xA4
	::System::Int32 Field_2_13; // 0xA8
	::System::Int32 Field_2_14; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_16B3FD5FE001E553(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_16B3FD5FE001E553_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_875768E9C85840D0(::Class_1_9CAA42EF32347EE5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_4*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_875768E9C85840D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CDD0248353333ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_3CDD0248353333ED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>* Method_2_D5DAA0189AB561CA(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_D5DAA0189AB561CA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_2_1E0EA1AC7E2D9526(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_1E0EA1AC7E2D9526_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_3DCAF09BEB5CADD1(::Class_1_9CAA42EF32347EE5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_4*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_3DCAF09BEB5CADD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC21FC07A06ACCCD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_FC21FC07A06ACCCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Boolean Method_2_32460A23F1A1DEF1(::Class_1_F41834AAE9ED4443* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F41834AAE9ED4443*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_32460A23F1A1DEF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A4471CBCF67C562(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_0A4471CBCF67C562_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801_1_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}
};
