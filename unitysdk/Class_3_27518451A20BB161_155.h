#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9156D074A1DB9CA7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF933B0)
#define CLASS_3_27518451A20BB161_155__CTOR_OFFSET UNITYSDK_OFFSET(0xAF93380)

inline static constexpr unsigned int Class_3_27518451A20BB161_155_TypeDefinitionIndex = 51899;

class Class_3_27518451A20BB161_155 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9156D074A1DB9CA7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9156D074A1DB9CA7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9156D074A1DB9CA7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET))(this);
	}
};
