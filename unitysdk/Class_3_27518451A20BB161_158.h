#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B68AD77B8D64C0BF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_158_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177C2490)
#define CLASS_3_27518451A20BB161_158__CTOR_OFFSET UNITYSDK_OFFSET(0x177C2460)

inline static constexpr unsigned int Class_3_27518451A20BB161_158_TypeDefinitionIndex = 55030;

class Class_3_27518451A20BB161_158 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B68AD77B8D64C0BF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B68AD77B8D64C0BF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B68AD77B8D64C0BF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158_ONTASKBEGIN_OFFSET))(this);
	}
};
