#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSDFText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_868BA481A15D5E37_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1190BC50)
#define CLASS_2_868BA481A15D5E37_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1190BC90)
#define CLASS_2_868BA481A15D5E37_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1190C290)
#define CLASS_2_868BA481A15D5E37_TICK_OFFSET UNITYSDK_OFFSET(0x1190C2E0)
#define CLASS_2_868BA481A15D5E37__CTOR_OFFSET UNITYSDK_OFFSET(0x1190BC40)

inline static constexpr unsigned int Class_2_868BA481A15D5E37_TypeDefinitionIndex = 43146;

class Class_2_868BA481A15D5E37 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowSDFText* Field_2_0; // 0x20

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
