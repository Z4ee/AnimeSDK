#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define CLASS_1_AF67E01114A98070___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA04C0)
#define CLASS_1_AF67E01114A98070___C__DISPLAYCLASS21_0__GETRECOMMENDEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0x16DA1890)

inline static constexpr unsigned int Class_1_AF67E01114A98070___c__DisplayClass21_0_TypeDefinitionIndex = 61761;

class Class_1_AF67E01114A98070___c__DisplayClass21_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRecommendEquips_b__0(::RPG::Client::GridFightFormationRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070___C__DISPLAYCLASS21_0__GETRECOMMENDEQUIPS_B__0_OFFSET))(this, a1);
	}
};
