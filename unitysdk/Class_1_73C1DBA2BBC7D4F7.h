#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_980894BED8163CEE;

#define CLASS_1_73C1DBA2BBC7D4F7_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x103DBE60)
#define CLASS_1_73C1DBA2BBC7D4F7__CTOR_OFFSET UNITYSDK_OFFSET(0x103DC0A0)

inline static constexpr unsigned int Class_1_73C1DBA2BBC7D4F7_TypeDefinitionIndex = 14801;

class Class_1_73C1DBA2BBC7D4F7 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_980894BED8163CEE*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::GameCore::UpgradeAvatarSubRelicType Field_1_2; // 0x1C
	::RPG::GameCore::RelicType Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::RPG::GameCore::CombatPowerRelicRarityType Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C1DBA2BBC7D4F7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_73C1DBA2BBC7D4F7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_73C1DBA2BBC7D4F7*&))((::PBYTE)hIl2Cpp + CLASS_1_73C1DBA2BBC7D4F7_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
