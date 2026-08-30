#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_1_229B74AAA4ABB8C3___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC136430)
#define CLASS_1_229B74AAA4ABB8C3___C__DISPLAYCLASS1_0___GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0xC136550)

inline static constexpr unsigned int Class_1_229B74AAA4ABB8C3___c__DisplayClass1_0_TypeDefinitionIndex = 64992;

class Class_1_229B74AAA4ABB8C3___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetRoleByID_b__0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_229B74AAA4ABB8C3___C__DISPLAYCLASS1_0___GETROLEBYID_B__0_OFFSET))(this, a1);
	}
};
