#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateEntityAsync; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3F2408C4C138A15C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9238CD0)
#define CLASS_2_3F2408C4C138A15C_METHOD_2_6898F77B75A69C20_OFFSET UNITYSDK_OFFSET(0x9239290)
#define CLASS_2_3F2408C4C138A15C_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x9239850)
#define CLASS_2_3F2408C4C138A15C_METHOD_2_AB49D886CAE7CFE2_OFFSET UNITYSDK_OFFSET(0x9239640)
#define CLASS_2_3F2408C4C138A15C_METHOD_2_E892861EE594315C_OFFSET UNITYSDK_OFFSET(0x9239210)
#define CLASS_2_3F2408C4C138A15C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9238DF0)
#define CLASS_2_3F2408C4C138A15C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9238D40)
#define CLASS_2_3F2408C4C138A15C_TICK_OFFSET UNITYSDK_OFFSET(0x9238D90)
#define CLASS_2_3F2408C4C138A15C__CTOR_OFFSET UNITYSDK_OFFSET(0x9238CC0)

inline static constexpr unsigned int Class_2_3F2408C4C138A15C_TypeDefinitionIndex = 48319;

class Class_2_3F2408C4C138A15C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvCreateEntityAsync* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::Client::RuntimeGroupManager* Field_2_1; // 0x28
	::System::UInt32 Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_ONTASKRESET_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_2_6898F77B75A69C20(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::GroupEntityCreateConfig* a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::GroupEntityCreateConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_METHOD_2_6898F77B75A69C20_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E892861EE594315C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_METHOD_2_E892861EE594315C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AB49D886CAE7CFE2(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::GroupEntityCreateConfig* a3, ::System::Boolean& a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::GroupEntityCreateConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_METHOD_2_AB49D886CAE7CFE2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}
};
