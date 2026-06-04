#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_E53DD2CB4E3DF392;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89B5B1B04274D4C6_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4E85C0)
#define CLASS_3_89B5B1B04274D4C6_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA4E8630)
#define CLASS_3_89B5B1B04274D4C6_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E8520)
#define CLASS_3_89B5B1B04274D4C6_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4E8970)

inline static constexpr unsigned int Class_3_89B5B1B04274D4C6_1_TypeDefinitionIndex = 50321;

class Class_3_89B5B1B04274D4C6_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E53DD2CB4E3DF392*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E53DD2CB4E3DF392* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E53DD2CB4E3DF392*))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
