#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_2738E5A52E213F1A.h"

namespace RPG::GameCore { class ChangeCharacterConfigParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_77CF7DC62C1C1163_METHOD_3_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x88209E0)
#define CLASS_3_77CF7DC62C1C1163_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8820830)
#define CLASS_3_77CF7DC62C1C1163__CTOR_OFFSET UNITYSDK_OFFSET(0x8820800)

inline static constexpr unsigned int Class_3_77CF7DC62C1C1163_TypeDefinitionIndex = 43950;

class Class_3_77CF7DC62C1C1163 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeCharacterConfigParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterConfigParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterConfigParam*))((::PBYTE)hIl2Cpp + CLASS_3_77CF7DC62C1C1163__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CF7DC62C1C1163_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F26CE4FC4BEDB222(::Struct_2_2738E5A52E213F1A& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2738E5A52E213F1A&))((::PBYTE)hIl2Cpp + CLASS_3_77CF7DC62C1C1163_METHOD_3_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}
};
