#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B68AD77B8D64C0BF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_149_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B17620)
#define CLASS_3_27518451A20BB161_149__CTOR_OFFSET UNITYSDK_OFFSET(0x15B175F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_149_TypeDefinitionIndex = 52340;

class Class_3_27518451A20BB161_149 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B68AD77B8D64C0BF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B68AD77B8D64C0BF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B68AD77B8D64C0BF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_149__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_149_ONTASKBEGIN_OFFSET))(this);
	}
};
