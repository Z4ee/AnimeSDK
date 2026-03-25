#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_0_16E4307DCC419505_315;
class Class_2_B508B2BE5228EBE2;

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__APPLYSTACKSYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x8B70F60)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8B6EE70)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass148_0_TypeDefinitionIndex = 39972;

class Class_2_B508B2BE5228EBE2___c__DisplayClass148_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_310* profileChangeAsyncHandle; // 0x10
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x18
	::Class_0_16E4307DCC419505_315* s; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyStackSyncResLoading_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS148_0__APPLYSTACKSYNCRESLOADING_B__0_OFFSET))(this, v);
	}
};
