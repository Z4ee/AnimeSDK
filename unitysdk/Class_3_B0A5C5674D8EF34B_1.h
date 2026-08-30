#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_E0C0E5A2FEE22B08;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B0A5C5674D8EF34B_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1598E490)
#define CLASS_3_B0A5C5674D8EF34B_1_METHOD_3_0038B7EAE2B57DAA_OFFSET UNITYSDK_OFFSET(0x1598E4D0)
#define CLASS_3_B0A5C5674D8EF34B_1_METHOD_3_5DFD1448F4591EA1_OFFSET UNITYSDK_OFFSET(0x1598E1B0)
#define CLASS_3_B0A5C5674D8EF34B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1598DEC0)
#define CLASS_3_B0A5C5674D8EF34B_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1598E440)
#define CLASS_3_B0A5C5674D8EF34B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1598DE40)

inline static constexpr unsigned int Class_3_B0A5C5674D8EF34B_1_TypeDefinitionIndex = 52946;

class Class_3_B0A5C5674D8EF34B_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E0C0E5A2FEE22B08*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E0C0E5A2FEE22B08* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E0C0E5A2FEE22B08*))((::PBYTE)hIl2Cpp + CLASS_3_B0A5C5674D8EF34B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0A5C5674D8EF34B_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0A5C5674D8EF34B_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0A5C5674D8EF34B_1_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_3_5DFD1448F4591EA1(::RPG::GameCore::ChenLingFesItemFilterType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B0A5C5674D8EF34B_1_METHOD_3_5DFD1448F4591EA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_0038B7EAE2B57DAA(::Class_2_5436AF4270279182* a1, ::RPG::GameCore::ChenLingFesItemFilterType a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B0A5C5674D8EF34B_1_METHOD_3_0038B7EAE2B57DAA_OFFSET))(this, a1, a2, a3, a4);
	}
};
