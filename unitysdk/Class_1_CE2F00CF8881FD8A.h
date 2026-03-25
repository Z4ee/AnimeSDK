#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_E541610CE7338ECE;

#define CLASS_1_CE2F00CF8881FD8A_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1663BCF0)
#define CLASS_1_CE2F00CF8881FD8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1663BCD0)

inline static constexpr unsigned int Class_1_CE2F00CF8881FD8A_TypeDefinitionIndex = 28846;

class Class_1_CE2F00CF8881FD8A : public ::System::Object
{
public:
	::Class_2_E541610CE7338ECE* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::RPG::MVector3 Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_E541610CE7338ECE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E541610CE7338ECE*))((::PBYTE)hIl2Cpp + CLASS_1_CE2F00CF8881FD8A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2F00CF8881FD8A_EXECUTE_OFFSET))(this);
	}
};
