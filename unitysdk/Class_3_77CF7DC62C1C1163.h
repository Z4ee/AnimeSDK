#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_FEF10BFF0F31FADF.h"

namespace RPG::GameCore { class ChangeCharacterConfigParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_77CF7DC62C1C1163_METHOD_3_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x9701870)
#define CLASS_3_77CF7DC62C1C1163_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97016C0)
#define CLASS_3_77CF7DC62C1C1163__CTOR_OFFSET UNITYSDK_OFFSET(0x9701690)

inline static constexpr unsigned int Class_3_77CF7DC62C1C1163_TypeDefinitionIndex = 50651;

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

	::System::Void Method_3_F26CE4FC4BEDB222(::Struct_2_FEF10BFF0F31FADF& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FEF10BFF0F31FADF&))((::PBYTE)hIl2Cpp + CLASS_3_77CF7DC62C1C1163_METHOD_3_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}
};
