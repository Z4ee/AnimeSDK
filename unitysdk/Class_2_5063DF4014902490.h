#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIEvent; }
namespace System { class Object; }

#define CLASS_2_5063DF4014902490_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16060FA0)
#define CLASS_2_5063DF4014902490_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0x160611C0)
#define CLASS_2_5063DF4014902490_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16061060)
#define CLASS_2_5063DF4014902490_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16061110)
#define CLASS_2_5063DF4014902490_TICK_OFFSET UNITYSDK_OFFSET(0x16061160)
#define CLASS_2_5063DF4014902490__CTOR_OFFSET UNITYSDK_OFFSET(0x16060F90)

inline static constexpr unsigned int Class_2_5063DF4014902490_TypeDefinitionIndex = 59090;

class Class_2_5063DF4014902490 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitUIEvent* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIEvent*))((::PBYTE)hIl2Cpp + CLASS_2_5063DF4014902490__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5063DF4014902490_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5063DF4014902490_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5063DF4014902490_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5063DF4014902490_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_24A73FD2F3BEC0BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5063DF4014902490_METHOD_2_24A73FD2F3BEC0BF_OFFSET))(this, a1);
	}
};
