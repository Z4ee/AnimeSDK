#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EDE247AF05B200CA.h"
#include "unitysdk/System/Object.h"

class Class_1_F8D21125F3922568;

#define CLASS_1_9A84770426095DA7_METHOD_1_4BBA8277D986811A_OFFSET UNITYSDK_OFFSET(0x12A6D000)
#define CLASS_1_9A84770426095DA7__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6E330)

inline static constexpr unsigned int Class_1_9A84770426095DA7_TypeDefinitionIndex = 57759;

class Class_1_9A84770426095DA7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A84770426095DA7__CTOR_OFFSET))(this);
	}

	::Class_1_F8D21125F3922568* Method_1_4BBA8277D986811A(::Struct_2_EDE247AF05B200CA& a1)
	{
		return ((::Class_1_F8D21125F3922568*(*)(::PVOID, ::Struct_2_EDE247AF05B200CA&))((::PBYTE)hIl2Cpp + CLASS_1_9A84770426095DA7_METHOD_1_4BBA8277D986811A_OFFSET))(this, a1);
	}
};
