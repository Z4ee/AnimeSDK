#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_1_867B6CE75953535A;
class Class_3_1A9D32B2B1D681B8;

#define CLASS_3_83FD4418E6E9E045_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10012220)
#define CLASS_3_83FD4418E6E9E045__CTOR_OFFSET UNITYSDK_OFFSET(0x10012170)
#define CLASS_3_83FD4418E6E9E045___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10012690)

inline static constexpr unsigned int Class_3_83FD4418E6E9E045_TypeDefinitionIndex = 70335;

class Class_3_83FD4418E6E9E045 : public ::Class_2_1792A4214A514F27
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_3_1; // 0x30
	::Class_1_867B6CE75953535A* Field_3_0; // 0x38

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_3_83FD4418E6E9E045__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83FD4418E6E9E045_INITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83FD4418E6E9E045___IFIXBASEPROXY_INITIALIZE_OFFSET))(this);
	}
};
