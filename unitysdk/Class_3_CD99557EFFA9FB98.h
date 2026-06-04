#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PausePropMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CD99557EFFA9FB98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC469460)
#define CLASS_3_CD99557EFFA9FB98__CTOR_OFFSET UNITYSDK_OFFSET(0xC469430)

inline static constexpr unsigned int Class_3_CD99557EFFA9FB98_TypeDefinitionIndex = 49598;

class Class_3_CD99557EFFA9FB98 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PausePropMoveTo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PausePropMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PausePropMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_CD99557EFFA9FB98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD99557EFFA9FB98_ONTASKBEGIN_OFFSET))(this);
	}
};
