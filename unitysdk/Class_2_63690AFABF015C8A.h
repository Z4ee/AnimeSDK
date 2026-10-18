#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowGuideTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_63690AFABF015C8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E4B880)
#define CLASS_2_63690AFABF015C8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E4B8C0)
#define CLASS_2_63690AFABF015C8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E4BA90)
#define CLASS_2_63690AFABF015C8A_TICK_OFFSET UNITYSDK_OFFSET(0x15E4BAE0)
#define CLASS_2_63690AFABF015C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4B870)

inline static constexpr unsigned int Class_2_63690AFABF015C8A_TypeDefinitionIndex = 58658;

class Class_2_63690AFABF015C8A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowGuideTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideTalk*))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_TICK_OFFSET))(this, a1);
	}
};
