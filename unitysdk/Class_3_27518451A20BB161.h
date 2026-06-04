#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_627C41AFD64353E1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_27518451A20BB161_METHOD_3_91B230CF1BA4E824_OFFSET UNITYSDK_OFFSET(0x139014C0)
#define CLASS_3_27518451A20BB161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13901390)
#define CLASS_3_27518451A20BB161__CTOR_OFFSET UNITYSDK_OFFSET(0x13901360)

inline static constexpr unsigned int Class_3_27518451A20BB161_TypeDefinitionIndex = 48964;

class Class_3_27518451A20BB161 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_627C41AFD64353E1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_627C41AFD64353E1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_627C41AFD64353E1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_91B230CF1BA4E824(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_METHOD_3_91B230CF1BA4E824_OFFSET))(a1);
	}
};
