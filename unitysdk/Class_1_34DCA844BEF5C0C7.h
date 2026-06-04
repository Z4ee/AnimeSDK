#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_25;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_34DCA844BEF5C0C7_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA381320)
#define CLASS_1_34DCA844BEF5C0C7_TICK_OFFSET UNITYSDK_OFFSET(0xA3813A0)
#define CLASS_1_34DCA844BEF5C0C7__CTOR_OFFSET UNITYSDK_OFFSET(0xA381310)

inline static constexpr unsigned int Class_1_34DCA844BEF5C0C7_TypeDefinitionIndex = 72863;

class Class_1_34DCA844BEF5C0C7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34DCA844BEF5C0C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_34DCA844BEF5C0C7_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_34DCA844BEF5C0C7_TICK_OFFSET))(this, a1);
	}
};
