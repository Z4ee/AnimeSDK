#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DungeonRandomMemberSet; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350AF20)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1350ACB0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1350AF80)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_17F27BE4B2C7C8C2_OFFSET UNITYSDK_OFFSET(0x1350B330)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1350AD30)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1350ABA0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_A31956DFFF077788_OFFSET UNITYSDK_OFFSET(0x1350B180)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1350AB50)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1350ACA0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1350B170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonRandomMemberByDifficulty_TypeDefinitionIndex = 41538;

	class DungeonRandomMemberByDifficulty : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::DungeonRandomMemberSet*>* RandomSet; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DungeonRandomMemberByDifficulty* Method_2_A31956DFFF077788(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DungeonRandomMemberByDifficulty*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_A31956DFFF077788_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::DungeonRandomMemberByDifficulty* Method_2_17F27BE4B2C7C8C2(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DungeonRandomMemberByDifficulty*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_METHOD_2_17F27BE4B2C7C8C2_OFFSET))(a1);
		}
	};
}
