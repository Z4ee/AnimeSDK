#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26B93FFBE9FAEBB7;

#define CLASS_1_75C3EB54EC08BE44__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3CB0)

inline static constexpr unsigned int Class_1_75C3EB54EC08BE44_TypeDefinitionIndex = 75595;

class Class_1_75C3EB54EC08BE44 : public ::System::Object
{
public:
	::Class_1_26B93FFBE9FAEBB7* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_26B93FFBE9FAEBB7* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_26B93FFBE9FAEBB7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_75C3EB54EC08BE44__CTOR_OFFSET))(this, a1, a2);
	}
};
