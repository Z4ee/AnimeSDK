#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace System { class String; }

#define CLASS_2_C4BCD569548B7F3E_CLASS_1_969D64C345B815AA_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x13B1FAB0)
#define CLASS_2_C4BCD569548B7F3E_CLASS_1_969D64C345B815AA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13B204E0)
#define CLASS_2_C4BCD569548B7F3E_CLASS_1_969D64C345B815AA__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1F500)

inline static constexpr unsigned int Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA_TypeDefinitionIndex = 53869;

class Class_2_C4BCD569548B7F3E_Class_1_969D64C345B815AA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::BattleRogueMagicData_MagicUnit* Field_1_1; // 0x18
	::RPG::GameCore::TaskState Field_1_2; // 0x20
	::RPG::GameCore::RogueMagicMountType Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_CLASS_1_969D64C345B815AA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_CLASS_1_969D64C345B815AA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4BCD569548B7F3E_CLASS_1_969D64C345B815AA_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}
};
