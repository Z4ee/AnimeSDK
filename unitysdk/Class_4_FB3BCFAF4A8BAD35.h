#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_3773939C9BD251A6;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define CLASS_4_FB3BCFAF4A8BAD35_METHOD_4_9ACFABBB24F18F93_OFFSET UNITYSDK_OFFSET(0x17DA0EE0)
#define CLASS_4_FB3BCFAF4A8BAD35__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA0ED0)

inline static constexpr unsigned int Class_4_FB3BCFAF4A8BAD35_TypeDefinitionIndex = 73670;

class Class_4_FB3BCFAF4A8BAD35 : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_3773939C9BD251A6* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_3773939C9BD251A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_3773939C9BD251A6*))((::PBYTE)hIl2Cpp + CLASS_4_FB3BCFAF4A8BAD35__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_9ACFABBB24F18F93(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_FB3BCFAF4A8BAD35_METHOD_4_9ACFABBB24F18F93_OFFSET))(this, a1);
	}
};
