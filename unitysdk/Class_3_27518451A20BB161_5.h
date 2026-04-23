#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_20;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12136EE0)
#define CLASS_3_27518451A20BB161_5_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x12136D40)
#define CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12136CF0)
#define CLASS_3_27518451A20BB161_5__CTOR_OFFSET UNITYSDK_OFFSET(0x12136CC0)
#define CLASS_3_27518451A20BB161_5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12136F40)

inline static constexpr unsigned int Class_3_27518451A20BB161_5_TypeDefinitionIndex = 48616;

class Class_3_27518451A20BB161_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_20*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_20*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
