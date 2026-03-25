#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_12;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1186F8E0)
#define CLASS_3_27518451A20BB161_3_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x1186F740)
#define CLASS_3_27518451A20BB161_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1186F6F0)
#define CLASS_3_27518451A20BB161_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1186F6C0)
#define CLASS_3_27518451A20BB161_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1186F940)

inline static constexpr unsigned int Class_3_27518451A20BB161_3_TypeDefinitionIndex = 42637;

class Class_3_27518451A20BB161_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_12*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_12* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_12*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
