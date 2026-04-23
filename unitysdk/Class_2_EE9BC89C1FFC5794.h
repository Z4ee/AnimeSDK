#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueTournEnterNextRoom; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_EE9BC89C1FFC5794_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124BF9B0)
#define CLASS_2_EE9BC89C1FFC5794_METHOD_2_326667BB73F9EA49_OFFSET UNITYSDK_OFFSET(0x124BFA00)
#define CLASS_2_EE9BC89C1FFC5794_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x124BF290)
#define CLASS_2_EE9BC89C1FFC5794_METHOD_2_FB92C5E10C2076F0_1_OFFSET UNITYSDK_OFFSET(0x124BFB80)
#define CLASS_2_EE9BC89C1FFC5794_METHOD_2_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x124BFAD0)
#define CLASS_2_EE9BC89C1FFC5794_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124BF240)
#define CLASS_2_EE9BC89C1FFC5794_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124BF960)
#define CLASS_2_EE9BC89C1FFC5794_TICK_OFFSET UNITYSDK_OFFSET(0x124BF1E0)
#define CLASS_2_EE9BC89C1FFC5794__CTOR_OFFSET UNITYSDK_OFFSET(0x124BF1D0)

inline static constexpr unsigned int Class_2_EE9BC89C1FFC5794_TypeDefinitionIndex = 53911;

class Class_2_EE9BC89C1FFC5794 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_2_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_METHOD_2_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB92C5E10C2076F0_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_METHOD_2_FB92C5E10C2076F0_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_326667BB73F9EA49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE9BC89C1FFC5794_METHOD_2_326667BB73F9EA49_OFFSET))(this);
	}
};
