#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayScreenCrack; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_7A756395C8B7A419_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA53DAB0)
#define CLASS_2_7A756395C8B7A419_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA53DB50)
#define CLASS_2_7A756395C8B7A419_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xA53DA00)
#define CLASS_2_7A756395C8B7A419_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA53D7A0)
#define CLASS_2_7A756395C8B7A419_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA53DA60)
#define CLASS_2_7A756395C8B7A419_TICK_OFFSET UNITYSDK_OFFSET(0xA53DAF0)
#define CLASS_2_7A756395C8B7A419__CTOR_OFFSET UNITYSDK_OFFSET(0xA53D790)

inline static constexpr unsigned int Class_2_7A756395C8B7A419_TypeDefinitionIndex = 53749;

class Class_2_7A756395C8B7A419 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::PlayScreenCrack* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenCrack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenCrack*))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A756395C8B7A419_GET_FORCESKIP_OFFSET))(this);
	}
};
