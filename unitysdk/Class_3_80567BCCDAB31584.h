#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_3F4D673D3F90D12C;
namespace RPG::GameCore { class AdvSetNpcConicalVisionsConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_80567BCCDAB31584_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1166FA40)
#define CLASS_3_80567BCCDAB31584_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1166FAF0)
#define CLASS_3_80567BCCDAB31584__CTOR_OFFSET UNITYSDK_OFFSET(0x1166FA10)

inline static constexpr unsigned int Class_3_80567BCCDAB31584_TypeDefinitionIndex = 50113;

class Class_3_80567BCCDAB31584 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetNpcConicalVisionsConfig*>
{
public:
	::Class_2_3F4D673D3F90D12C* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*))((::PBYTE)hIl2Cpp + CLASS_3_80567BCCDAB31584__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80567BCCDAB31584_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80567BCCDAB31584_ONTASKBEGIN_OFFSET))(this);
	}
};
