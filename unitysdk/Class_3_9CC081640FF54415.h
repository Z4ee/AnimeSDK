#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_584A6534C6157D2A.h"
#include "unitysdk/RPG/GameCore/BattleHintToastStyle.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_0AF67D4854407D4C;

#define CLASS_3_9CC081640FF54415_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x17981750)
#define CLASS_3_9CC081640FF54415_METHOD_3_6F57C0C4237B910A_OFFSET UNITYSDK_OFFSET(0x17981790)
#define CLASS_3_9CC081640FF54415__CTOR_OFFSET UNITYSDK_OFFSET(0x17981780)

inline static constexpr unsigned int Class_3_9CC081640FF54415_TypeDefinitionIndex = 21570;

class Class_3_9CC081640FF54415 : public ::Class_2_584A6534C6157D2A
{
public:
	::Class_2_0AF67D4854407D4C* Field_3_1; // 0x18
	::RPG::GameCore::BattleHintToastStyle Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CC081640FF54415__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9CC081640FF54415*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9CC081640FF54415*&))((::PBYTE)hIl2Cpp + CLASS_3_9CC081640FF54415_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6F57C0C4237B910A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9CC081640FF54415* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9CC081640FF54415*))((::PBYTE)hIl2Cpp + CLASS_3_9CC081640FF54415_METHOD_3_6F57C0C4237B910A_OFFSET))(a1, a2);
	}
};
