#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;
class Class_1_F9FBCC956DFCF137_27;
class Class_2_FB9CF047C8AEAA83;
namespace System { class Action; }

#define CLASS_1_D9D4DB0BFEC73146_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A8C6400)
#define CLASS_1_D9D4DB0BFEC73146_TICK_OFFSET UNITYSDK_OFFSET(0x1A8C6630)
#define CLASS_1_D9D4DB0BFEC73146__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C6380)

inline static constexpr unsigned int Class_1_D9D4DB0BFEC73146_TypeDefinitionIndex = 77187;

class Class_1_D9D4DB0BFEC73146 : public ::System::Object
{
public:
	::Class_1_C563E5E77DCDB6EB* JCLEPMNPBAP; // 0x10

	::System::Void _ctor(::Class_2_FB9CF047C8AEAA83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_D9D4DB0BFEC73146__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D9D4DB0BFEC73146_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D9D4DB0BFEC73146_TICK_OFFSET))(this, a1);
	}
};
