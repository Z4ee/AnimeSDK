#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandResetTransform; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_97181FFA3A3620A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177B6630)
#define CLASS_2_97181FFA3A3620A9_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x177B6DB0)
#define CLASS_2_97181FFA3A3620A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177B67A0)
#define CLASS_2_97181FFA3A3620A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x177B6680)
#define CLASS_2_97181FFA3A3620A9_TICK_OFFSET UNITYSDK_OFFSET(0x177B6740)
#define CLASS_2_97181FFA3A3620A9__CTOR_OFFSET UNITYSDK_OFFSET(0x177B6620)

inline static constexpr unsigned int Class_2_97181FFA3A3620A9_TypeDefinitionIndex = 50891;

class Class_2_97181FFA3A3620A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SwitchHandResetTransform* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandResetTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandResetTransform*))((::PBYTE)hIl2Cpp + CLASS_2_97181FFA3A3620A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97181FFA3A3620A9_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97181FFA3A3620A9_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97181FFA3A3620A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97181FFA3A3620A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97181FFA3A3620A9_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}
};
