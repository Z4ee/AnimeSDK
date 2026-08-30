#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_3F4D673D3F90D12C;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class ByInVision; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0E3AAECD9DA68549_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC307490)
#define CLASS_3_0E3AAECD9DA68549__CTOR_OFFSET UNITYSDK_OFFSET(0xC307330)

inline static constexpr unsigned int Class_3_0E3AAECD9DA68549_TypeDefinitionIndex = 54690;

class Class_3_0E3AAECD9DA68549 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInVision*>
{
public:
	::Class_2_3F4D673D3F90D12C* MKDIGEHLFBH; // 0x28
	::Class_2_F67FF7EB526BF85C* AKEOLMPCBHA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInVision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + CLASS_3_0E3AAECD9DA68549__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E3AAECD9DA68549_EVALUATE_OFFSET))(this);
	}
};
