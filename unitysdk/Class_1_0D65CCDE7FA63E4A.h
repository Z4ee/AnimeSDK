#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_0D65CCDE7FA63E4A_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x18DA1530)
#define CLASS_1_0D65CCDE7FA63E4A__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA16E0)

inline static constexpr unsigned int Class_1_0D65CCDE7FA63E4A_TypeDefinitionIndex = 14358;

class Class_1_0D65CCDE7FA63E4A : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::RPG::GameCore::BattleResultConditionType Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D65CCDE7FA63E4A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0D65CCDE7FA63E4A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0D65CCDE7FA63E4A*&))((::PBYTE)hIl2Cpp + CLASS_1_0D65CCDE7FA63E4A_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
