#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C3F2FA60ACCCA98C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1196B250)
#define CLASS_3_27518451A20BB161_155__CTOR_OFFSET UNITYSDK_OFFSET(0x1196B220)

inline static constexpr unsigned int Class_3_27518451A20BB161_155_TypeDefinitionIndex = 51341;

class Class_3_27518451A20BB161_155 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C3F2FA60ACCCA98C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C3F2FA60ACCCA98C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C3F2FA60ACCCA98C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET))(this);
	}
};
