#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_48C0863CAA8EB6BB_3_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x18BB6560)
#define CLASS_4_48C0863CAA8EB6BB_3_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x18BB6640)
#define CLASS_4_48C0863CAA8EB6BB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB65E0)

inline static constexpr unsigned int Class_4_48C0863CAA8EB6BB_3_TypeDefinitionIndex = 20374;

class Class_4_48C0863CAA8EB6BB_3 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_48C0863CAA8EB6BB_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_48C0863CAA8EB6BB_3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_48C0863CAA8EB6BB_3*&))((::PBYTE)hIl2Cpp + CLASS_4_48C0863CAA8EB6BB_3_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_48C0863CAA8EB6BB_3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_48C0863CAA8EB6BB_3*))((::PBYTE)hIl2Cpp + CLASS_4_48C0863CAA8EB6BB_3_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
