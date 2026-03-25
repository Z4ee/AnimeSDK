#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5AB3DC82EBD88AAA;

#define CLASS_1_6873DE750CBDEF35_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166BC200)
#define CLASS_1_6873DE750CBDEF35__CTOR_OFFSET UNITYSDK_OFFSET(0x166BC1F0)

inline static constexpr unsigned int Class_1_6873DE750CBDEF35_TypeDefinitionIndex = 28849;

class Class_1_6873DE750CBDEF35 : public ::System::Object
{
public:
	::Class_3_5AB3DC82EBD88AAA* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_5AB3DC82EBD88AAA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5AB3DC82EBD88AAA*))((::PBYTE)hIl2Cpp + CLASS_1_6873DE750CBDEF35__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6873DE750CBDEF35_EXECUTE_OFFSET))(this);
	}
};
