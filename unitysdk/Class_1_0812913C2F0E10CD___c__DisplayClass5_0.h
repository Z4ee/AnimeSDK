#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97721E0)
#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x9772560)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD___c__DisplayClass5_0_TypeDefinitionIndex = 60140;

class Class_1_0812913C2F0E10CD___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRoleByID_b__0(::RPG::Client::GridFightRole* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS5_0__GETROLEBYID_B__0_OFFSET))(this, x);
	}
};
