#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;

#define CLASS_1_D8C7E5539A252BC5___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181810C0)
#define CLASS_1_D8C7E5539A252BC5___C__DISPLAYCLASS9_0__REMOVEBUFFSBYNAMES_B__0_OFFSET UNITYSDK_OFFSET(0x181811E0)

inline static constexpr unsigned int Class_1_D8C7E5539A252BC5___c__DisplayClass9_0_TypeDefinitionIndex = 35742;

class Class_1_D8C7E5539A252BC5___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* buffNames; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveBuffsByNames_b__0(::Class_1_7686EC5B8E7BB729* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7686EC5B8E7BB729*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5___C__DISPLAYCLASS9_0__REMOVEBUFFSBYNAMES_B__0_OFFSET))(this, a1);
	}
};
