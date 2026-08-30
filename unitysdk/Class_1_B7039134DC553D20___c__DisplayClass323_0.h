#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"

#define CLASS_1_B7039134DC553D20___C__DISPLAYCLASS323_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B71810)
#define CLASS_1_B7039134DC553D20___C__DISPLAYCLASS323_0__REPORTFATERINOPENREPLACECARD_B__0_OFFSET UNITYSDK_OFFSET(0x11B75640)

inline static constexpr unsigned int Class_1_B7039134DC553D20___c__DisplayClass323_0_TypeDefinitionIndex = 60130;

class Class_1_B7039134DC553D20___c__DisplayClass323_0 : public ::System::Object
{
public:
	::System::UInt32 recommendedCardID; // 0x10
	::System::UInt32 changedCardID; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__DISPLAYCLASS323_0__CTOR_OFFSET))(this);
	}

	::UnityEngine::NativeString _ReportFateRinOpenReplaceCard_b__0(::System::UInt32 a1)
	{
		return ((::UnityEngine::NativeString(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7039134DC553D20___C__DISPLAYCLASS323_0__REPORTFATERINOPENREPLACECARD_B__0_OFFSET))(this, a1);
	}
};
