#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_17;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_E9BB979238BD7BC4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12B01160)
#define CLASS_1_E9BB979238BD7BC4_TICK_OFFSET UNITYSDK_OFFSET(0x12B011D0)
#define CLASS_1_E9BB979238BD7BC4__CTOR_OFFSET UNITYSDK_OFFSET(0x12B01150)

inline static constexpr unsigned int Class_1_E9BB979238BD7BC4_TypeDefinitionIndex = 71841;

class Class_1_E9BB979238BD7BC4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E9BB979238BD7BC4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E9BB979238BD7BC4_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E9BB979238BD7BC4_TICK_OFFSET))(this, a1);
	}
};
