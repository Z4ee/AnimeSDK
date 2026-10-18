#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_A67459655C467518;
class Class_3_BADE8876F34A0541;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DCCA12D1AF846B2D_METHOD_3_9012B2ED398277C8_OFFSET UNITYSDK_OFFSET(0x15939200)
#define CLASS_3_DCCA12D1AF846B2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15938EF0)
#define CLASS_3_DCCA12D1AF846B2D__CTOR_OFFSET UNITYSDK_OFFSET(0x15938EC0)

inline static constexpr unsigned int Class_3_DCCA12D1AF846B2D_TypeDefinitionIndex = 55718;

class Class_3_DCCA12D1AF846B2D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BADE8876F34A0541*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BADE8876F34A0541* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BADE8876F34A0541*))((::PBYTE)hIl2Cpp + CLASS_3_DCCA12D1AF846B2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCCA12D1AF846B2D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_9012B2ED398277C8(::Class_1_A67459655C467518* a1, ::Enum_3_ED790DAC948A65A9_5 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A67459655C467518*, ::Enum_3_ED790DAC948A65A9_5, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_DCCA12D1AF846B2D_METHOD_3_9012B2ED398277C8_OFFSET))(this, a1, a2, a3);
	}
};
