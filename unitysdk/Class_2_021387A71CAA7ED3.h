#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_9432B3E32D314913;
namespace RPG::GameCore { class ModifyAudienceGroupAnimType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_021387A71CAA7ED3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x885AD50)
#define CLASS_2_021387A71CAA7ED3_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x885AB80)
#define CLASS_2_021387A71CAA7ED3_METHOD_2_6BE484E5F636032A_OFFSET UNITYSDK_OFFSET(0x885ABC0)
#define CLASS_2_021387A71CAA7ED3_METHOD_2_A666BD4C2D583F89_OFFSET UNITYSDK_OFFSET(0x885AA10)
#define CLASS_2_021387A71CAA7ED3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x885AF00)
#define CLASS_2_021387A71CAA7ED3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x885AD00)
#define CLASS_2_021387A71CAA7ED3_TICK_OFFSET UNITYSDK_OFFSET(0x885ADA0)
#define CLASS_2_021387A71CAA7ED3__CTOR_OFFSET UNITYSDK_OFFSET(0x885AA00)

inline static constexpr unsigned int Class_2_021387A71CAA7ED3_TypeDefinitionIndex = 46953;

class Class_2_021387A71CAA7ED3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ModifyAudienceGroupAnimType* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAudienceGroupAnimType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAudienceGroupAnimType*))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_9432B3E32D314913* Method_2_A666BD4C2D583F89()
	{
		return ((::Class_1_9432B3E32D314913*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_METHOD_2_A666BD4C2D583F89_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_6BE484E5F636032A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_METHOD_2_6BE484E5F636032A_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_021387A71CAA7ED3_ONTASKBEGIN_OFFSET))(this);
	}
};
