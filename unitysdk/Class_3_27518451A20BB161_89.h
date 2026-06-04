#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_19;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_89_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9FF280)
#define CLASS_3_27518451A20BB161_89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9FF2C0)
#define CLASS_3_27518451A20BB161_89__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FF250)
#define CLASS_3_27518451A20BB161_89___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9FF3A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_89_TypeDefinitionIndex = 50343;

class Class_3_27518451A20BB161_89 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_19*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_19*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
