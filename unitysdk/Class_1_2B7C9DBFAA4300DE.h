#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_2B7C9DBFAA4300DE_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1C8E5D80)
#define CLASS_1_2B7C9DBFAA4300DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E6030)

inline static constexpr unsigned int Class_1_2B7C9DBFAA4300DE_TypeDefinitionIndex = 11738;

class Class_1_2B7C9DBFAA4300DE : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint CONAIKKDGGO; // 0x10
	::RPG::GameCore::FixPoint LIOIAIIHLON; // 0x18
	::RPG::GameCore::FixPoint HBJHAIAJABL; // 0x20
	::RPG::GameCore::FixPoint DNPIAKNBJCC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7C9DBFAA4300DE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_2B7C9DBFAA4300DE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_2B7C9DBFAA4300DE*&))((::PBYTE)hIl2Cpp + CLASS_1_2B7C9DBFAA4300DE_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
