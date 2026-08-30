#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA4340)
#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x18FA4730)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD___c__DisplayClass5_0_TypeDefinitionIndex = 65380;

class Class_1_0812913C2F0E10CD___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRoleByID_b__0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__GETROLEBYID_B__0_OFFSET))(this, a1);
	}
};
