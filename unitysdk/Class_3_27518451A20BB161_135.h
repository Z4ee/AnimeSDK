#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_24;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_135_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FBCE80)
#define CLASS_3_27518451A20BB161_135_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FBCEC0)
#define CLASS_3_27518451A20BB161_135__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBCE50)

inline static constexpr unsigned int Class_3_27518451A20BB161_135_TypeDefinitionIndex = 51458;

class Class_3_27518451A20BB161_135 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_24*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_24* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_24*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135_ONTASKBEGIN_OFFSET))(this);
	}
};
