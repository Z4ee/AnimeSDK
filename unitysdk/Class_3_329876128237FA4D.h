#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_07CB640A20D6F01A.h"

class Class_4_9DD8B93ABE3B223B;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_329876128237FA4D_METHOD_3_64C87E433FCC937B_OFFSET UNITYSDK_OFFSET(0x18BA4E90)
#define CLASS_3_329876128237FA4D__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA4DD0)

inline static constexpr unsigned int Class_3_329876128237FA4D_TypeDefinitionIndex = 55916;

class Class_3_329876128237FA4D : public ::Class_2_07CB640A20D6F01A
{
public:
	::Class_4_9DD8B93ABE3B223B* MLPDMHBMOKN; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_9DD8B93ABE3B223B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_9DD8B93ABE3B223B*))((::PBYTE)hIl2Cpp + CLASS_3_329876128237FA4D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_64C87E433FCC937B(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_329876128237FA4D_METHOD_3_64C87E433FCC937B_OFFSET))(this, a1);
	}
};
