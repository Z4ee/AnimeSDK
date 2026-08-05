#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class GroupMemberStateValue; }
namespace MoleMole::Config { class NumIntervalByDifficulty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E11F0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E0CB0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1B4E0D30)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_METHOD_1_BBDFD09444275410_OFFSET UNITYSDK_OFFSET(0x1B4E1250)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E15C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonRandomMemberSet_TypeDefinitionIndex = 69344;

	class DungeonRandomMemberSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GamePlayTagList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::GroupMemberStateValue*>* StateValueList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::NumIntervalByDifficulty*>* NumIntervalByDifficultyList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_BBDFD09444275410(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_METHOD_1_BBDFD09444275410_OFFSET))(this, a1, a2);
		}
	};
}
