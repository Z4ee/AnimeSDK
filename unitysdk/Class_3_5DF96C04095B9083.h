#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastPage; }

#define CLASS_3_5DF96C04095B9083_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BBBDE0)
#define CLASS_3_5DF96C04095B9083__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBBDB0)

inline static constexpr unsigned int Class_3_5DF96C04095B9083_TypeDefinitionIndex = 43241;

class Class_3_5DF96C04095B9083 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToastPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastPage*))((::PBYTE)hIl2Cpp + CLASS_3_5DF96C04095B9083__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DF96C04095B9083_ONTASKBEGIN_OFFSET))(this);
	}
};
