#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_7703B206900D8DD6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179CA1E0)
#define CLASS_3_1F4ADFD0E4F1734B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179CA100)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_1_TypeDefinitionIndex = 52563;

class Class_3_1F4ADFD0E4F1734B_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7703B206900D8DD6*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7703B206900D8DD6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7703B206900D8DD6*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_1_ONTASKBEGIN_OFFSET))(this);
	}
};
