#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeToastData; }

#define CLASS_2_67556107F6051F25___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x128AD5B0)
#define CLASS_2_67556107F6051F25___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x128AD5C0)

inline static constexpr unsigned int Class_2_67556107F6051F25___c__DisplayClass2_0_TypeDefinitionIndex = 47902;

class Class_2_67556107F6051F25___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::DirectDeliveryNoticeToastData* data; // 0x10
	::System::UInt32 avatarID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67556107F6051F25___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67556107F6051F25___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this);
	}
};
