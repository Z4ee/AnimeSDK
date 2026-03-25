#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB82E0)
#define CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS6_0___DESTROYENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x10AB8410)

inline static constexpr unsigned int Class_1_3C8DB6E0E9BAE6A4___c__DisplayClass6_0_TypeDefinitionIndex = 63146;

class Class_1_3C8DB6E0E9BAE6A4___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Int32 dyingEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __DestroyEntity_b__0(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS6_0___DESTROYENTITY_B__0_OFFSET))(this, id);
	}
};
