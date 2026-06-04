#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_DB10CB35552B1C95.h"

namespace RPG::GameCore { class ChangeCharacterConfigParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_77CF7DC62C1C1163_METHOD_3_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x141E6F50)
#define CLASS_3_77CF7DC62C1C1163_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141E6D90)
#define CLASS_3_77CF7DC62C1C1163__CTOR_OFFSET UNITYSDK_OFFSET(0x141E6D60)

inline static constexpr unsigned int Class_3_77CF7DC62C1C1163_TypeDefinitionIndex = 51318;

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

	::System::Void Method_3_F26CE4FC4BEDB222(::Struct_2_DB10CB35552B1C95& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DB10CB35552B1C95&))((::PBYTE)hIl2Cpp + CLASS_3_77CF7DC62C1C1163_METHOD_3_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}
};
