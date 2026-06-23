#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D86F0E84B4529D28_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE893E20)
#define CLASS_1_D86F0E84B4529D28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE893E30)
#define CLASS_1_D86F0E84B4529D28_RESET_OFFSET UNITYSDK_OFFSET(0xE893EA0)
#define CLASS_1_D86F0E84B4529D28__CTOR_OFFSET UNITYSDK_OFFSET(0xE893E10)

inline static constexpr unsigned int Class_1_D86F0E84B4529D28_TypeDefinitionIndex = 44809;

class Class_1_D86F0E84B4529D28 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28__CTOR_OFFSET))(this, a1);
	}

	::System::Object* get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28_GET_CURRENT_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28_RESET_OFFSET))(this);
	}
};
