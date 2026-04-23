#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DDEAA6466F33136D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_95_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAC4F00)
#define CLASS_3_27518451A20BB161_95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAC4F40)
#define CLASS_3_27518451A20BB161_95__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC4ED0)
#define CLASS_3_27518451A20BB161_95___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAC5290)

inline static constexpr unsigned int Class_3_27518451A20BB161_95_TypeDefinitionIndex = 49711;

class Class_3_27518451A20BB161_95 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DDEAA6466F33136D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DDEAA6466F33136D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DDEAA6466F33136D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_95_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_95_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_95___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
