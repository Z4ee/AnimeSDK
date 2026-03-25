#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomString; }

#define CLASS_2_5D2CB267B9206F62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11639EB0)
#define CLASS_2_5D2CB267B9206F62_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11639F60)
#define CLASS_2_5D2CB267B9206F62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11639EF0)
#define CLASS_2_5D2CB267B9206F62_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1163A080)
#define CLASS_2_5D2CB267B9206F62_TICK_OFFSET UNITYSDK_OFFSET(0x1163A0D0)
#define CLASS_2_5D2CB267B9206F62__CTOR_OFFSET UNITYSDK_OFFSET(0x11639EA0)

inline static constexpr unsigned int Class_2_5D2CB267B9206F62_TypeDefinitionIndex = 47454;

class Class_2_5D2CB267B9206F62 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::TriggerCustomString* Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomString*))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_TICK_OFFSET))(this, a1);
	}
};
