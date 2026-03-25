#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB82C0)
#define CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS3_0___WOULDCAUSEHIPPLENMINIDEATH_B__0_OFFSET UNITYSDK_OFFSET(0x10AB83A0)

inline static constexpr unsigned int Class_1_3C8DB6E0E9BAE6A4___c__DisplayClass3_0_TypeDefinitionIndex = 63144;

class Class_1_3C8DB6E0E9BAE6A4___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Int32 dyingEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __WouldCauseHipplenMiniDeath_b__0(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS3_0___WOULDCAUSEHIPPLENMINIDEATH_B__0_OFFSET))(this, id);
	}
};
