#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_C314A19E73347FF2_InnerState.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SynchronouslyTriggerSound; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_C314A19E73347FF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1295F040)
#define CLASS_2_C314A19E73347FF2_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1295EEC0)
#define CLASS_2_C314A19E73347FF2_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1295F5F0)
#define CLASS_2_C314A19E73347FF2_METHOD_2_74AECDEAEFC4E639_OFFSET UNITYSDK_OFFSET(0x1295F510)
#define CLASS_2_C314A19E73347FF2_METHOD_2_AB01D2A3604A75E7_1_OFFSET UNITYSDK_OFFSET(0x1295F350)
#define CLASS_2_C314A19E73347FF2_METHOD_2_AB01D2A3604A75E7_OFFSET UNITYSDK_OFFSET(0x1295F430)
#define CLASS_2_C314A19E73347FF2_METHOD_2_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x1295EDA0)
#define CLASS_2_C314A19E73347FF2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1295ECA0)
#define CLASS_2_C314A19E73347FF2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1295F080)
#define CLASS_2_C314A19E73347FF2_TICK_OFFSET UNITYSDK_OFFSET(0x1295F0D0)
#define CLASS_2_C314A19E73347FF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1295EC90)

inline static constexpr unsigned int Class_2_C314A19E73347FF2_TypeDefinitionIndex = 52053;

class Class_2_C314A19E73347FF2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_3; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::String* Field_2_1; // 0x30
	::RPG::GameCore::SynchronouslyTriggerSound* Field_2_4; // 0x38
	::System::UInt32 Field_2_6; // 0x40
	::Class_2_C314A19E73347FF2_InnerState Field_2_5; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SynchronouslyTriggerSound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SynchronouslyTriggerSound*))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_74AECDEAEFC4E639(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_74AECDEAEFC4E639_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AB01D2A3604A75E7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_AB01D2A3604A75E7_OFFSET))(this);
	}

	::System::Int32 Method_2_AB01D2A3604A75E7_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_AB01D2A3604A75E7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C314A19E73347FF2_METHOD_2_F39234F2606D8D97_OFFSET))(this);
	}
};
