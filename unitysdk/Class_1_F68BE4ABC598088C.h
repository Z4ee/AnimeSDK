#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }

#define CLASS_1_F68BE4ABC598088C_METHOD_1_1AAC88108B7D72D6_OFFSET UNITYSDK_OFFSET(0x18F3EAF0)
#define CLASS_1_F68BE4ABC598088C_METHOD_1_6449112DB9901FD9_OFFSET UNITYSDK_OFFSET(0x18F3EB40)
#define CLASS_1_F68BE4ABC598088C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F3EC70)
#define CLASS_1_F68BE4ABC598088C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18F3EAE0)
#define CLASS_1_F68BE4ABC598088C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3EA80)

inline static constexpr unsigned int Class_1_F68BE4ABC598088C_TypeDefinitionIndex = 56703;

class Class_1_F68BE4ABC598088C : public ::System::Object
{
public:
	::System::String* GGINDEBOODJ; // 0x10
	::RPG::GameCore::TaskListTemplate* MOINFBGHNFO; // 0x18
	::System::Int32 NKEPLEIDNEP; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F68BE4ABC598088C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TaskListTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_F68BE4ABC598088C__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AAC88108B7D72D6(::RPG::GameCore::TaskListTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_F68BE4ABC598088C_METHOD_1_1AAC88108B7D72D6_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskListTemplate* Method_1_6449112DB9901FD9()
	{
		return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F68BE4ABC598088C_METHOD_1_6449112DB9901FD9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F68BE4ABC598088C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
