#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CompleteMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_34EEC4B8B3C14D2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159BEF70)
#define CLASS_3_34EEC4B8B3C14D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x159BEF40)

inline static constexpr unsigned int Class_3_34EEC4B8B3C14D2D_TypeDefinitionIndex = 55179;

class Class_3_34EEC4B8B3C14D2D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CompleteMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CompleteMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CompleteMove*))((::PBYTE)hIl2Cpp + CLASS_3_34EEC4B8B3C14D2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34EEC4B8B3C14D2D_ONTASKBEGIN_OFFSET))(this);
	}
};
