#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackStatusProbability; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_55CB16E25C1DD213_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141FBEF0)
#define CLASS_3_55CB16E25C1DD213__CTOR_OFFSET UNITYSDK_OFFSET(0x141FBEC0)

inline static constexpr unsigned int Class_3_55CB16E25C1DD213_TypeDefinitionIndex = 51980;

class Class_3_55CB16E25C1DD213 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackStatusProbability*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackStatusProbability* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackStatusProbability*))((::PBYTE)hIl2Cpp + CLASS_3_55CB16E25C1DD213__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55CB16E25C1DD213_ONTASKBEGIN_OFFSET))(this);
	}
};
