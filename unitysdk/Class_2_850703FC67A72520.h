#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ShowDeleteMissionDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_850703FC67A72520_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13961990)
#define CLASS_2_850703FC67A72520_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x13962030)
#define CLASS_2_850703FC67A72520_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13961AE0)
#define CLASS_2_850703FC67A72520_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13961EA0)
#define CLASS_2_850703FC67A72520_TICK_OFFSET UNITYSDK_OFFSET(0x13961FD0)
#define CLASS_2_850703FC67A72520__CTOR_OFFSET UNITYSDK_OFFSET(0x13961820)

inline static constexpr unsigned int Class_2_850703FC67A72520_TypeDefinitionIndex = 49785;

class Class_2_850703FC67A72520 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_4; // 0x30
	::RPG::GameCore::ShowDeleteMissionDialog* Field_2_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}
};
