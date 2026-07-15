#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueTournFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_2F7D4AFBEC9D7060_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171E1C70)
#define CLASS_2_2F7D4AFBEC9D7060_METHOD_2_F8235938034DB883_OFFSET UNITYSDK_OFFSET(0x171E1D10)
#define CLASS_2_2F7D4AFBEC9D7060_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171E1900)
#define CLASS_2_2F7D4AFBEC9D7060_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x171E1C20)
#define CLASS_2_2F7D4AFBEC9D7060_TICK_OFFSET UNITYSDK_OFFSET(0x171E18A0)
#define CLASS_2_2F7D4AFBEC9D7060__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1890)

inline static constexpr unsigned int Class_2_2F7D4AFBEC9D7060_TypeDefinitionIndex = 55865;

class Class_2_2F7D4AFBEC9D7060 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournFinish*))((::PBYTE)hIl2Cpp + CLASS_2_2F7D4AFBEC9D7060__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F7D4AFBEC9D7060_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7D4AFBEC9D7060_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7D4AFBEC9D7060_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7D4AFBEC9D7060_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F8235938034DB883(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2F7D4AFBEC9D7060_METHOD_2_F8235938034DB883_OFFSET))(this, a1, a2);
	}
};
