#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_C85C4DAB350DD5FC_2;

#define CLASS_1_776B0504B8892BA3___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9EBC0)
#define CLASS_1_776B0504B8892BA3___C__DISPLAYCLASS6_0__GETACQUIREDBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xBB9FD30)

inline static constexpr unsigned int Class_1_776B0504B8892BA3___c__DisplayClass6_0_TypeDefinitionIndex = 79771;

class Class_1_776B0504B8892BA3___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAcquiredByOwnerType_b__0(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3___C__DISPLAYCLASS6_0__GETACQUIREDBYOWNERTYPE_B__0_OFFSET))(this, a1);
	}
};
