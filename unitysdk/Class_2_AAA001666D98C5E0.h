#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateEntityAsync; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AAA001666D98C5E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187FCFB0)
#define CLASS_2_AAA001666D98C5E0_METHOD_2_8B29361ECF760A74_OFFSET UNITYSDK_OFFSET(0x187FDAE0)
#define CLASS_2_AAA001666D98C5E0_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x187FDCE0)
#define CLASS_2_AAA001666D98C5E0_METHOD_2_91C446EB08B17BE9_OFFSET UNITYSDK_OFFSET(0x187FD630)
#define CLASS_2_AAA001666D98C5E0_METHOD_2_E892861EE594315C_OFFSET UNITYSDK_OFFSET(0x187FD5B0)
#define CLASS_2_AAA001666D98C5E0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x187FD0D0)
#define CLASS_2_AAA001666D98C5E0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x187FD020)
#define CLASS_2_AAA001666D98C5E0_TICK_OFFSET UNITYSDK_OFFSET(0x187FD070)
#define CLASS_2_AAA001666D98C5E0__CTOR_OFFSET UNITYSDK_OFFSET(0x187FCFA0)

inline static constexpr unsigned int Class_2_AAA001666D98C5E0_TypeDefinitionIndex = 52619;

class Class_2_AAA001666D98C5E0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AdvCreateEntityAsync* OFKGLJOAMLD; // 0x20
	::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
	::System::UInt32 PEEFHNHDBMF; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_ONTASKRESET_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_2_91C446EB08B17BE9(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::GroupEntityCreateConfig* a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::GroupEntityCreateConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_METHOD_2_91C446EB08B17BE9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E892861EE594315C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_METHOD_2_E892861EE594315C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_8B29361ECF760A74(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::GroupEntityCreateConfig* a3, ::System::Boolean& a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::GroupEntityCreateConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_METHOD_2_8B29361ECF760A74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAA001666D98C5E0_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}
};
