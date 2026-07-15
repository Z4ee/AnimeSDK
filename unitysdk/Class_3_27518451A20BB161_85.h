#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5057FF2FC249EB8D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1699B830)
#define CLASS_3_27518451A20BB161_85__CTOR_OFFSET UNITYSDK_OFFSET(0x1699B800)

inline static constexpr unsigned int Class_3_27518451A20BB161_85_TypeDefinitionIndex = 50645;

class Class_3_27518451A20BB161_85 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5057FF2FC249EB8D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5057FF2FC249EB8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5057FF2FC249EB8D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_85_ONTASKBEGIN_OFFSET))(this);
	}
};
