#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define CLASS_1_AF67E01114A98070___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE32A0)
#define CLASS_1_AF67E01114A98070___C__DISPLAYCLASS22_0__GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0xBAE4560)

inline static constexpr unsigned int Class_1_AF67E01114A98070___c__DisplayClass22_0_TypeDefinitionIndex = 64746;

class Class_1_AF67E01114A98070___c__DisplayClass22_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRoleByID_b__0(::RPG::Client::GridFightFormationRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070___C__DISPLAYCLASS22_0__GETROLEBYID_B__0_OFFSET))(this, a1);
	}
};
