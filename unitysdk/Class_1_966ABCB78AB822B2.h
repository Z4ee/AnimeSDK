#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_966ABCB78AB822B2_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x190E5540)
#define CLASS_1_966ABCB78AB822B2__CTOR_OFFSET UNITYSDK_OFFSET(0x190E5670)

inline static constexpr unsigned int Class_1_966ABCB78AB822B2_TypeDefinitionIndex = 12876;

class Class_1_966ABCB78AB822B2 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightRoleSkillTag Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_966ABCB78AB822B2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_966ABCB78AB822B2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_966ABCB78AB822B2*&))((::PBYTE)hIl2Cpp + CLASS_1_966ABCB78AB822B2_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
