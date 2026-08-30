#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSDFText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_868BA481A15D5E37_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C9FE70)
#define CLASS_2_868BA481A15D5E37_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19C9FEB0)
#define CLASS_2_868BA481A15D5E37_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19CA0610)
#define CLASS_2_868BA481A15D5E37_TICK_OFFSET UNITYSDK_OFFSET(0x19CA0660)
#define CLASS_2_868BA481A15D5E37__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9FE60)

inline static constexpr unsigned int Class_2_868BA481A15D5E37_TypeDefinitionIndex = 53543;

class Class_2_868BA481A15D5E37 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* KGAAMPNKJMP; // 0x0
	::RPG::GameCore::ShowSDFText* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSDFText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSDFText*))((::PBYTE)hIl2Cpp + CLASS_2_868BA481A15D5E37__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868BA481A15D5E37_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868BA481A15D5E37_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868BA481A15D5E37_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_868BA481A15D5E37_TICK_OFFSET))(this, a1);
	}
};
