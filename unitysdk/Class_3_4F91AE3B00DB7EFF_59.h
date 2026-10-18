#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_17C5CD93E85C546D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_59_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16541C70)
#define CLASS_3_4F91AE3B00DB7EFF_59_METHOD_3_7A013595D3943151_OFFSET UNITYSDK_OFFSET(0x16541FA0)
#define CLASS_3_4F91AE3B00DB7EFF_59__CTOR_OFFSET UNITYSDK_OFFSET(0x16541C40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_59_TypeDefinitionIndex = 55058;

class Class_3_4F91AE3B00DB7EFF_59 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_17C5CD93E85C546D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_17C5CD93E85C546D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_17C5CD93E85C546D*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_59_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_7A013595D3943151(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_59_METHOD_3_7A013595D3943151_OFFSET))(this, a1);
	}
};
