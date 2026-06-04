#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeCharacterSomatoType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FF15750DC18619D4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF6F6D0)
#define CLASS_3_FF15750DC18619D4__CTOR_OFFSET UNITYSDK_OFFSET(0xBF6F6A0)

inline static constexpr unsigned int Class_3_FF15750DC18619D4_TypeDefinitionIndex = 51321;

class Class_3_FF15750DC18619D4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeCharacterSomatoType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterSomatoType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterSomatoType*))((::PBYTE)hIl2Cpp + CLASS_3_FF15750DC18619D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF15750DC18619D4_ONTASKBEGIN_OFFSET))(this);
	}
};
