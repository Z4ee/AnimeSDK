#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvStartTickFloatValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D79932CE06F8067E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13F1D940)
#define CLASS_3_D79932CE06F8067E__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1D910)

inline static constexpr unsigned int Class_3_D79932CE06F8067E_TypeDefinitionIndex = 58045;

class Class_3_D79932CE06F8067E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvStartTickFloatValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvStartTickFloatValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvStartTickFloatValue*))((::PBYTE)hIl2Cpp + CLASS_3_D79932CE06F8067E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D79932CE06F8067E_ONTASKBEGIN_OFFSET))(this);
	}
};
