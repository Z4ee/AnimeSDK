#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitConditionString; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_26C9DBCC8AEB0F7C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDEA360)
#define CLASS_2_26C9DBCC8AEB0F7C_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xBDEA5E0)
#define CLASS_2_26C9DBCC8AEB0F7C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDEA3A0)
#define CLASS_2_26C9DBCC8AEB0F7C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDEA4B0)
#define CLASS_2_26C9DBCC8AEB0F7C_TICK_OFFSET UNITYSDK_OFFSET(0xBDEA580)
#define CLASS_2_26C9DBCC8AEB0F7C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD98FB0)

inline static constexpr unsigned int Class_2_26C9DBCC8AEB0F7C_TypeDefinitionIndex = 58878;

class Class_2_26C9DBCC8AEB0F7C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitConditionString* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::String* IFDOLFKAOLA; // 0x28
	::System::UInt32 CFKLLAOPMOG; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitConditionString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + CLASS_2_26C9DBCC8AEB0F7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26C9DBCC8AEB0F7C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26C9DBCC8AEB0F7C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26C9DBCC8AEB0F7C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26C9DBCC8AEB0F7C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_26C9DBCC8AEB0F7C_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}
};
