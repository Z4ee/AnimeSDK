#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMechanismBarVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_18E5919AF53BC8CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1256EC40)
#define CLASS_2_18E5919AF53BC8CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1256EC80)
#define CLASS_2_18E5919AF53BC8CA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1256ECD0)
#define CLASS_2_18E5919AF53BC8CA_TICK_OFFSET UNITYSDK_OFFSET(0x1256ED20)
#define CLASS_2_18E5919AF53BC8CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1256EC30)

inline static constexpr unsigned int Class_2_18E5919AF53BC8CA_TypeDefinitionIndex = 51196;

class Class_2_18E5919AF53BC8CA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetMechanismBarVisible* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMechanismBarVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMechanismBarVisible*))((::PBYTE)hIl2Cpp + CLASS_2_18E5919AF53BC8CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18E5919AF53BC8CA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18E5919AF53BC8CA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18E5919AF53BC8CA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18E5919AF53BC8CA_TICK_OFFSET))(this, a1);
	}
};
