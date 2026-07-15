#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CDFC200E015EA18C;
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B25FD00D7F317E5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185FB7D0)
#define CLASS_3_B25FD00D7F317E5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185FB770)
#define CLASS_3_B25FD00D7F317E5C__CTOR_OFFSET UNITYSDK_OFFSET(0x185FB6E0)

inline static constexpr unsigned int Class_3_B25FD00D7F317E5C_TypeDefinitionIndex = 55589;

class Class_3_B25FD00D7F317E5C : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CDFC200E015EA18C*>
{
public:
	::RPG::GameCore::IdleLiveUiVisibleData* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CDFC200E015EA18C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CDFC200E015EA18C*))((::PBYTE)hIl2Cpp + CLASS_3_B25FD00D7F317E5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B25FD00D7F317E5C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B25FD00D7F317E5C_DISPOSE_OFFSET))(this);
	}
};
