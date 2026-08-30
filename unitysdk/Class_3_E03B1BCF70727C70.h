#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowDamageText; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E03B1BCF70727C70_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19CAF820)
#define CLASS_3_E03B1BCF70727C70__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAF7F0)

inline static constexpr unsigned int Class_3_E03B1BCF70727C70_TypeDefinitionIndex = 55802;

class Class_3_E03B1BCF70727C70 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowDamageText*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDamageText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDamageText*))((::PBYTE)hIl2Cpp + CLASS_3_E03B1BCF70727C70__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E03B1BCF70727C70_ONTASKBEGIN_OFFSET))(this);
	}
};
