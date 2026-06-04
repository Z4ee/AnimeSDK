#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_21;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7EFE70)
#define CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7EFCB0)
#define CLASS_3_27518451A20BB161_5__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EFC80)
#define CLASS_3_27518451A20BB161_5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7EFEB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_5_TypeDefinitionIndex = 49280;

class Class_3_27518451A20BB161_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_21*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_21* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_21*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
