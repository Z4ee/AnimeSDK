#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_3773939C9BD251A6;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define CLASS_4_40FD1943FB5C5B50_METHOD_4_5706DC722AACDFFE_OFFSET UNITYSDK_OFFSET(0x1A1014B0)
#define CLASS_4_40FD1943FB5C5B50__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1014A0)

inline static constexpr unsigned int Class_4_40FD1943FB5C5B50_TypeDefinitionIndex = 77154;

class Class_4_40FD1943FB5C5B50 : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_3773939C9BD251A6* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_3773939C9BD251A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_3773939C9BD251A6*))((::PBYTE)hIl2Cpp + CLASS_4_40FD1943FB5C5B50__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_5706DC722AACDFFE(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_40FD1943FB5C5B50_METHOD_4_5706DC722AACDFFE_OFFSET))(this, a1);
	}
};
