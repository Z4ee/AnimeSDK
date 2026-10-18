#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_3773939C9BD251A6;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define CLASS_4_D693C8A5E9577E1C_METHOD_4_DBB6C8DD287DC58A_OFFSET UNITYSDK_OFFSET(0xD791C40)
#define CLASS_4_D693C8A5E9577E1C__CTOR_OFFSET UNITYSDK_OFFSET(0xD791C30)

inline static constexpr unsigned int Class_4_D693C8A5E9577E1C_TypeDefinitionIndex = 77626;

class Class_4_D693C8A5E9577E1C : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_3773939C9BD251A6* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_3773939C9BD251A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_3773939C9BD251A6*))((::PBYTE)hIl2Cpp + CLASS_4_D693C8A5E9577E1C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_DBB6C8DD287DC58A(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_D693C8A5E9577E1C_METHOD_4_DBB6C8DD287DC58A_OFFSET))(this, a1);
	}
};
