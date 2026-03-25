#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetForceStreamingThisFrame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_506EC59C178BC8B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1067C750)
#define CLASS_3_506EC59C178BC8B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1067C720)

inline static constexpr unsigned int Class_3_506EC59C178BC8B0_TypeDefinitionIndex = 44801;

class Class_3_506EC59C178BC8B0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetForceStreamingThisFrame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetForceStreamingThisFrame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetForceStreamingThisFrame*))((::PBYTE)hIl2Cpp + CLASS_3_506EC59C178BC8B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_506EC59C178BC8B0_ONTASKBEGIN_OFFSET))(this);
	}
};
