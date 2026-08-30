#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87F2ABA4DD338819;

#define CLASS_1_F9FBCC956DFCF137_26_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0xC0F3870)
#define CLASS_1_F9FBCC956DFCF137_26__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F3880)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_26_TypeDefinitionIndex = 75582;

class Class_1_F9FBCC956DFCF137_26 : public ::System::Object
{
public:
	::Class_1_87F2ABA4DD338819* _Notify_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_87F2ABA4DD338819* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F2ABA4DD338819*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_26__CTOR_OFFSET))(this, a1);
	}

	::Class_1_87F2ABA4DD338819* get_Notify()
	{
		return ((::Class_1_87F2ABA4DD338819*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_26_GET_NOTIFY_OFFSET))(this);
	}
};
