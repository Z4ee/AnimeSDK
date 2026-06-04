#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_30854311B33EC439_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89B5B1B04274D4C6_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141525B0)
#define CLASS_3_89B5B1B04274D4C6_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14152620)
#define CLASS_3_89B5B1B04274D4C6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14152510)
#define CLASS_3_89B5B1B04274D4C6_2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14152860)

inline static constexpr unsigned int Class_3_89B5B1B04274D4C6_2_TypeDefinitionIndex = 50621;

class Class_3_89B5B1B04274D4C6_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_30854311B33EC439_1*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_30854311B33EC439_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_30854311B33EC439_1*))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
