#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_34DCA844BEF5C0C7_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB42A460)
#define CLASS_1_34DCA844BEF5C0C7_TICK_OFFSET UNITYSDK_OFFSET(0xB42A4E0)
#define CLASS_1_34DCA844BEF5C0C7__CTOR_OFFSET UNITYSDK_OFFSET(0xB42A450)

inline static constexpr unsigned int Class_1_34DCA844BEF5C0C7_TypeDefinitionIndex = 77874;

class Class_1_34DCA844BEF5C0C7 : public ::System::Object
{
public:
	::System::String* HCDLECMKDJM; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34DCA844BEF5C0C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_34DCA844BEF5C0C7_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_34DCA844BEF5C0C7_TICK_OFFSET))(this, a1);
	}
};
