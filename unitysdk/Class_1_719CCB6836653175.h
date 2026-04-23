#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;
class Class_1_F9FBCC956DFCF137_17;
class Class_2_6AA7CA7493367EF4;
namespace System { class Action; }

#define CLASS_1_719CCB6836653175_EXECUTE_OFFSET UNITYSDK_OFFSET(0x937C850)
#define CLASS_1_719CCB6836653175_TICK_OFFSET UNITYSDK_OFFSET(0x937CA60)
#define CLASS_1_719CCB6836653175__CTOR_OFFSET UNITYSDK_OFFSET(0x937C7D0)

inline static constexpr unsigned int Class_1_719CCB6836653175_TypeDefinitionIndex = 71240;

class Class_1_719CCB6836653175 : public ::System::Object
{
public:
	::Class_1_C563E5E77DCDB6EB* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_6AA7CA7493367EF4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_719CCB6836653175__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_719CCB6836653175_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_719CCB6836653175_TICK_OFFSET))(this, a1);
	}
};
