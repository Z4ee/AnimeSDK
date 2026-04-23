#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_48C0863CAA8EB6BB_1_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x19181F50)
#define CLASS_4_48C0863CAA8EB6BB_1_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x19182030)
#define CLASS_4_48C0863CAA8EB6BB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19181FD0)

inline static constexpr unsigned int Class_4_48C0863CAA8EB6BB_1_TypeDefinitionIndex = 10090;

class Class_4_48C0863CAA8EB6BB_1 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_48C0863CAA8EB6BB_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_48C0863CAA8EB6BB_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_48C0863CAA8EB6BB_1*&))((::PBYTE)hIl2Cpp + CLASS_4_48C0863CAA8EB6BB_1_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_48C0863CAA8EB6BB_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_48C0863CAA8EB6BB_1*))((::PBYTE)hIl2Cpp + CLASS_4_48C0863CAA8EB6BB_1_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
