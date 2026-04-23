#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_0B97624EA2BF3959_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1822E1E0)
#define CLASS_1_0B97624EA2BF3959__CTOR_OFFSET UNITYSDK_OFFSET(0x1822E310)

inline static constexpr unsigned int Class_1_0B97624EA2BF3959_TypeDefinitionIndex = 14356;

class Class_1_0B97624EA2BF3959 : public ::System::Object
{
public:
	::RPG::GameCore::BattleResultConditionType Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B97624EA2BF3959__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0B97624EA2BF3959*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0B97624EA2BF3959*&))((::PBYTE)hIl2Cpp + CLASS_1_0B97624EA2BF3959_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
