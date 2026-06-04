#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }

#define CLASS_1_F68BE4ABC598088C_METHOD_1_1AAC88108B7D72D6_OFFSET UNITYSDK_OFFSET(0x13919240)
#define CLASS_1_F68BE4ABC598088C_METHOD_1_6449112DB9901FD9_OFFSET UNITYSDK_OFFSET(0x13919290)
#define CLASS_1_F68BE4ABC598088C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139193C0)
#define CLASS_1_F68BE4ABC598088C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13919230)
#define CLASS_1_F68BE4ABC598088C__CTOR_OFFSET UNITYSDK_OFFSET(0x139191D0)

inline static constexpr unsigned int Class_1_F68BE4ABC598088C_TypeDefinitionIndex = 52771;

class Class_1_F68BE4ABC598088C : public ::System::Object
{
public:
	::RPG::GameCore::TaskListTemplate* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

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
