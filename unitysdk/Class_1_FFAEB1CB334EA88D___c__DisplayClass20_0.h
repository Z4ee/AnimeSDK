#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_FFAEB1CB334EA88D___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32FE50)
#define CLASS_1_FFAEB1CB334EA88D___C__DISPLAYCLASS20_0___PICKPIECEFROMLIBRARY_B__0_OFFSET UNITYSDK_OFFSET(0x1C330BD0)

inline static constexpr unsigned int Class_1_FFAEB1CB334EA88D___c__DisplayClass20_0_TypeDefinitionIndex = 41018;

class Class_1_FFAEB1CB334EA88D___c__DisplayClass20_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::UInt32>* safeStyles; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PickPieceFromLibrary_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C__DISPLAYCLASS20_0___PICKPIECEFROMLIBRARY_B__0_OFFSET))(this, a1);
	}
};
