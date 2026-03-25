#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SkipPopupUIOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C508D0DA4397F491_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C4AF40)
#define CLASS_3_C508D0DA4397F491__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4AF10)

inline static constexpr unsigned int Class_3_C508D0DA4397F491_TypeDefinitionIndex = 44552;

class Class_3_C508D0DA4397F491 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SkipPopupUIOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkipPopupUIOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkipPopupUIOffset*))((::PBYTE)hIl2Cpp + CLASS_3_C508D0DA4397F491__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C508D0DA4397F491_ONTASKBEGIN_OFFSET))(this);
	}
};
