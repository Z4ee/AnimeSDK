#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RequestGroupStateChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_EFD854BCE63CDD92_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BC9A90)
#define CLASS_2_EFD854BCE63CDD92_METHOD_2_7015249E1B474314_OFFSET UNITYSDK_OFFSET(0x13BCA120)
#define CLASS_2_EFD854BCE63CDD92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BC9C30)
#define CLASS_2_EFD854BCE63CDD92_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13BC9B40)
#define CLASS_2_EFD854BCE63CDD92_TICK_OFFSET UNITYSDK_OFFSET(0x13BC9BD0)
#define CLASS_2_EFD854BCE63CDD92__CTOR_OFFSET UNITYSDK_OFFSET(0x13BC9A80)

inline static constexpr unsigned int Class_2_EFD854BCE63CDD92_TypeDefinitionIndex = 49722;

class Class_2_EFD854BCE63CDD92 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RequestGroupStateChange* Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C
	::System::UInt32 Field_2_4; // 0x30
	::System::UInt32 Field_2_5; // 0x34
	::System::UInt64 Field_2_6; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_EFD854BCE63CDD92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFD854BCE63CDD92_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EFD854BCE63CDD92_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFD854BCE63CDD92_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFD854BCE63CDD92_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7015249E1B474314(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFD854BCE63CDD92_METHOD_2_7015249E1B474314_OFFSET))(this, a1, a2);
	}
};
