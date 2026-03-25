#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSilverWolfCompanionToastExit; }
namespace System { class Object; }

#define CLASS_2_7595777144899999_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111844A0)
#define CLASS_2_7595777144899999_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x111847A0)
#define CLASS_2_7595777144899999_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111844E0)
#define CLASS_2_7595777144899999_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111846D0)
#define CLASS_2_7595777144899999_TICK_OFFSET UNITYSDK_OFFSET(0x11184720)
#define CLASS_2_7595777144899999__CTOR_OFFSET UNITYSDK_OFFSET(0x11184490)

inline static constexpr unsigned int Class_2_7595777144899999_TypeDefinitionIndex = 47594;

class Class_2_7595777144899999 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::WaitSilverWolfCompanionToastExit* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSilverWolfCompanionToastExit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*))((::PBYTE)hIl2Cpp + CLASS_2_7595777144899999__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7595777144899999_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7595777144899999_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7595777144899999_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7595777144899999_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7595777144899999_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
